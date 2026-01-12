#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() {
    int n1, n2, res; 
    char opc; 

    inicio: //Serve como parte da estrutura goto

    system("cls"); //Irá limpar a linha de comando após executado 

    cout << "Digite o valor da nota 1: ";
    cin >> n1;

    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res= n1+n2; 
/*
    >= 60 Aprovado 
    >= 40 E <60 Recuperação 
    <40 Reprovado 
*/
    if(res >= 60) {
        cout << "\nAluno aprovado\n";
    } else if(res >= 40) {
        cout << "\nAluno em recuperação\n";
    } else {
        cout << "\nAluno reprovado\n";
    }

    cout << "\nDigitar outrs notas? [s/n]: ";
    cin >> opc;

    if(opc=='s' or opc=='S'){
        goto inicio; //Aqui está sendo feito o callback de goto 
    }
    return 0; 
} 

//Essa estrutura serve como uma forma de repetir o programa de uma maneira mais simples, onde o terminal pergunta ao usuário se ele quer repetir novamente os programa...
//Mas deve er usada com atenção e não é comumente usado pois temos estruturas melhores 