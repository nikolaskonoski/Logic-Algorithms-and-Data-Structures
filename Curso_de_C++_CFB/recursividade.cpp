#include <iostream>
using namespace std;
/*

//Caso sem recursividade

void contador(int num);

int main() 
{
    contador(20);

    return
}

void contador(int num) {
    for(int i = 0; i <= num, int cont; i++)
    {
        cout << i << "\n";
    }

}
*/

//Caso com recursividade
void contador(int num, int cont = 0);

int main() 
{
    contador(20);

    return
}

void contador(int num, int cont) {
    cout << cont << "\n";
    if(num > cont) {
        contador(num, ++cont); //A função está chamando ela mesma e criando uma nova função, fazendo uma ativação de memória. 
    }
}