#include <iostream> // Para operações de entrada/saída (cin, cout)
#include <cmath>    // Para funções matemáticas (sqrt, pow, etc.)
#include <string>   // Para usar a classe string
#include <iomanip>  // Para manipular a saída (ex: setprecision)
#include <limits>   // Para std::numeric_limits

//Valor que define até quantos por cento a parcela mensal pode ter
const double porcentagemPermitidaDeParcela = 30.0;

// Função para analisar o empréstimo. Recebe os dados como parâmetros.
void analisarEmprestimo(double valorImovel, double salario, int anosParaPagar) {
    // Calcula o valor máximo da parcela (30% do salário)
    double parcelaMaxima = salario * (porcentagemPermitidaDeParcela / 100.0);
    
    // Calcula o número total de meses e o valor da parcela mensal
    int totalMeses = anosParaPagar * 12;
    double valorParcela = valorImovel / totalMeses;

    std::cout << "\n--- Análise de Empréstimo ---\n";
    std::cout << std::fixed << std::setprecision(2); // Formata para 2 casas decimais
    std::cout << "Para pagar um imóvel de R$" << valorImovel << " em " << anosParaPagar << " anos," << std::endl;
    std::cout << "a prestação será de R$" << valorParcela << "." << std::endl;

    // Compara o valor da parcela com o máximo permitido
    if (valorParcela <= parcelaMaxima) {
        std::cout << "Empréstimo APROVADO!" << std::endl;
    } else {
        std::cout << "Empréstimo NEGADO! A parcela excede 30% do seu salário." << std::endl;
        std::cout << "O valor máximo da parcela que você pode pagar é R$" << parcelaMaxima << "." << std::endl;
    }
}

int main(void) {
    double valorDoImovel, salario;
    int anosParaPagar;

    std::cout << "Digite o valor do imovel: R$";
    std::cin >> valorDoImovel;

    std::cout << "Digite o seu salário: R$";
    std::cin >> salario;

    std::cout << "Em quantos anos você pretende pagar? ";
    std::cin >> anosParaPagar;

    // Chama a função passando os valores coletados como argumentos
    analisarEmprestimo(valorDoImovel, salario, anosParaPagar);

    return 0;
};