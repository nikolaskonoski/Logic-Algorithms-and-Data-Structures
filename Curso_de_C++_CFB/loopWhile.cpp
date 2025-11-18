#include <iostream> //Biblioteca para entrada e saida de dados 

using namespace std; //Uma organização de pastas/bibliotecas separando-as por funcionalidades

//Esta é a função principal que pode ser int pra retornar um valor 0,1 ou void pra ter um retorno nulo/vazio 
int main() {


    int n = 0; 

    n = 0; //Inicialização da variável é muito importante pra evitar loops infinitos no programa 

    while (n < 10)
    {
        cout << n << "\n";
        n++; //incrementação que pode ser por meio de cin 

        /*
        cin >> n; -> Captação pelo teclado 

        while(cont++<20) -> Uma forma de compilar e executar ao mesmo tempo, mas só quando for ++ ou --

        conta += 2; -> incrementação de números
        */
    }
    
    cout << "\nRotina finalizada\n";

    return 0;  
}