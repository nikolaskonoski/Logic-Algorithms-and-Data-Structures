#include <iostream>
#include <memory> //Para usar smart pointer

class Carro {
    public: 
        int velMax;
        int potencia; 
        const char* nome; 

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
    cout << "Velocidade máxima: " << c1->velMax << endl;
    cout << "Potência: " << c1->potencia << endl;

    Carro c2{"Ventania", 400}; //Forma mais usada
    cout << "Nome: " << c2.nome << endl;
    cout << "Velocidade máxima: " << c2.velMax << endl;
    cout << "Potência: " << c2.potencia << endl;

    return 0;
     
}

/*
Principais mudanças que notei é que ao usar new devemos usar -> e delete após a impressão

Se usar lista de inicialização não é preciso new e nem delete
Carro c1("Nikolas", 350) é uma inicialização uniforme

//Comentários feito pelo Gemini: 
Sobre seus comentários no código
Você fez observações importantes nos comentários ao final do código. Aqui vai um refinamento técnico sobre elas:

new / delete vs Stack:

Correto. Quando você faz Carro c1... (sem new), o objeto é criado na Stack (pilha). A memória é gerenciada automaticamente e limpa quando a função termina (sai do escopo).

Quando usa new, o objeto vai para a Heap, e você é obrigado a usar delete para limpar, senão causa vazamento de memória (memory leak).

Lista de Inicialização vs Instanciação:

Seu comentário "Se usar lista de inicialização não é preciso new" contém uma pequena confusão de termos.

A Lista de Inicialização (: nome(n), ...) serve apenas para dar valor inicial aos atributos. Ela funciona tanto com new quanto sem new.

O que elimina a necessidade de new é a Instanciação Automática (na Stack), que é o que você fez com Carro c1{"Nikolas", 350};.

*/