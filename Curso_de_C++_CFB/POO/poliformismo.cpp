#include <iostream>

class Carro {
    private: 
        int velMax;
        const char* nome; 

    public:
        int potencia;
        int getVelMax(){
            return this->velMax; //Funciona sem this também
        }
        const char* getNome(){
            return this->nome;
        }

        //Sobrecarga de metodos - Construtores
        Carro() {
            velMax = 120;
            potencia = 100;
            nome = "Carro Genérico";
        }

        Carro(int pt, const char* no):nome(no), potencia(pt){
            if(pt < 100){
                velMax = 120;
            } else if(pt < 200){
                velMax = 200;
            } else {
                velMax = 250;
            }
        }
        //Fim da sobrecarga

};

using namespace std;


int main(){
    
    Carro carro1; //Usa o construtor padrão
    cout << "Nome: " << carro1.getNome() << endl;
    cout << "Velocidade Máxima: " << carro1.getVelMax() << endl;
    cout << "Potência: " << carro1.potencia << endl;

    //Iniciando o construtor com lista de inicialização e o modelo 2 de construtor
    Carro carro2(180, "Carro Esportivo");
    cout << "Nome: " << carro2.getNome() << endl;
    cout << "Velocidade Máxima: " << carro2.getVelMax() << endl;
    cout << "Potência: " << carro2.potencia << endl;
    
    Carro carro3(250, "Carro de Corrida");
    cout << "Nome: " << carro3.getNome() << endl;   
    cout << "Velocidade Máxima: " << carro3.getVelMax() << endl;
    cout << "Potência: " << carro3.potencia << endl;

    return 0;
}


/*É a possibilidade de criar metodos com o mesmo nome, mas comportamentos diferentes.
Recebendo parâmetros diferentes se trata de sobrecarga de métodos.
Eu posso usar a sobrecarga em qualquwer metodo, inclusive em construtores.


Este aviso de compilação, -Wreorder, ocorre porque a ordem dos membros na lista de inicialização do construtor não corresponde à ordem em que foram declarados na definição da classe.

A Ordem Correta é Importante:

O compilador C++ sempre inicializará os membros na ordem em que são declarados na classe, independentemente da ordem que você usa na lista de inicialização do construtor. O aviso existe para alertá-lo sobre essa discrepância, que pode levar a bugs sutis se a inicialização de um membro depender de outro já inicializado.

No seu código:

Ordem de Declaração na Classe Carro:

const char* nome;
int potencia;
Ordem de Inicialização no Construtor Carro:

potencia(pt)
nome(no)
Para corrigir e seguir as boas práticas, você deve reordenar a lista de inicialização do construtor para que corresponda à ordem de declaração.

*/