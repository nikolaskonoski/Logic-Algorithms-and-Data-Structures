// Usamos iostream para imprimir no console e <string> para a função std::stoi
#include <iostream>
#include <string>
#include <stdexcept> // Necessário para capturar exceções de conversão

// A função principal que recebe os argumentos da linha de comando
int main(int argc, char** argv) {
    // 1. VERIFICAR A QUANTIDADE DE ARGUMENTOS
    // Se o número de argumentos não for 3 (programa + num1 + num2),
    // o programa exibe uma mensagem de erro e encerra.
    if (argc != 3) {
        std::cerr << "Erro: Uso incorreto." << std::endl;
        std::cerr << "Exemplo: " << argv[0] << " <numero1> <numero2>" << std::endl;
        return 1; // Retorna 1 para indicar que o programa terminou com um erro
    }

    // Declara duas variáveis inteiras para armazenar os números convertidos
    int numero1, numero2;

    // 2. CONVERTER OS ARGUMENTOS PARA NÚMEROS
    // Usamos um bloco try-catch para lidar com erros de conversão
    // (por exemplo, se o usuário digitar "texto" em vez de um número).
    try {
        // Tenta converter o segundo argumento (argv[1]) para um inteiro
        numero1 = std::stoi(argv[1]);
        // Tenta converter o terceiro argumento (argv[2]) para um inteiro
        numero2 = std::stoi(argv[2]);
    } catch (const std::invalid_argument& e) {
        // Se a conversão falhar (argumento inválido), este bloco é executado
        std::cerr << "Erro: Os argumentos devem ser numeros inteiros validos." << std::endl;
        return 1; // Termina com erro
    } catch (const std::out_of_range& e) {
        // Se o número for muito grande ou muito pequeno para um 'int', este bloco é executado
        std::cerr << "Erro: Um dos numeros esta fora do intervalo permitido." << std::endl;
        return 1; // Termina com erro
    }

    // 3. REALIZAR A OPERAÇÃO E MOSTRAR O RESULTADO
    int resultado = numero1 + numero2;
    std::cout << numero1 << " + " << numero2 << " = " << resultado << std::endl;

    // A função main retorna 0 para indicar que o programa terminou com sucesso.
    return 0;
}