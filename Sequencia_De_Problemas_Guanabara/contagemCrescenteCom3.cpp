#include <iostream> // Para usar std::cout
#include <clocale>
#ifdef _WIN32
#include <Windows.h>
#endif


int main() {
    // Define a página de código do console para UTF-8 no Windows
    SetConsoleOutputCP(CP_UTF8);


    // 1. Inicialização: Começamos nossa contagem em 1
    int contador = 3;

    // 2. Condição: O laço continuará enquanto 'contador' for menor ou igual a 10
    while (contador <= 18) {
        // Imprime o valor atual do contador
        std::cout << "Número: " << contador << std::endl;

        // 3. Incremento: Aumenta o valor do contador em 1 para a próxima volta
        contador += 3; // O mesmo que 'contador = contador + 1;'
    }

    std::cout << "Contagem finalizada!" << std::endl;

    return 0;
}
