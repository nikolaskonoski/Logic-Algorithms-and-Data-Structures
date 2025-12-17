#include <iostream>
using namespace std;

class Aviao {
    public:
        int vel = 0;
        int velMax; //Incializando a varável para inicializar ela de acordo com o tipo do avião
        string modelo;
        void ini(int tp); //Protótipo do método com referncia a inicialização de qual a avião e tp = tipo

    private: 
  
};  


//Definição do método ini fora da classe
void Aviao::ini(int tp) { 
    if(tp == 1) {
        this->velMax = 800; //Velocidade máxima do avião comercial
        this->modelo = "Comercial";
    } else if(tp == 2) {
        this->velMax = 350; //Velocidade máxima do monomotor
        this->modelo = "Monomotor";
    } else if(tp == 3) {
        this->velMax = 1200; //Velocidade máxima do avião jato
        this->modelo = "Jato";
    }
}

int main() {
    Aviao *av1 = new Aviao();
    Aviao *av2 = new Aviao();
    Aviao *av3 = new Aviao();


    av1->ini(1); //Inicializando o avião comercial
    av2->ini(3); //Inicializando o avião jato
    av3->ini(2); //Inicializando o avião 
    
    cout << "Modelo: " << av1->modelo << " - Velocidade: " << av1->velMax << " km/h" << endl;
    cout << "Modelo: " << av2->modelo << " - Velocidade: " << av2->velMax << " km/h" << endl;
    cout << "Modelo: " << av3->modelo << " - Velocidade: " << av3->velMax << " km/h" << endl;


    return 0;
}