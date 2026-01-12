#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //offstream - fluxo de saída (escrita)
    ofstream arquivoS; //S: saida
    arquivoS.open("arquivo.txt", ios::app); //ios::app - modo de anexar/ concatenar (adicionar conteúdo ao final do arquivo sem apagar o conteúdo existente)

        arquivoS << "Curso de C++ CFB Cursos\n";
        arquivoS << "Curso de C++ Avançado\n";
        arquivoS << "Curso de C++ POO\n";

        arquivoS.close();

    //ifstream - fluxo de entrada (leitura)
    //Lenda um arquivo ja existente e mostrando o conteudo no terminal 
    //O arquivo é armazenado na variavel arquivoE
    //E armazenado o conteudo do arquivo na variavel linha
    
    ifstream arquivoE; //E: entrada
    string linha;
    arquivoE.open("arquivo.txt");
    if(arquivoE.is_open())
    {
        while(getline(arquivoE, linha))
        {
            cout << linha << "\n";
        }   
        arquivoE.close();
    }
    else
    {
        cout << "Não foi possível abrir o arquivo!";
    }

        return 0;


    //ifstream - fluxo de entrada e saída (leitura e escrita)
    //fstream - fluxo de entrada (leitura)

}