#include <iostream>
#include <string.h>
#include <stdlib.h>


using namespace std;

int main(int argc, char *argv[])
{

    // argc (argument count) armazena o número de argumentos passados para o programa
    // argv (argument vector) é um array de strings (char*) que contém os argumentos

    if (argc > 1)
    {
        // strcmp compara a string pra dizer se ela é igual ou não
        if (!strcmp(argv[1], "sol"))
        {
            cout << "Vou ao clube.\n";
        }
        else if (!strcmp(argv[1], "nublado"))
        {
            cout << "Vou ao cinema.\n";
        }
        else
        {
            cout << "Vou ficar em casa.\n";
        }
    }

    system("pause");
    return 0;
}

/*
Entendi que é uma tomada de decisão por meio de um input de parâmetro
O parametro pode ser passado pelo prompt de comando ou criando um atalho na pasta do programa e passando o parametro nas propriedades
*/