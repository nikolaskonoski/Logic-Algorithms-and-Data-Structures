#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //offstream - fluxo de saída (escrita)
    ofstream arquivo;
    arquivo.open("arquivo.txt", ios::app); //ios::app - modo de anexar (adicionar conteúdo ao final do arquivo sem apagar o conteúdo existente)

        arquivo << "Curso de C++ CFB Cursos\n";
        arquivo << "Curso de C++ Avançado\n";
        arquivo << "Curso de C++ POO\n";
        arquivo.close();

        return 0;


    //ifstream - fluxo de entrada e saída (leitura e escrita)
    //fstream - fluxo de entrada (leitura)

}