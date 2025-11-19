#include <iostream>

using namespace std;

int main()
{ 
    int cont;

    cont = 20; 

    do
    {
        cout << "Go Global or nothing - " << cont << "\n";
        cont++;
    } while (cont < 20);
    
    cout << "\nDescansa no fim e nao no meio.\n";


    return 0;
}

/*
A diferença deste para o while é que ele executa o comando ao menos uma vez e verifica a condição no final 
*/