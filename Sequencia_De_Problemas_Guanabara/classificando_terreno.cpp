#include <stdexcept> // Necessário para capturar exceções de conversão
#include <iostream> // Inclui a biblioteca para entrada e saída de dados (cout, cin)
#include <cmath> // Inclui a biblioteca para funções matemáticas (sqrt, pow, etc.)
#include <clocale> // Inclui a biblioteca para configurar a localidade (acentos, etc.)
#ifdef _WIN32 // Inclui a API do Windows para mudar a página de código do console (solução mais robusta)
#include <Windows.h>
#endif

//Função de calculo da area
double calculoDeArea(double largura, double comprimento) {
    return (largura * comprimento);
}

int main() {
// Define a página de código do console para UTF-8 no Windows
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    //Variaveis que irão receber os inputs
    double largura, comprimento;

    std::cout << "Digite a largura do terreno em metros (m): ";
    std::cin >> largura;

    std::cout << "Digite o comprimento do terreno em metros (m): ";
    std::cin >> comprimento;

    double area = calculoDeArea(largura, comprimento);

    std::cout << "A área do terreno é: " << area << " m²." << std::endl;

    return 0; // Retorna 0 para indicar que o programa executou com sucesso

};