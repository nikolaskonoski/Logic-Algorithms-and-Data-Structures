#include <iostream> // Para operações de entrada/saída (cin, cout)
#include <cmath>    // Para funções matemáticas (sqrt, pow, etc.)
#include <vector>   // Para usar vetores (arrays dinâmicos)
#include <string>   // Para usar a classe string
#include <iomanip>  // Para manipular a saída (ex: setprecision)
#include <limits>   // Para std::numeric_limits

//Constantes para definir a porcentagem respectiva de aumento 
const double ate3AnosDeEmpresa = 3.0;
const double entre3E10Anos = 12.5;
const double acimaDe10Anos = 20.0;


int main() {
    // Variáveis para os dados do funcionário
    std::string nome;
    int anosDeEmpresa;
    double salario;

    // Coleta de dados do usuário
    std::cout << "Digite o nome do funcionario: ";
    // Para ler nomes com espaço, usamos std::getline
    std::getline(std::cin, nome);

    std::cout << "Digite o salario atual: R$";
    std::cin >> salario;
    // Limpa o buffer de entrada para evitar problemas com a próxima leitura
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Digite quantos anos de empresa ele(a) tem: ";
    std::cin >> anosDeEmpresa;
    // Limpa o buffer de entrada, boa prática após usar std::cin >>
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Variáveis para o cálculo
    double percentualAumento = 0.0;
    double novoSalario = 0.0;

    if (anosDeEmpresa <= 3) {
        percentualAumento = ate3AnosDeEmpresa;
    } else if (anosDeEmpresa > 3 && anosDeEmpresa <= 10) {
        percentualAumento = entre3E10Anos;
    } else { // Acima de 10 anos
        percentualAumento = acimaDe10Anos;
    }

    // Calcula o novo salário
    novoSalario = salario + (salario * (percentualAumento / 100.0));

    // Exibe o resultado formatado
    std::cout << "\n--- Relatorio de Aumento ---\n";
    std::cout << "O(A) funcionario(a) " << nome << " vai ter um aumento de " << percentualAumento << "%." << std::endl;
    std::cout << std::fixed << std::setprecision(2); // Formata para 2 casas decimais
    std::cout << "Seu novo salario sera de R$" << novoSalario << std::endl;

    return 0;
}