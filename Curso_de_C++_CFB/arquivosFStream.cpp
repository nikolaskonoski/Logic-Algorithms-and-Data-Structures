#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    fstream arquivo;
    char opc = 's';
    string nomeArquivo, linha;

    arquivo.open("arquivos.txt", ios::out | ios::app); //ios app para adicionar ao final do arquivo 

    cout << "Digite o nome do arquivo: ";
    cin >> nomeArquivo;

    while ((opc == 's') || (opc == 'S'))
    {
        cout << "Digite o nome do arquivo: ";
        cin >> nomeArquivo;
        arquivo << nomeArquivo << endl;
        cout << "Deseja continuar? (s/n): ";
        cin >> opc;
        system("CLS");
    }

    arquivo.close();

    arquivo.open("arquivos.txt", ios::in);

    cout << "Nomes digitados: " << endl;

    if (arquivo.is_open())
    {
        while (getline(arquivo, linha))
        {
            cout << linha << endl;
        }
        arquivo.close();
    }
    else
    {
        cout << "Erro ao abrir o arquivo!" << endl;
    }

    return 0;
}

/*
Este metodo utiliza ifstream e ofstream para manipular arquivos de texto.
*/