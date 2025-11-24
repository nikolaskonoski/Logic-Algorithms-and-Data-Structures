#include <iostream>

using namespace std;

// É necessário prototipar/apresentar a função ao progrma antes de usá-la
void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main()

{
    // Criei esta variável para jogar o resultado de return aqui
    //int res;

    //Criando um vetor do tipo string
    string transp[4] = {"carro","moto","aviao","barco"};

    /*
    Reaproveitando a função para chama-las mais vezes
    for(int i = 0; i < 10; i++){
        texto();
    }
    */

    /*
    soma(15, 5);
    */

    /*
    res = soma2(175, 25);


    //É possivel que o uso seja exibido dessas duas formas armazenando na variavel ou diretamente usando a função no cout: 
    cout << "Soma dos valores: " << soma2(175, 25) << "\n";
    cout << "Soma dos valores: " << res << "\n";
    */

    tr(transp);


    return 0;
}

void texto()
{
    cout << "\nCanal Fessor Bruno\n";
}

void soma(int n1, int n2)
{
    cout << "Soma dos valores: " << n1 + n2 << "\n";
}

int soma2(int n1, int n2)
{
    return n1 + n2; // sempre que o valor de saida for diferente de void, usar o return.
}

void tr(string tra[4]) {
    for(int i = 0; i < 4; i++) {
        cout << tra[i] << "\n";
    }
} 