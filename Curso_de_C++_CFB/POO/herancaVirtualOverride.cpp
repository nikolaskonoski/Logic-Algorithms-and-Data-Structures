#include <iostream>

using namespace std;

class Veiculo {   
    private:
        const char* modelo;
        const char* cor;

    public:
        int velocidadeMaxima;
        int rodas; 
        void setModelo(const char* m) {
            modelo = m;
        }
        const char* getModelo() {
            return modelo;
        }
        void setCor(const char* c) {
            cor = c;
        }
        const char* getCor() {
            return cor;
        }
        //Virtual para permitir override/sobrescrição
        virtual void impressao() {
            cout << "Modelo...........: " << modelo << endl;
            cout << "Cor:.............: " << cor << endl;
            cout << "Velocidade Maxima: " << velocidadeMaxima << endl;
            cout << "Rodas............: " << rodas << endl << endl;
        }
};

class Carro:public virtual Veiculo{
    public:
    Carro() {
        velocidadeMaxima = 160; 
        rodas = 4;
        setModelo("Carro");
        setCor("Vermelho");
    }
};

class Moto:public virtual Veiculo{
    public:
    Moto() {
        velocidadeMaxima = 120; 
        rodas = 2;
        setModelo("Moto");
        setCor("Azul");
    }
};

class Militar:public Veiculo  {
    public:
        int municao;
        bool armamento;

        Militar(bool arma, int muni):municao(arma ? muni : 0), armamento(arma) {
            velocidadeMaxima = 200; 
            rodas = 4;
            setModelo("Veiculo Militar");
            setCor("Verde");
        }

        //Override/sobrescrição do método impressao lá da classe base Veiculo
        void impressao() override {
            Veiculo::impressao();
            cout << "Armamento........: " << (armamento ? "Sim" : "Nao") << endl;
            cout << "Municao..........: " << municao << endl << endl;
        }
    };



int main() {

    Carro c1;
    c1.impressao();

    Moto m1;
    m1.impressao();

    Militar m2{true, 100};
    m2.impressao();

    Militar m3{false, 50};
    m3.impressao();

    return 0;
}
