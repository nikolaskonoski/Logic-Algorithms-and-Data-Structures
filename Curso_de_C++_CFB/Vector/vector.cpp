#include <iostream> 
#include <vector>

using namespace std;

int main() {
    //Quando o tamanho não é definido inicialmente, é feito uma alocação dinâmica
    vector<int> num1; //Definindo um vector,  seu tipo e o seu nome.
    vector<int> num2;

    int tam1, tam2, i; //Varáveis para fazer trabalhos de atribuições e iterações

    num1.push_back(1); //Inserindo um novo falor ao final da lista
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);
    num1.push_back(5);

    // Não é possivel adicionar um número igual um array por um index que não existe ex: 
    // num[5] = 3; 
    //Só é possivel fazer esse trabalho para alterar o valor de um index que ja exisita 
    //num[4] = 2; 

    tam1 = num1.size(); //Uma variável que usa o metodo size para mostrar o tamanho 

    num1.swap(num2); //Trocando os valores de um vector pelo o outro 

    num1.insert(num1.begin(), 888); //Inserindo um valor no inicio, usando +1 ao lado de begin alterno a posição de inserção 

    num1.erase(num1.end() -2); //Apagando um dado

    num2.clear(); //Limpando os elementos de um vector 


    //Enquando num 1 não estiver sozinho 
    while(!num1.empty()) {
        num1.pop_back(); //Tira o elemento do final 
    }


    for(i = 0; i < tam1; i++) {
        cout << num1[i] << "\n";
    }
    
    cout << "Tamanho do vector: " << tam1 << "\n";
    cout << "Primeiro valor do vector: " << num1.front() << "\n";
    cout << "Ultimo valor do vector: " << num1.back() << "\n";
    cout << "Valor do meio do vector: " << num1.at(tam1/2) << "\n";
    cout << "Novo tamanho de num1: " << num1.size() << "\n";


    
    return 0;    
}