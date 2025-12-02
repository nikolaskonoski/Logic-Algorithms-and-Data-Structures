#include <iostream>

using namespace std;

void somar(float *var, float valor);  // Criando uma função com ponteiro para fazer a soma de um valor

// Protótipo da função de ponteiros em arrays
void iniArray(float *v);

int main()
{
    /*
    string veiculo = "Carro";
    string *pv;    // Um ponteiro armazena o endereço de memória de outra variável
    pv = &veiculo; // Ponteiro pv recebe o endereço da variável veiculo

    cout << pv << "\n"
         << &veiculo;

    *pv = "Moto"; // No endereço apontado por *pv, adicione o valor Moto.

    cout << "\n"
         << veiculo << "\n"
         << *pv;

    // Cada endereço de memória pula de 4 em 4 pois int = 4bytes, como a contagem é hexadecimal, o ultimo item se for após o 9, recebera uma letra (a, b,c...).
    int *p;
    // int array[10];

    *(p += 1); // Incrementando uma posição
    *p = 10;   // Atribuindo o valor 10 para a variável || o mesmo que fazer array[0] = 10;
    cout << "\n"
         << p << "\n";

    *(p += 1);
    *p = 20;
    cout << "\n"
         << p << "\n";

    // p = &array[2]; //Manipulando de uma maneira sem tanta escala
    cout << "\n"
         << p << "\n";

    // p = &array[3]; // *(p+=1)  faz um incremento da próxima posição de acordo com o tamanho (tipo) de bytes do ponteiro
    cout << "\n"
         << p << "\n";

    // Trecho do código que irá fazer a operação de funções com ponteiros
    float num = 0;
    somar(&num, 15);

    cout << num << "\n";




    */

    // Trecho trabalhando funções em ponteiros e com arrays
    float array[5];
    iniArray(array);


    cout << array[0] << "\n";

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << "\n";
    }

    return 0;
}

// Função que irá receber um valor e efetuar uma soma, ela possue um ponteiro para ser usado em outro escopo
void somar(float *var, float valor)
{
    *var += valor;
};

// Função que trabalha ponteiros em vetores
void iniArray(float *v)
{
    //Quando estiver trabalhando com arrays eu não preciso indicar o ponteiro, com variáveis precisa...
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
    v[4] = 0;
};

/*
O ponteiro deve ser do mesmo tipo que a variável que ele irá apontar
Ponteiros fazem referência ao endereço de memória do dado
Consigo alterar valores de variáveis através do seu endereço de memória
Me possibilita acessar/alterar o valor da variável mesmo estando fora de um escopo




int * pn;
pn = &num;

*/