#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Definição de uma struct para demonstrar inicialização uniforme
struct Pessoa {
    string nome;
    int idade;
};

// Definição de uma classe para demonstrar inicialização uniforme
class Veiculo {
public:
    string modelo;
    int ano;

    // Construtor com inicialização uniforme
    Veiculo(string m, int a) : modelo{m}, ano{a} {}
};

int main() {

    int num{10}; // Inicialização uniforme de um inteiro
    double pi{3.14}; // Inicialização uniforme de um double
    string nome{"CFB Cursos"}; // Inicialização uniforme de uma string
    vector<int> numeros{1, 2, 3, 4, 5}; // Inicialização uniforme de um vetor
    map<string, int> idades{{"Nadal", 15}, {"Federer", 17}}; // Inicialização uniforme de um mapa
    Pessoa p1{"Djokovic", 25}; // Inicialização uniforme de uma struct
    Veiculo v1{"Ferrari", 2020}; // Inicialização uniforme de uma classe
    int vetor[5]{10, 20, 30, 40, 50}; // Inicialização uniforme de um array

    // Exibindo os valores inicializados
    for (vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Exibindo os pares chave-valor do mapa
    for (map<string, int>::iterator it = idades.begin(); it != idades.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    cout << "Nome: " << p1.nome << ", Idade: " << p1.idade << endl;
    cout << "Modelo: " << v1.modelo << ", Ano: " << v1.ano << endl;
    cout << "Vetor: ";
    for (int i = 0; i < 5; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;

}

/*
Uma maneira moderna de inicializar variáveis em C++ é utilizando a inicialização uniforme com chaves {}.
Isso ajuda a evitar ambiguidades e torna o código mais consistente.
*/