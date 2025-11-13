#include <stdio.h>
using namespace std;

int n1, n2; //Estas são variáveis globais => consigo acessá-las de qualquer lugar

int main() {
    int n3, n4; //Estas são variáveis locais 
    int res; 

    n1=11;
    n2=3;
    n3=5;
    n4=2;

    res=n1+n2*n4; //Esta soma da 14, porque a primeira operação a ser feita sera a de n2*n4, atenção pois eu fiz de uma maneira errada inicialmente

    cout << "Valor de res: " << res << "\n\n";
    
    return 0;
}