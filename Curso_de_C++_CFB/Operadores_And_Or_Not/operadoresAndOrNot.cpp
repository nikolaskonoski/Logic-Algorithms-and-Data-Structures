#include <iostream>

using namespace std; 

int main(){

    int num; 

    /*
    1 = verdadeiro / true 
    0 = falso / false 

    ! O operador de negação ele analisa "Se não for verdadeiro" (!num)
    if(num == 1) /if(num)
    if(num == 0) / if(!num)
    if(num != 1) / if(!num)
    */

    num=0; 
    if(num) {
        cout << "\n\nVou ao clube\n";
    } else {
        cout << "\n\nVou ao cinema\n";
    }

    return 0;
}