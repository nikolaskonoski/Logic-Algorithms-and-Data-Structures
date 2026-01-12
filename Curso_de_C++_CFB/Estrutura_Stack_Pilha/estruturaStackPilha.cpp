#include <iostream>
#include <stack> //Preciso incluir o tipo de estrutura no topo

using namespace std;

int main() 
{
    stack<string> golpes; //Aqui estou definindo o tipo da stack e o nome

    //Metodo empty para fazer a análise booleana e saber se esta vazia ou não
    //Se usado aqui antes da criação dos dados, ele me mostrará stack vazia...
    if(golpes.empty()) {
        cout << "Stack vazia\n\n";
    } else {
        cout << "Stack não vazia\n\n";
    }

    //Adiconando valores na stack, o útlimo a ser adicionado sempre estará no topo
    //Metodo push insere um elemento 
    golpes.push("Grand Willy");
    golpes.push("Dropshot");
    golpes.push("Saque aberto");
    golpes.push("Saque Quick");
    golpes.push("Winner na paralela");

    //Empty usado após a inserção irá me mostrar que a pilha possue dados 
    if(golpes.empty()) {
        cout << "Stack vazia\n\n";
    } else {
        cout << "Stack não vazia\n\n";
    }

    //Outra maneira de analisar se a stack está vazia ou não 
    if(golpes.size() == 0) {
        cout << "Stack vazia\n\n";
    } else {
        cout << "Stack não vazia\n\n";
    }

    //Uma maneira de limpar a fila, operador de negação para dizer enquanto a filha "não" for vazia: 
    while(!golpes.empty()) {
        golpes.pop();
    }

    cout << "Tamanho da stack: " << golpes.size() << "\n\n";

    cout << "Golpe do topo: " << golpes.top() << "\n\n";

    golpes.pop(); //metodo que retira o dado do topo 

    cout << "Novo golpe do topo: " << golpes.top() << "\n\n"; //top é o metodo que exibe o golpe do topo

    cout << "Tamanho da stack: " << golpes.size() << "\n\n"; //size é o metódo que mostra o tamanho atual da stack

    return 0;
}
//Entendi que é uma estrutura de dados onde é definido um tipo e esse dado vai sendo inserido como se fosse um pote e que cada item inserido ocupa um andar, só podendo ser retirado um por vez (o que está no topo)
//Metodos que podem ser usados:
//push() => adicionar elementos 
//pop() => retira o elemento do topo 
//top() => qual elemento esta no topo
//size() => tamanho
//empty() => saber se esta cheia ou vazia e aplicar condições para deletar/adicionar
