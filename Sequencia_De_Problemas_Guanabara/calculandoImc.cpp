#include <iostream>  // Para operações de entrada/saída (cin, cout)
#include <cmath>     // Para funções matemáticas (sqrt, pow, etc.)
#include <string>    // Para usar a classe string
#include <iomanip>   // Para manipular a saída (ex: setprecision)
#include <limits>    // Para std::numeric_limits
#include <stdexcept> // Para std::invalid_argument e std::stod
#include <clocale>
#ifdef _WIN32
#include <Windows.h>
#endif

// Declarando a função e os parametros
double imc(double n1, double n2);

// A definição da função deve corresponder ao seu protótipo,
// incluindo o tipo de retorno e os tipos dos parâmetros.
double imc(double peso, double altura)
{
    return (peso / (altura * altura));
}

int main()
{
    // Define a página de código do console para UTF-8 no Windows
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    // É uma boa prática declarar as variáveis dentro do escopo onde são usadas (aqui, na função main).
    // Isso evita o uso de variáveis globais, tornando o código mais limpo e seguro.
    double peso, altura;

    std::cout << "Digite o seu peso: ";
    std::cin >> peso;

    // 1. Lê a altura como uma string para tratar tanto vírgula quanto ponto.
    std::string altura_str;
    std::cout << "Digite a sua altura: ";
    std::cin >> altura_str;

    // 2. Procura por uma vírgula na string.
    size_t pos = altura_str.find(',');
    if (pos != std::string::npos)
    {
        // 3. Se encontrou, substitui a vírgula por um ponto.
        altura_str.replace(pos, 1, ".");
    }

    // 4. Converte a string (agora com ponto) para double.
    // O bloco try/catch lida com casos em que o usuário digita um texto inválido.
    try
    {
        altura = std::stod(altura_str);
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << "\nErro: Altura inválida. Por favor, use números (ex: 1.78 ou 1,78)." << std::endl;
        return 1; // Encerra o programa com um código de erro.
    }

    double resultado = imc(peso, altura);

    std::cout << std::fixed << std::setprecision(2); // Formata para 2 casas decimais
    std::cout << "Seu IMC é: " << resultado << std::endl;

    // 5. Adiciona a lógica para classificar o resultado do IMC
    std::cout << "Classificação: ";
    if (resultado < 18.5)
    {
        std::cout << "Abaixo do peso, bora puxar ferro e se alimentar seu frango." << std::endl;
    }
    else if (resultado < 25)
    {
        std::cout << "Peso ideal, tas bem hein." << std::endl;
    }
    else if (resultado < 30)
    {
        std::cout << "Sobrepeso, vai treinar e fechar a boca meu caro." << std::endl;
    }
    else if (resultado < 40)
    {
        std::cout << "Obesidade, é bixo...ou seca ou partiu vala." << std::endl;
    }
    else
    { // Acima de 40
        std::cout << "Obesidade mórbida, É..." << std::endl;
    }

    return 0; // Indica que o programa terminou com sucesso.
}
