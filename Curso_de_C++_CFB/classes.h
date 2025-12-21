#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo
{
public:
    int tipo;
    Veiculo(int tp);
    int vel;
    int getVelMax();  // Metodo getter para obter a vel maxima
    bool getLigado(); // Metodos getter e setter para ligado
    void setLigado(int l);

private:
    std::string nome;
    int velMax;
    bool ligado;
    // Metodo setter para definir a vel maxima
    // Colocado como private para que apenas a propria classe possa alterar este valor
    void setVelMax(int vm);
};

bool Veiculo::getLigado()
{
    return ligado;
};

void Veiculo::setLigado(int l)
{
    if (l == 1)
    {
        ligado = true;
    }
    else if (l == 0)
    {
        ligado = false;
    }
}

// Metodo usado para definir as velocidades máximas dos veículos
// Feito para fins de alteração no caso de dados privates/publics

void Veiculo::setVelMax(int vm)
{
    velMax = vm;
};

int Veiculo::getVelMax()
{
    return velMax;
};

// Nessas atribuições podemos usar o metodo setVelMax ou atribuir diretamente o velMax, isto porque mesmo a propiedade sendo private este metodo pertence a classe Veiculo
Veiculo::Veiculo(int tp)
{ // 1=Carro 2=Avião 3=Navio
    tipo = tp;
    if (tp == 1)
    {
        nome = "Carro";
        velMax = 120;
    }
    else if (tp == 2)
    {
        nome = "Avião";
        velMax = 800;
    }
    else if (tp == 3)
    {
        nome = "Navio";
        velMax = 50;
    }
}

#endif // CLASSES_H_INCLUDED