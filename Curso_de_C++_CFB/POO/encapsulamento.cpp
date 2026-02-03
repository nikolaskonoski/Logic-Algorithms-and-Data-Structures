#include <iostream>
#include <memory> //Para usar smart pointer

class Carro {
    private: 
        int velMax;

        //Criando metódos get e set para acessar o atributo privado velMax
        //Estando dentro de private ele só pode ser acessado por métodos da própria classe
        void setVelMax(int vm){
            this->velMax = vm;
        }
    public: 
        int potencia; 
        const char* nome; 

        //Estando private é necessário um método público para acessar o valor de velMax
        int getVelMax(){
            return this->velMax;
        }

        //lista de inicialização para facilitar a inicialização uniforme já dentro do construtor
        Carro(const char* n, int p):potencia(p), nome(n){ 
            if(p<100){
                this->velMax = 150;
            } else if(p<200){
                this->velMax = 200;
            } else {
                this->velMax = 250;
            }

        }
};

using namespace std;

int main() {
    unique_ptr<Carro>c1(new Carro{"Nikolas", 350}); //Inicialização com ponteiro inteligente
    //Carro c1{"Nikolas", 350};
    cout << "Nome: " << c1->nome << endl;
    cout << "Velocidade máxima: " << c1->getVelMax() << endl;
    cout << "Potência: " << c1->potencia << endl;

    Carro c2{"Ventania", 400}; //Forma mais usada
    cout << "Nome: " << c2.nome << endl;
    cout << "Velocidade máxima: " << c2.getVelMax() << endl;
    cout << "Potência: " << c2.potencia << endl;

    return 0;
     
}


/*

Encapsulamento é o princípio de ocultar os detalhes internos de uma classe e fornecer uma interface pública para interagir com ela.
Isso protege os dados e permite controlar como os atributos são acessados e modificados.

*/