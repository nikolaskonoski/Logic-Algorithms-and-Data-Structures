#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
#include <clocale>
#ifdef _WIN32
#include <Windows.h>
#endif

int main()
{

#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    // Declaração de variáveis
    char palavra[30], letra[1], secreta[30];

    int tam, i, chances, acertos;

    bool acerto = false;

    // Inicialização de variáveis
    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;

    cout << "Digite uma palavra secreta: ";
    cin >> palavra;
    system("cls");

    // Para colher o tamanho da palavra: Aqui ele está analisando quando há digito para incrementar
    while (palavra[i] != '\0')
    {
        i++;
        tam++;
    }

    // Preenchendo o vetor de traços
    for (i = 0; i < 30; i++)
    {
        secreta[i] = '_';
    }

    while ((chances > 0) && (acertos < tam))
    {
        cout << "\nChances restantes: " << chances << "\n";
        cout << "\nPalavra secreta: ";
        for (i = 0; i < tam; i++)
        {
            cout << secreta[i];
        }
        cout << "\n\nDigite uma letra: ";
        cin >> letra[0];

        // Percorrendo o input e verificando se está dentro das palavras já digitadas
        for (i = 0; i < tam; i++)
        {
            if (palavra[i] == letra[0])
            {
                secreta[i] = palavra[i]; // Processo de copiar a palavra e joga-la para a posição de acerto
                acerto = true;
                acertos++;
            }
        }
        if (!acerto)
        {
            chances--;
        }
        acerto = false;
        system("cls");
    }

    if (acertos == tam)
    {
        cout << "Você venceu!\n";
    }
    else
    {
        cout << "Você perdeu!\n";
    }
    system("pause");
    return 0;
}