#include <iostream> 
#include <vector> 
#include <algorithm>

using namespace std;

int main() {

    vector<int> n{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for_each(n.begin(), n.end(), [](int num){

        num += 10; //Atribuindo a soma 10 a cada iteração
        cout << num << endl;
    });


    return 0;
}

/*
O algoritmo For Each é um algoritmo que recebe 3 parâmetros Inicio/Fim/Função que irá receber a operação
No caso acima eu usei uma função lambda para receber a operação

Este algoritmo não está fazendo nenhuma avaliação de memória/espaco etc

*/