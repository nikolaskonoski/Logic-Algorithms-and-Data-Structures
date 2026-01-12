#include <iostream>

using namespace std;

void imp(string txt = "Nikolas");

int main()
{  
    imp("Negro Nikolas");

    return 0;
}

void imp(string txt)
{
    cout << txt << "\n";


}

//Eu entendi que é uma maneira de atribuir um argumento padrão para a função, por exemplo se eu chama-la sem passr um argumento, lá no protótipo ela retorna aquele valor default. 
