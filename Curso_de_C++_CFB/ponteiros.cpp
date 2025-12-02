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


//Cada endereço de memória pula de 4 em 4 pois int = 4bytes, como a contagem é hexadecimal, o ultimo item se for após o 9, recebera uma letra (a, b,c...).
    int *p;
    int array[10];


    *(p+=1); //Incrementando uma posição  
    *p=10; //Atribuindo o valor 10 para a variável || o mesmo que fazer array[0] = 10;
    cout << "\n" << p << "\n";

    *(p+=1);
    *p=20;
    cout << "\n" << p << "\n";

    p = &array[2]; //Manipulando de uma maneira sem tanta escala
    cout << "\n" << p << "\n";

    p = &array[3]; // *(p+=1)  faz um incremento da próxima posição de acordo com o tamanho (tipo) de bytes do ponteiro 
    cout << "\n" << p << "\n";

        





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