#include <iostream>
#include <iomanip> // Para std::fixed e std::setprecision

int main() {
    // --- Problema com Ponto Flutuante (double/float) ---

    // Imagine um produto que custa R$ 10.99 e tem um desconto de 10%.
    double preco_double = 10.99;
    double desconto_double = 0.10; // 10%

    double valor_desconto_double = preco_double * desconto_double;
    double preco_final_double = preco_double - valor_desconto_double;

    // A "sujeira" ou imprecisão pode aparecer aqui.
    // O resultado esperado é 9.891, que deveria ser arredondado para 9.89, mas a representação interna é imprecisa.
    // Vamos imprimir com muitas casas decimais para ver a imprecisão.
    std::cout << "--- Usando double (com imprecisao) ---" << std::endl;
    std::cout << "Preco original: " << preco_double << std::endl;
    std::cout << "Valor do desconto: " << std::fixed << std::setprecision(20) << valor_desconto_double << std::endl;
    std::cout << "Preco final (impreciso): " << std::fixed << std::setprecision(20) << preco_final_double << std::endl;
    std::cout << "Preco final (formatado para 2 casas): " << std::fixed << std::setprecision(2) << preco_final_double << std::endl;
    std::cout << "O valor acima pode parecer correto (9.89), mas a imprecisao interna pode causar erros em comparacoes e calculos futuros." << std::endl;
    std::cout << "\n-------------------------------------------------\n" << std::endl;


    // --- Solucao: Usando Inteiros para representar centavos ---

    // Convertemos todos os valores para a menor unidade (centavos).
    // R$ 10.99 se torna 1099 centavos.
    int preco_em_centavos = 1099; // R$ 10.99
    int desconto_percentual = 10; // 10%

    // Calculamos o desconto em centavos.
    // Usamos (preco * percentual) / 100 para manter a precisao.
    int valor_desconto_centavos = (preco_em_centavos * desconto_percentual) / 100;
    int preco_final_centavos = preco_em_centavos - valor_desconto_centavos;

    // Para exibir o valor formatado, convertemos de volta para reais no último momento.
    double preco_final_formatado = preco_final_centavos / 100.0;

    std::cout << "--- Usando inteiros (precisao garantida) ---" << std::endl;
    std::cout << "Preco original (em centavos): " << preco_em_centavos << std::endl;
    std::cout << "Valor do desconto (em centavos): " << valor_desconto_centavos << std::endl;
    std::cout << "Preco final (em centavos): " << preco_final_centavos << std::endl;
    std::cout << "\nPreco final (convertido para R$ na exibicao): " << std::fixed << std::setprecision(2) << preco_final_formatado << std::endl;
    std::cout << "O calculo foi feito inteiramente com inteiros, sem nenhuma perda de precisao." << std::endl;

    return 0;
}
