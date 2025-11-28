#include <iostream>

// Protótipos das funções para que main() possa encontrá-las.
int fatorial(int n);
int fibonacci(int n);

int main() 
{
    using namespace std; // Adicionado para usar cout e endl

    int val, res; 
    val = 8; 
    res = fatorial(val);
    cout << "Fatorial de " << val << " = " << res << endl;

    cout << "\n\nFibonacci com " << val << " valores: "; // Corrigido o erro de sintaxe
    for(int i = 0; i < val; i++) { //loop sendo feito para executar os números varias vezes
        cout << fibonacci(i + 1) << " ";
    }
    cout << endl;

    return 0;
}

int fatorial(int n) {
    if(n == 0) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int fibonacci(int n) {
    if(n == 1 || n == 2) {
        return 1;
    }else {
        return fibonacci(n - 1) + fibonacci(n - 2); //Aqui o que estamos fazendo é calcular a sequencia dos dois numeros anteriores a posição n, que é o que a sequência fibonacci pede.
    }
