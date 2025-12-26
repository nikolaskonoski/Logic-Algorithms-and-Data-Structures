#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Declaração de uma função anônima (lambda) que soma quatro variáveis capturadas por valor
    int x1, x2, x3, x4;
    x1 = 10;
    x2 = 20;
    x3 = 30;
    x4 = 40;

    //[=] Se eu usar o igual ao inves das variaveis, eu capturo todas as variaveis do escopo por valor
    auto soma = [x1, x2, x3, x4] () -> int {
        return x1 + x2 + x3 + x4; //se eu adicionar uma variavel e colocar = no vector, é possivel somar os valores da lista passada no cout mais o maior número do bloco condicional 
    };

    cout << soma() << endl;






// Declaração de uma função anônima (lambda) que recebe dois inteiros e retorna o maior deles
//[capture list](parameter list) -> return type { function body };
   auto maiorNumero = [](int n1, int n2) -> int {
         return (n1 > n2) ? n1 : n2;
   }; 

/*
Exemplo de uso de um funcao lambda para ordenar um vetor de inteiros em ordem crescente
  auto maior = [](vector<int> vec) -> int {
      auto max = 0; 
      for Iint:xvec) {
          if (num > max) {
              max = num;
          }
      }

      return max;

      cout << maior({3, 5, 2, 8, 1}) << endl; // Saída: 8
  };
*/

   cout << maiorNumero(10, 5) << endl;

    return 0;
}

/*
Entendi que as funções anônimas (lambdas) em C++ são úteis para criar pequenas funções inline sem a necessidade de defini-las separadamente. Elas podem capturar variáveis do escopo externo por valor ou por referência, o que as torna flexíveis para diversas situações, como operações simples ou como argumentos para outras funções. No exemplo fornecido, vimos como criar uma função lambda para somar quatro variáveis e outra para encontrar o maior número entre dois inteiros.
Consigo fazer a captura de variáveis usando diferentes métodos, como por valor (usando '=') ou por referência (usando '&'). Além disso, as lambdas podem ser usadas para operações mais complexas, como ordenar vetores ou realizar cálculos específicos, tornando o código mais conciso e legível.

Ex:plo de captura por referência:
   int a = 10;
   int b = 20;

   auto swap = [&a, &b]() {
       int temp = a;
       a = b;
       b = temp;
   };

   swap();
   cout << "a: " << a << ", b: " << b << endl; // Saída: a: 20, b: 10

*/