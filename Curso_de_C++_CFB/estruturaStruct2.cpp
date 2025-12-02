#include <iostream> 

using namespace std;

//Criando funções para facilitar na hora de fazer a função main 

//Criação das propriedades da struct
struct Golpes {
    string nome; 
    int dano;
    string tipo;

//Função para inserção de golpes
void inserirGolpes(string stnome, int stddano, string stdtipo) {
    nome = stnome;
    dano = stddano;
    tipo = stdtipo;
}

//Função para imprimir os golpes que se passsa a ser um metodo
void imprimirGolpes() {
    cout << nome << "\n";
    cout << dano << "\n";
    cout << tipo << "\n\n";

}
};

//Função principal
int main() {
    Golpes golpe1;
    Golpes golpe2;
    Golpes golpe3;

    golpe1.inserirGolpes("Grand Willy", 100, "Golpe de defesa");
    golpe1.imprimirGolpes();
    
    golpe2.inserirGolpes("Forehand", 100, "Golpe de fundo");
    golpe2.imprimirGolpes();

    golpe3.inserirGolpes("Saque Aberto", 100, "Golpe de saque");
    golpe3.imprimirGolpes();

    return 0;

}

/*
//Função principal fazendo o uso de arrays
int main() {
    Golpe *golpes = new Golpe[5]; //Fazendo o uso de ponteiro que é necessário ao usar Structs com arrays 
    golpe golpe1, golpe2, golpe3, golpe4, golpe5;

    golpe[0] = golpe1; golpe[1] = golpe2; golpe[2] = golpe3; golpe[3] = golpe4; golpe[4] = golpe5;

    golpes[0].insere{"Forehand", "100", "Golpe de fundo"} //Passagem de dados para a struct

    //Fazendo um loop for com a função de exibir o golpe
    for(int i = 0; i < 5; i++) {
    golpes[i].imprimirGolpes();
    }


}

*/