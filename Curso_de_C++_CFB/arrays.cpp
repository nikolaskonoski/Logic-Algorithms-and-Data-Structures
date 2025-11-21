#include <iostream>

using namespace std;

int main()
{

    int vetor[10]; //Isto significa que o array terá 10 posições, iniciando em 0 e indo até 9.
    /* Outra maneira de declarar arrays e valores é já atribuindo valores neles ao iniciar 
    /Dessa maneira eu tenho que definir o valor fixo no inicio 
    int vetor[5] = [10, 20, 30, 40, 50]; 
    
    */


    int i;

    //Atribuição de valor para cada index 
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    vetor[5] = 60; 
    vetor[6] = 70;
    vetor[7] = 80;
    vetor[8] = 90;
    vetor[9] = 100;

    cout << vetor[0] << "\n";
    cout << vetor[1] << "\n";
    cout << vetor[2] << "\n";
    cout << vetor[3] << "\n";
    cout << vetor[4] << "\n";
    cout << vetor[5] << "\n";

    //Outra maneira de iterar os arrays é usando um loop for 
    for (int i = 0; i < 10; i++)
    {
        cout << vetor[i] << "\n";
    }


//Posso usar sizeof ao invés de i < 10, só que ele retorna o tamanho em bytes do tipo de dado, então da pra dividir por 4, porém cuidado 
//Caso eu declare um array que não tenha uma posição, o que será retornado é um valor de lixo. (cuidado)
//Também posso fazer isso por meio de uma variável que pode ser declarada no topo  



    return 0;
}
