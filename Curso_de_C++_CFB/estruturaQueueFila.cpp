#include <iostream>
#include <queue>

using namespace std;

int main()
{

    queue<string> golpes;

    //O primeiro 
    golpes.push("Grand Willy");
    golpes.push("Dropshot");
    golpes.push("Saque aberto");
    golpes.push("Saque Quick");

    cout << "Tamanho da fila: " << golpes.size() << "\n\n";

    cout << "Primeiro golpe: " << golpes.front() << "\n\n";

    cout << "Ultimo golpe: " << golpes.back() << "\n\n";
/*
Este loop faz o pop para imprimir e retirar o dado da fila 
while (!golpes.empty())
{
    cout << "Primeiro Golpe: " << golpes.front() << "\n\n";
    golpes.pop();
}

*/

    return 0;
}

/*

Nesta estrutura o primeiro dado a entrar é o último a sair. 

empty
size
front: mostra quem esta na frente da fila
back: mostra quem esta atrás da fila
push
*/