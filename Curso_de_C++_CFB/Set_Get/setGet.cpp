#include <iostream> 
#include "classes.h"

using namespace std;

int main() {
    Veiculo *v1= new Veiculo(1); //Carro
    Veiculo *v2= new Veiculo(2); //Avião
    Veiculo *v3= new Veiculo(3); //Navio

    v2->setLigado(1); //Ligar o avião

    //Caso eu quero mexer em velMax uso setVelMax
    //Caso eu queira apenas ler o valor uso getVelMax

    cout << "Veículo 1: Tipo = " << v1->tipo << ", Velocidade Máxima = " << v1->getVelMax() << endl; 
    cout << "Veículo 2: Tipo = " << v2->tipo << ", Velocidade Máxima = " << v2->getVelMax() << endl;
    cout << "Veículo 3: Tipo = " << v3->tipo << ", Velocidade Máxima = " << v3->getVelMax() << endl;
    cout << "Veículo 2 Ligado? " << (v2->getLigado() ? "Sim" : "Não") << endl;
    return 0;
}