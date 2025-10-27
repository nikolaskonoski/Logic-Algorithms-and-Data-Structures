#include <iostream>  // Para operações de entrada/saída (cin, cout)
#include <string>    // Para usar a classe string
#include <limits>    // Para std::numeric_limits
#include <iomanip>   // Para manipular a saída (ex: setprecision)
#include <stdexcept> // Para std::invalid_argument e std::stod
#include <clocale>
#ifdef _WIN32
#include <Windows.h>
#endif

//Constantes de pontos
const double PONTOS_ATE_10_HORAS = 2.0;
const double PONTOS_DE_10_A_20_HORAS = 5.0;
const double PONTOS_ACIMA_DE_20_HORAS = 10.0;

//Protótipo da função pontuação
double pontuacaoTotal(double horas, double pontos);

// Função para definições de pontos
double pontuacaoTotal(double horas, double pontos) {
    return (horas * pontos);
}



int main()
{
    // Define a página de código do console para UTF-8 no Windows
    SetConsoleOutputCP(CP_UTF8);
    // Para garantir que a saída de ponto flutuante seja formatada corretamente
    std::cout << std::fixed << std::setprecision(2);

    // Variável que irá receber os pontos
    double horas = 0.00;
    double pontosGanhos = 0.0; // Variável para armazenar o resultado do cálculo

    try
    {
        std::cout << "Digite quantas horas de atividade fisica você teve: ";
        std::cin >> horas;

        // Validação de entrada: verifica se a leitura foi bem-sucedida e se as horas são não-negativas
        if (std::cin.fail() || horas < 0)
        {
            throw std::invalid_argument("Entrada inválida. Por favor, insira um número positivo para as horas.");
        }

        if (horas <= 10)
        {
            pontosGanhos = pontuacaoTotal(horas, PONTOS_ATE_10_HORAS);
        }
        // Se não for <= 10, então é > 10. Basta verificar se é <= 20.
        else if (horas <= 20)
        {
            pontosGanhos = pontuacaoTotal(horas, PONTOS_DE_10_A_20_HORAS);
        }
        // Se não for <= 20, então só pode ser > 20.
        else
        {
            pontosGanhos = pontuacaoTotal(horas, PONTOS_ACIMA_DE_20_HORAS);
        }
        std::cout << "Você ganhou " << pontosGanhos << " pontos!" << std::endl;
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << "\nErro: Horas inválidas. Por favor, use números (ex: 1.78 ou 1,78)." << std::endl;
        return 1; // Encerra o programa com um código de erro
    }

    return 0;
}