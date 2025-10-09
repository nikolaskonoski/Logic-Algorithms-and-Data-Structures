// Inclui a biblioteca para entrada e saída de dados (cout, cin)
#include <iostream>
// Inclui a biblioteca para funções matemáticas (sqrt, pow, etc.)
#include <cmath>
// Inclui a biblioteca para configurar a localidade (acentos, etc.)
#include <clocale>
// Inclui a API do Windows para mudar a página de código do console (solução mais robusta)
#ifdef _WIN32
#include <Windows.h>
#endif

int main()
{
// Define a página de código do console para UTF-8 no Windows
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    // Declara duas variáveis para armazenar os números. É melhor declará-las dentro do main.
    double numero1, numero2;

    // Pede ao usuário para digitar o primeiro número
    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;

    // Pede ao usuário para digitar o segundo número
    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;

    // Compara os dois números e exibe o resultado
    if (numero1 > numero2)
    {
        std::cout << "O primeiro valor é maior." << std::endl;
    }
    else if (numero2 > numero1)
    {
        std::cout << "O segundo valor é maior." << std::endl;
    }
    else
    {
        std::cout << "Os valores são iguais." << std::endl;
    }

    return 0; // Indica que o programa terminou com sucesso
}