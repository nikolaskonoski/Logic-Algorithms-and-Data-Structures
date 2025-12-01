#include <iostream>

using namespace std;

struct Golpes //Criação da estrutura e das suas propriedades
{
    string nome; 
    int dano;
    string tipo;
};


int main() {
    Golpes golpe1; //Cada variavel tem sua respectiva propriedade atribuida
    Golpes golpe2;
    Golpes golpe3;

    golpe1.nome = "Grand Willy";
    golpe1.dano = 100;
    golpe1.tipo = "Golpe de defesa";

    golpe2.nome = "Forehand";
    golpe2.dano = 100;
    golpe2.tipo = "Golpe de fundo";

    golpe3.nome = "Saque Aberto";
    golpe3.dano = 100;
    golpe3.tipo = "Golpe de saque";

    cout << golpe1.nome << "\n";
    cout << golpe1.dano << "\n";
    cout << golpe1.tipo << "\n\n";

    cout << golpe2.nome << "\n";
    cout << golpe2.dano << "\n";
    cout << golpe2.tipo << "\n\n";

    cout << golpe3.nome << "\n";
    cout << golpe3.dano << "\n";
    cout << golpe3.tipo << "\n\n";


    return 0;

}