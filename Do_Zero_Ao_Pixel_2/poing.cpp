/*
To compile this code, you need to have SFML installed via MSYS2.
Use this command from the MSYS2 UCRT64 terminal, inside the project folder:
g++ poing.cpp -o poing.exe -lsfml-graphics -lsfml-window -lsfml-system
*/

#include <SFML/Graphics.hpp>
#include <variant>

// The Retangulo struct remains mostly the same
struct Retangulo {
    sf::RectangleShape shape;
    int largura;
    int altura;

    void setPosition(float x, float y) {
        // SFML 3 uses sf::Vector2f for position arguments
        shape.setPosition({x, y});
    }

    sf::Vector2f getPosition() {
        return shape.getPosition();
    }
};

// Helper function to create a rectangle
Retangulo CriarRetangulo(int x, int y, int largura, int altura, sf::Color color) {
    Retangulo r;
    r.largura = largura;
    r.altura = altura;
    r.shape.setSize({(float)largura, (float)altura});
    // SFML 3 uses sf::Vector2f for origin arguments
    r.shape.setOrigin({largura / 2.f, altura / 2.f});
    r.shape.setPosition({(float)x, (float)y});
    r.shape.setFillColor(color);
    return r;
}

int main() {
    // Window dimensions
    const int screenWidth = 800;
    const int screenHeight = 600;

    // SFML 3 uses a Vector2u for the VideoMode constructor
    sf::RenderWindow window(sf::VideoMode({(unsigned int)screenWidth, (unsigned int)screenHeight}), "Pong C++");
    window.setFramerateLimit(60);

    // Game objects
    Retangulo bola = CriarRetangulo(screenWidth / 2, screenHeight / 2, 20, 20, sf::Color::Yellow);
    sf::Vector2f velocidadeDaBola(5.f, 5.f);

    int larguraDosJogadores = bola.largura;
    int alturaDosJogadores = 3 * bola.altura;
    Retangulo jogador1 = CriarRetangulo(larguraDosJogadores / 2 + 10, screenHeight / 2, larguraDosJogadores, alturaDosJogadores, sf::Color::Red);
    Retangulo jogador2 = CriarRetangulo(screenWidth - (larguraDosJogadores / 2) - 10, screenHeight / 2, larguraDosJogadores, alturaDosJogadores, sf::Color::Blue);

    while (window.isOpen()) {
        // Event handling loop for SFML 3
        while (const auto event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        // Update logic
        // SFML 3 uses a Vector2f for move arguments
        bola.shape.move(velocidadeDaBola);

        // Collision with top and bottom walls
        if (bola.getPosition().y - bola.altura / 2 < 0 || bola.getPosition().y + bola.altura / 2 > screenHeight) {
            velocidadeDaBola.y = -velocidadeDaBola.y;
        }

        // Reset ball if it goes out of bounds (left or right)
        if (bola.getPosition().x - bola.largura/2 < 0 || bola.getPosition().x + bola.largura/2 > screenWidth) {
            bola.setPosition(screenWidth / 2, screenHeight / 2);
        }

        // Collision with players
        // In SFML 3, intersects was removed, we use findIntersection and check for a value.
        if (bola.shape.getGlobalBounds().findIntersection(jogador1.shape.getGlobalBounds()) ||
            bola.shape.getGlobalBounds().findIntersection(jogador2.shape.getGlobalBounds())) {
            velocidadeDaBola.x = -velocidadeDaBola.x;
        }

        // Player movement
        // In SFML 3, Keys are in the sf::Keyboard::Key enum
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
            jogador1.shape.move({0, -5.f});
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
            jogador1.shape.move({0, 5.f});
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up)) {
            jogador2.shape.move({0, -5.f});
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down)) {
            jogador2.shape.move({0, 5.f});
        }

        // Prevent players from going out of bounds
        if (jogador1.getPosition().y - jogador1.altura / 2 < 0) jogador1.setPosition(jogador1.getPosition().x, jogador1.altura / 2);
        if (jogador1.getPosition().y + jogador1.altura / 2 > screenHeight) jogador1.setPosition(jogador1.getPosition().x, screenHeight - jogador1.altura / 2);
        if (jogador2.getPosition().y - jogador2.altura / 2 < 0) jogador2.setPosition(jogador2.getPosition().x, jogador2.altura / 2);
        if (jogador2.getPosition().y + jogador2.altura / 2 > screenHeight) jogador2.setPosition(jogador2.getPosition().x, screenHeight - jogador2. altura / 2);

        // Drawing
        window.clear();
        window.draw(bola.shape);
        window.draw(jogador1.shape);
        window.draw(jogador2.shape);
        window.display();
    }

    return 0;
}