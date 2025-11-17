#include <iostream>
using namespace std;

int main() {
    //(Expressão) ? valor1 : valor2; 

    int n1, n2, nota;
    string resultado;

    cout << "Digite a primeira nota: ";
    cin >> n1;

    cout << "Digite a segunda nota: ";
    cin >> n2;

    nota=n1+n2;

    //>=60 Aprovado 
    //<60 Reprovado 

    (nota >= 60) ? resultado = "Aprovado" : resultado = "Reprovado";

    cout << "Nota final: " << nota << endl;
    cout << "Resultado: " << resultado << endl;

    //Outra forma de usar o operador ternário
    //Atribuindo diretamente o resultado da expressão à variável
    resultado = (nota >= 60) ? "Aprovado" : "Reprovado";
    cout << "Resultado (segunda forma): " << resultado << endl;

    //Exemplo 2
    //Incrementar ou decrementar o valor de x com base na condição
    int x = 10;
    cout << "Valor inicial de x: " << x << endl;
    (n1 >= 10) ? x++ : x--;
    cout << "Valor de x: " << x << endl;

    return 0;
}

//Esta aplicação traz um ganho de desempenho quando comparada com o uso do if e else,
//pois o operador ternário é mais direto para atribuição de valores com base em uma condição.
//Além disso, o código fica mais conciso e fácil de ler em situações simples como esta.
