#include <iostream> 

using namespace std;

int main() {
    int n1, n2; 

    n1=20;
    n2=10;

    cout << n1 << "\n\n";
//Aqui eu entendo que eu tenha o operador e qual valor receberá esta operação 
    //n1=n1+10; n1+=10;
    //n1=n1-10; n1-=10;
    //n1=n1*10; n1*=10;
    //n1=n1/10; n1/=10;

//Pós fixado
cout << n1++ << "\n\n"; // Aqui o valor não altera na saida pois o compilador está lendo a variável primeiro e depois incrementando 

//Pré-fixado 
cout << ++n1 << "\n\n"; //Aqui o valor altera pois ele incrementa primeiro e depois usa o valor da variável 

    n1++; //n1--;
    cout << n1 << "\n\n";

    return 0;
}