#include <iostream>

using namespace std;


// 1. A função agora retorna um 'int', que será o resultado do fatorial.
//    Removemos o segundo parâmetro 'fat' que não é necessário para esta lógica.
int fatorial(int n);

int main()
{
    int valor; 
    cout << "Digite um numero para calcular o fatorial: ";
    cin >> valor;
    // 2. Chamamos a função e imprimimos o valor que ela retorna.
    cout << "O fatorial de " << valor << " e: " << fatorial(valor) << endl;

    return 0;
}

int fatorial(int n) 
{
    // 3. Caso base: Se n for 0 ou 1, o fatorial é 1. A função para de se chamar.
    if(n == 0 || n == 1) {
        return 1;
    } else {
        // 4. Passo recursivo: A função retorna n multiplicado pelo resultado de chamar a si mesma com (n - 1).
        return n * fatorial(n - 1);
    }
}
    