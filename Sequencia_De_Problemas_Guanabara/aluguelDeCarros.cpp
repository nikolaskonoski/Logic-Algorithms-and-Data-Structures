#include <iostream>  // Para operações de entrada/saída (cin, cout)
#include <cmath>     // Para funções matemáticas (sqrt, pow, etc.)
#include <string>    // Para usar a classe string
#include <iomanip>   // Para manipular a saída (ex: setprecision)
#include <limits>    // Para std::numeric_limits
#include <algorithm> // Para a função std::transform
#include <cctype>    // Para a função std::tolower
#include <stdexcept> // Para std::invalid_argument e std::stod
#include <clocale>
#ifdef _WIN32
#include <Windows.h>
#endif


//Constante para definir os valores do aluguel dos carros Populares
const double diariaCarrosPopulares = 90.0;
const double ate100Kms = 0.20;
const double acimaDe100Kms = 0.10;

//Constantes para definir os valor dos carros de Luxo 
const double diariaCarrosLuxo = 150.0;
const double ate200Kms = 0.30;
const double acimaDe200Kms = 0.25;

//Função para calcular o valor para um automóvel de luxo
double valorDeAluguelLuxo(double diarias, double kilometros)
{
    if (kilometros <= 200)
        return (diarias * diariaCarrosLuxo) + (kilometros * ate200Kms);
    else
        return (diarias * diariaCarrosLuxo) + (kilometros * acimaDe200Kms);
}

//Função para calcular o valor para um automóvel popular
double valorDeAluguelPopular(double diarias, double kilometros)
{
    if (kilometros <= 100)
    return (diarias * diariaCarrosPopulares) + (kilometros * ate100Kms);
    else
    return (diarias * diariaCarrosPopulares) + (kilometros * acimaDe100Kms);    
}


int main()
{
    // Define a página de código do console para UTF-8 no Windows
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    double diarias, kilometros;
    double resultado = 0.0;

    std::string tipoDeCarro;
    std::cout << "Digite o tipo de carro (popular ou luxo): ";
    std::cin >> tipoDeCarro;

    // Converte a string de entrada para minúsculas para tornar a comparação case-insensitive
    std::transform(tipoDeCarro.begin(), tipoDeCarro.end(), tipoDeCarro.begin(),
                   [](unsigned char c){ return std::tolower(c); });

    std::cout << "Digite a quantidade de diarias: ";
    std::cin >> diarias;

    std::cout << "Digite a quantidade de kilometros rodados: ";
    std::cin >> kilometros;

    if (tipoDeCarro == "popular")
    {
        resultado = valorDeAluguelPopular(diarias, kilometros);
    }
    else if (tipoDeCarro == "luxo")
    {
        resultado = valorDeAluguelLuxo(diarias, kilometros);
    }
    else
    {
        std::cerr << "Erro: Tipo de carro inválido. Por favor, digite 'popular' ou 'luxo'." << std::endl;
        return 1; // Encerra com código de erro
    }

    std::cout << std::fixed << std::setprecision(2); // Formata para 2 casas decimais
    std::cout << "O valor total do aluguel é: R$" << resultado << std::endl;

    return 0;
}
