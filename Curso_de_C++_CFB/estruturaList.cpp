#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<int> lista, teste;        // iniciando a lista
    int tam;                // Variável para fazer uma iteração de números
    list<int>::iterator it; // Iterador declarado para fins de inserir um dado em determinado posição da lista

    //Adicionando elementos na lista = teste 
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    //Adicionando elementos na lista = lista
    lista.push_front(9);
    lista.push_front(0);
    lista.push_front(5);
    lista.push_front(3);
    lista.push_front(7);
    lista.push_front(4);
    lista.push_front(6);
    lista.push_front(2);
    lista.push_front(8);
    lista.push_front(1);

    cout << "Tamanho da lista: " << lista.size() << "\n\n";

    lista.sort();    // Serve para ordenar os dados
    lista.reverse(); // Serve para inverter a ordem dos dados)
    it = lista.begin();
    advance(it, 3);
    lista.insert(it, 0);
    lista.erase(--it);
    lista.merge(teste); //Mergeando a lista com a teste as duas listas, lista teste ficará vazia após o merge.


    cout << "Tamanho da lista: " << lista.size() << "\n\n";




    tam = lista.size();

    for (int i = 0; i < tam; i++)
    {
        cout << lista.front() << "\n";
        lista.pop_front();//esvaziando a lista 
    }

    return 0;
}

/*
int main()
{
    list<int> aula, teste;
    int tam;
    list<int>::iterator it;

    aula.push_front(1);
    aula.push_front(2);
    aula.push_front(3);

    tam = 10;
    for (int i = 0; i < tam; i++)
    {
        aula.push_front(i);
    }

    // Sempre definir a posição e inserir o metodo insert e erase... advance serve para avançar para o index desejado.    it = aula.begin(); //usando o metodo que me retorna o dado inicial da fila, it remete a posição...
    advance(it, 3);     // Metodo que pega a posição it e insere o valor determinado após a virgula
    aula.insert(it, 0); // Inserindo um 0 na posição do it
    aula.erase(--it);   // Metodo que remove a posição determinada do iterator, fazendo a pré decrementação ele remove antes...
    aula.clear(); //Remove todos os elementos da fila
    aula.merge(); //Faz a mesclagem de duas listas

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    tam = aula.size();
    for (int i = 0; i < tam; i++)
    {
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    return 0;
}
*/