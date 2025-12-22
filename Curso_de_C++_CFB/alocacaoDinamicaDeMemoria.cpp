#include <iostream>
#include <stdio.h>  //para a função gets
#include <stdlib.h> //para a função malloc (alocação dinâmica de memória) e free

using namespace std;

int main()
{
    char *vnome; // maneira sem alocação dinamica -> char vnome[50];

    // Aqui também estamos fazendo um tape cast para converter o ponteiro retornado pela função malloc para o tipo char*
    vnome = (char *)malloc(sizeof(char)); // alocação dinâmica de memória, alguns programadores usam o espaço de reserva a mais para deixar espaço para o caractere nulo/finalizador '\0'
    gets(vnome);                          // lê uma string e armazena na variável vnome
    cout << vnome << endl;
    cout << sizeof(int);
};

// sizeof() -> mostra o tamanho em bytes do tipo de dado especificado entre parênteses
// int -> 4 bytes
// char -> 1 byte
// float -> 4 bytes
// double -> 8 bytes
// bool -> 1 byte
// long -> 4 bytes
// long long -> 8 bytes
// short -> 2 bytes
// void -> 0 bytes
// malloc -> função que aloca dinamicamente uma quantidade de memória especificada entre parênteses
// free -> função que libera a memória alocada dinamicamente
// gets -> função que lê uma string do teclado e armazena na variável especificada entre parênteses
