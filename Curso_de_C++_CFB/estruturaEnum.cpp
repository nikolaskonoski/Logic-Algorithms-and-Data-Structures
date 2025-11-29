#include <iostream> 

using namespace std;

int main() 
{
    //Aqui quando o valor é passado teremos uma referência para os próximos receberem esse valor e somar 1
    //Caso o valor não seja passado,o valor aleatório segue o index 0,1... e caso um dos dados não tenha o valor definido, ele pega como referencia o anterior. 
    enum golpesDoTennis {forehand = 100, backhand = 10, smash = 150, voleio = 75}; 

    golpesDoTennis golpeSelecionado; //Aqui estamos seguindo a lógica de declarar o tipo do dado pra conseguir seleciona-lo

    golpeSelecionado = forehand;

    cout << golpeSelecionado << "\n";

    return 0;

}
//Eu entendi que é uma estrutura de dados onde temos um array e cada string lá dentro define um tipo de dados que podem receber um valor em sua declaração 
//O tipo é inteiro 