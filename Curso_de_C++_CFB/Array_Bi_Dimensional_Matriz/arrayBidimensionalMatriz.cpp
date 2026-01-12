#include <iostream>

using namespace std;

int main() {

    // Declaração de uma matriz 2x3 (2 linhas e 3 colunas)
    int matriz[2][3]; 

    // Atribuição de valores à matriz
    matriz[0][0] = 10;
    matriz[0][1] = 20;
    matriz[0][2] = 30;
    matriz[1][0] = 40;
    matriz[1][1] = 50;
    matriz[1][2] = 60;

    // Imprimindo um elemento específico da matriz
    cout << "Elemento na linha 0, coluna 1: " << matriz[0][1] << "\n";

    //Para iterar sobre o a matriz é preciso aninhar loops for 
    // Iterando sobre a matriz para imprimir todos os elementos
    cout << "\nElementos da matriz:\n";
    for (int i = 0; i < 2; i++) { // Loop para as linhas
        for (int j = 0; j < 3; j++) { // Loop para as colunas
            cout << matriz[i][j] << " ";
        }
        cout << "\n"; // Quebra de linha após cada linha da matriz
    }

    // Outra forma de declarar e inicializar uma matriz
    int matriz2[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    cout << "\nElementos da segunda matriz:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            //Posso usar cin também pra captar a matriz do teclado 
            cout << matriz2[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

