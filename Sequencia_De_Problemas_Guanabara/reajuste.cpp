#include <iostream>  // Para operações de entrada/saída (cin, cout)
#include <string>    // Para usar a classe string
#include <limits>    // Para std::numeric_limits
#include <algorithm> // Para std::transform
#include <iomanip>   // Para manipular a saída (ex: setprecision)
#include <stdexcept> // Para std::invalid_argument e std::stod
#include <clocale>
#ifdef _WIN32
#include <Windows.h>
#endif

// Constantes se o usuário for do gênero feminino (em porcentagem)
const double femininoMenosDe15Anos = 5.0;
const double femininoDe15A20Anos = 12.0;
const double femininoMaisDe20Anos = 23.0;

// Constantes se o usuário for do gênero masculino (em porcentagem)
const double masculinoMenosDe20Anos = 3.0;
const double masculinoDe20A30Anos = 13.0;
const double masculinoMaisDe30Anos = 25.0;

// Função que calcula o novo salário com base em um percentual de reajuste
double calcularNovoSalario(double salario, double percentualReajuste)
{
    double valorDoAumento = salario * (percentualReajuste / 100.0);
    return salario + valorDoAumento;
}


int main()
{
    // Define a página de código do console para UTF-8 no Windows
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    // Para garantir que a saída de ponto flutuante seja formatada corretamente
    std::cout << std::fixed << std::setprecision(2);

    // Variáveis que irão receber os inputs
    double salario = 0.0;
    double novoSalario = 0.0;
    double percentualAplicado = 0.0;
    std::string genero;
    int anosDeEmpresa;

    // Coleta de dados do usuário
    try
    {
        std::cout << "Digite o seu gênero M/F: ";
        std::cin >> genero;
        // Converte para maiúscula para facilitar a comparação
        std::transform(genero.begin(), genero.end(), genero.begin(), ::toupper);

        std::cout << "Digite quantos anos de empresa você tem: ";
        std::cin >> anosDeEmpresa;
        if (std::cin.fail() || anosDeEmpresa < 0) {
            throw std::invalid_argument("Anos de empresa inválidos. Digite um número positivo.");
        }

        std::cout << "Digite o seu salario: R$";
        std::cin >> salario;
        if (std::cin.fail() || salario < 0) {
            throw std::invalid_argument("Salário inválido. Digite um número positivo.");
        }

        if (genero == "F" || genero == "FEMININO")
        {
            if (anosDeEmpresa < 15)
            {
                percentualAplicado = femininoMenosDe15Anos;
            }
            // Se não for < 15, basta checar se é <= 20
            else if (anosDeEmpresa <= 20)
            {
                percentualAplicado = femininoDe15A20Anos;
            }
            else
            {
                percentualAplicado = femininoMaisDe20Anos;
            }
        }
        else if (genero == "M" || genero == "MASCULINO")
        {
            if (anosDeEmpresa < 20)
            {
                percentualAplicado = masculinoMenosDe20Anos;
            }
            // Se não for < 20, basta checar se é <= 30
            else if (anosDeEmpresa <= 30)
            {
                percentualAplicado = masculinoDe20A30Anos;
            }
            else
            {
                percentualAplicado = masculinoMaisDe30Anos;
            }
        }
        else
        {
            throw std::invalid_argument("Gênero inválido. Por favor, digite M ou F.");
        }

        // Calcula o novo salário após determinar o percentual
        novoSalario = calcularNovoSalario(salario, percentualAplicado);

        // Exibe o resultado
        std::cout << "\n--- Relatório de Reajuste ---\n";
        std::cout << "Salário atual: R$" << salario << std::endl;
        std::cout << "Percentual de aumento: " << percentualAplicado << "%" << std::endl;
        std::cout << "Novo salário: R$" << novoSalario << std::endl;
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << "\nErro: " << e.what() << std::endl;
        return 1; // Encerra o programa com um código de erro
    }

    return 0;
}
