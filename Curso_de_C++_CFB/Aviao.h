#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{
    public:
        int vel;
        int velMax;
        std::string tipo;
        Aviao(int tp); // Metodo construtor
        void imprimir();
    private: 
};

//Metodo construtor
Aviao::Aviao(int tp) {
    if(tp == 1) {
        this->velMax = 800; //Velocidade máxima do avião comercial
        this->tipo = "Comercial";
    } else if(tp == 2) {
        this->velMax = 350; //Velocidade máxima do monomotor
        this->tipo = "Monomotor";
    } else if(tp == 3) {
        this->velMax = 1200; //Velocidade máxima do avião jato
        this->tipo = "Jato";
    }
}

void Aviao::imprimir() {
    std::cout << "Tipo de avião: " << this->tipo << std::endl;
    std::cout << "Velocidade atual: " << this->vel << " km/h" << std::endl;
    std::cout << "Velocidade máxima: " << this->velMax << " km/h" << std::endl;
}


#endif

/*
Entendi que é uma forma de organizar melhor o código, separando a declaração da classe (no arquivo .h) da implementação dos métodos (no arquivo .cpp).
Isso torna o código mais limpo e faZcilita a manutenção, pois as mudanças na implementação não afetam a interface da classe. 
Além disso, permite a reutilização do código, já que a interface pode ser incluída em diferentes partes do programa sem a necessidade de duplicar a implementação.

Este arquivo é compilado somente na hora de compilar o arquivo cpp
*/