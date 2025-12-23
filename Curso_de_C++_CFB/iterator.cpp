#include <iostream>
#include <vector>

using namespace std;

int main() {
     vector<string> carros = {"BMW", "Audi", "Ford", "Chevrolet"};

     //Um loop que ira percorrer o vetor de carros usando iteradores
     //Dentro deste loop ja esta sendo feito a declaração facilitada do iterador
     for(vector<string>::iterator it = carros.begin(); it != carros.end(); ++it) {
         cout << *it << endl;
     }

     return 0;


}
/*
it = carros.end()-1; -> Move o iterador para o ultimo elemento do vetor

advance(it, 2); -> Move o iterador 2 posições para frente
next(it, 2); -> Retorna um novo iterador movido 2 posições para frente
prev(it, 2); -> Retorna um novo iterador movido 2 posições para trás

*/