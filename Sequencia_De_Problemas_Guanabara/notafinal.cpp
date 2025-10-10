//Inclui a biblioteca para entrada e saída de dados (cout, cin)
#include <iostream>
// Inclui a biblioteca para funções matemáticas (sqrt, pow, etc.)
#include <cmath>
// Inclui a biblioteca para configurar a localidade (acentos, etc.)
#include <clocale>
// Inclui a API do Windows para mudar a página de código do console (solução mais robusta)
#ifdef _WIN32
#include <Windows.h>
#endif

double n1, n2;


// Em C++, funções devem ser declaradas fora da `main`.
double calcular_media(float n1, float n2) {
    return (n1 + n2) / 2.0;
}

int main(int argc, char** argv)
{
// Define a página de código do console para UTF-8 no Windows
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    // Pede ao usuário para digitar a primeira nota 
    std::cout << "Digite a primeira nota: ";
    std::cin >> n1;

    // Pede ao usuário para digitar a segunda nota 
    std::cout << "Digite a segunda nota: ";
    std::cin >> n2;

    // 1. Chamamos a função para calcular a média e guardamos o valor.
    double resultado_media = calcular_media(n1, n2);

    // Mostra a média calculada para o usuário.
    std::cout << "A média do aluno foi: " << resultado_media << std::endl;

    // 2. Compara o *resultado* da média e exibe a situação do aluno.
    if (resultado_media <= 4.9)
    {
        std::cout << "Aluno reprovado." << std::endl;
    }
    // 3. A sintaxe do `else if` foi corrigida.
    // Se não é <= 4.9, já sabemos que é > 4.9, então só precisamos checar o limite superior.
    else if (resultado_media <= 6.9)
    {
        std::cout << "O aluno está em recuperação." << std::endl;
    }
    else
    {
        std::cout << "Aluno aprovado." << std::endl;
    }

    return 0; // Indica que o programa terminou com sucesso
}