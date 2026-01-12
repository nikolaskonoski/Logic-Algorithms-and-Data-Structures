#include <iostream>

using namespace std;

int main()
{
    /*
    for (inicialização de variáveis (x, y); condição; inc/dec para (x, y)) {
    //comando
    }
    */

    int x, y, z;
    for (x = 0, y = 1, z = 0; x <= 10; x++, y += 2, z += 2)
    {
        cout << x << " - ";
        cout << y << " - ";
        cout << z << " - ";
        cout << "\n";
    }

    return 0;
}

/*
Maneira de usar sem bloco de comandos/ sem corpo

for(int tmp = 0; tmp < 1000000000; tmp ++);


*/