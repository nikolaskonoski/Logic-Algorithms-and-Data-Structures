#include <iostream>

using namespace std;

int main()
{

    string veiculo = "Carro";
    string *pv;    // Um ponteiro armazena o endereço de memória de outra variável
    pv = &veiculo; // Ponteiro pv recebe o endereço da variável veiculo

    cout << pv << "\n"
         << &veiculo;

    *pv = "Moto"; // No endereço apontado por *pv, adicione o valor Moto.

    cout << "\n"
         << veiculo << "\n"
         << *pv;

    return 0;
}

/*
O ponteiro deve ser do mesmo tipo que a variável que ele irá apontar
Ponteiros fazem referência ao endereço de memória do dado
Consigo alterar valores de variáveis através do seu endereço de memória
Me possibilita acessar/alterar o valor da variável mesmo estando fora de um escopo



int * pn;
pn = &num;



*/