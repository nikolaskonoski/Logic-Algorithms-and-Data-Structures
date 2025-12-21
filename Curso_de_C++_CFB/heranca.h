#ifndef HERANCA_H_INCLUDED
#define HERANCA_H_INCLUDED

//Conceito principal de herança é que os atributos e métodos de uma classe podem ser
//herdados por outra classe, evitando a repetição de código e facilitando a manutenção.

class Veiculo {
    public:
        int vel;
        int blind;
        int rodas; 
        void setTipo(int tp);
        void setVelMax(int vm);
        void setArma(bool ar);
        void imp();
        
    private:
        int tipo;
        int velMax;
        bool arma;
    };

    void Veiculo::imp() {
        std::cout << "Tipo: " << tipo << "\n" << "\n";
        std::cout << "Velocidade Maxima: " << velMax << "\n";
        std::cout << "Arma: " << arma << "\n";
        std::cout << "Velocidade Atual: " << vel << "\n";
        std::cout << "Blindagem: " << blind << "\n";
        std::cout << "Rodas: " << rodas << "\n";
    }

    void Veiculo::setTipo(int tp) {
        tipo = tp;
    }

    void Veiculo::setVelMax(int vm) {
        velMax = vm;
    }

    void Veiculo::setArma(bool ar) {
        arma = ar;
    }

    class Carro : public Veiculo {
    public:
        Carro();
    };

    Carro::Carro() {
        setTipo(1);
        setVelMax(120);
        setArma(false);
        vel = 0;
        blind = 0;
        rodas = 4;
    }

    class Moto : public Veiculo {
    public:
        Moto();
    };

    Moto::Moto() {
        setTipo(2);
        setVelMax(100);
        setArma(false);
        vel = 0;
        blind = 0;
        rodas = 2;
    }

    class Navio : public Veiculo {
    public:
        Navio();
    };

    Navio::Navio() {
        setTipo(3);
        setVelMax(80);
        setArma(true);
        vel = 0;
        blind = 100;
        rodas = 0;
    }

#endif // HERANCA_H_INCLUDED