#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main() {

    int num = 10;

    cout << "Valor de NUM em dec: " << dec << num << "\n";
    cout << "Valor de NUM em oct: " << oct << num << "\n";
    cout << "Valor de NUM em hex: " << hex << num << "\n";
    cout << "Valor de NUM em setbase: " << setbase(8) << num << "\n"; //Setbase permite escolher a base 

    cout << "Valor de NUM: " << setw(10) << num << "\n"; //setando o espaço que  número terá 
    cout << "Valor de NUM: " << setfill('*') << num << "\n"; //Setando que este caractere irá substituir o espaço vazio 

    //Impressões da variável pi
    double pi = M_PI;
    cout.precision(2); 
    cout << "Valor de PI: "<< std::scientific << pi << "\n"; //Adicionando um meotodo que torna notação cientifica

    cout.precision(-1); //Faz o resultado voltar ao normal 



    return 0;
}
//A bilbioteca iomanip traz as posibilidades de trabalhar com bases diferentes (hexadecimal,octadecimal, notação cientifica)