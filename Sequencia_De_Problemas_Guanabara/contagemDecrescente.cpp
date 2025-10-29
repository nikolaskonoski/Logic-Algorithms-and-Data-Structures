#include <iostream> // Para usar std::cout
#include <clocale>
#ifdef _WIN32
#include <Windows.h>
#endif


int main() {
    // Define a página de código do console para UTF-8 no Windows
    SetConsoleOutputCP(CP_UTF8);


    // 1. Inicialização: Começamos nossa contagem em 10
    int contador = 10;

    // 2. Condição: O laço continuará enquanto 'contador' for maior ou igual a 1
    while (contador >= 1) {
        // Imprime o valor atual do contador
        std::cout << "Número: " << contador << std::endl;

        // 3. Decremento: Diminui o valor do contador em 1 para a próxima volta
        contador--; // O mesmo que 'contador = contador - 1;'
    }

    std::cout << "Contagem finalizada!" << std::endl;

    return 0;
}
