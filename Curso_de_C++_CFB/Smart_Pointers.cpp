#include <iostream>
#include <memory> // Necessário para std::shared_ptr e std::make_shared
using namespace std;

class Carro {
    public:
        int vel = 0;
        int getVel() {
            return vel;
        }
        void setVel(int v) {
            vel = v;
        }

};

int main() {
    unique_ptr<Carro>c1(new Carro());
    c1->setVel(10);

    cout << "Velocidade do carro 1: " << c1->getVel() << " km/h" << endl;

    return 0;
}

/*
Smart Pointers são ponteiros inteligentes que gerenciam automaticamente a memória em C++. Eles ajudam a evitar vazamentos de memória e outros problemas relacionados à gestão manual de memória. Existem três tipos principais de smart pointers em C++: std::unique_ptr, std::shared_ptr
    e std::weak_ptr.

1. std::unique_ptr: Representa a propriedade exclusiva de um objeto. Apenas um unique_ptr pode possuir o objeto em um dado momento. Quando o unique_ptr é destruído, o objeto que ele aponta também é destruído automaticamente.    
2. std::shared_ptr: Permite que múltiplos ponteiros compartilhem a propriedade de um objeto. Ele mantém uma contagem de referências para rastrear quantos shared_ptrs estão apontando para o mesmo objeto. Quando a contagem de referências chega a zero, o objeto é destruído automaticamente.
3. std::weak_ptr: É um ponteiro fraco que não afeta a contagem de referências de um objeto gerenciado por shared_ptr. Ele é usado para evitar ciclos de referência que podem levar a vazamentos de memória. Um weak_ptr pode ser convertido em um shared_ptr temporariamente para acessar o objeto, se ele ainda existir.

*/
