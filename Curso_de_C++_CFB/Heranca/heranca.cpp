#include <iostream>
#include "heranca.h"

using namespace std;

int main() {
 Moto *v1 = new Moto();
    Carro *v2 = new Carro();
    Navio *v3 = new Navio();

    v1->imp();
    v2->imp();
    v3->imp();

    return 0;
}