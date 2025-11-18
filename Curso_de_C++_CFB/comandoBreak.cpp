#include <iostream> //Biblioteca para entrada e saida de dados 

using namespace std; //Uma organização de pastas/bibliotecas separando-as por funcionalidades

//Esta é a função principal que pode ser int pra retornar um valor 0,1 ou void pra ter um retorno nulo/vazio 
int main() {

    int cont;

    cont = 0; //Inicialização da variável é muito importante pra evitar loops infinitos no programa     

    while(cont < 1000) {
        cout << cont << "\n";

        //Se eu quisere imprimir 500, contador tem que estar depois de if
        if(cont == 500) {
            break;
        }
        cont++;
    }

    return 0;  
}