#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double dividir(double a, double b);

int main()
{

    double a, b;
    cin >> a >> b;

    try {
        cout << dividir(a, b) << endl;
    } catch (const char* e) { //catch captura a exceção lançada pelo throw pela variável e
        cout << "Erro: " << e << endl;
    }
    return 0;
}

double dividir(double a, double b)
{
    if (b == 0) {
        throw "Divisão por zero!";
    }

    if (b == 13) {
        throw runtime_error("13 é um número proibido!"); //throyw lança uma exceção do tipo runtime_error
    }

    return a / b;
}

/*
Entendi que é uma maneira de fazer rotinas preenchidas de código que podem gerar erros.
*/