#include <iostream>

using namespace std;

void impNum(); // declaração da função externa

int num{10}; // variável global

int main() {

    impNum(); // chamada da função externa



    return 0;
}

/*
Não é permitido ter uma variavel com o mesmo nome no mesmo projeto.

É necessário compilar os arquivos juntos, por exemplo:
g++ classeExtern.cpp classExternAuxiliar.cpp -o classeExtern.exe

Uma maneira de acessar uma variável global em outro arquivo é usando a palavra-chave 'extern'.

Outra maneira é a do include, criando um arquivo de cabeçalho (.h) e incluindo-o nos arquivos que precisam acessar as variáveis ou funções declaradas nele.
*/