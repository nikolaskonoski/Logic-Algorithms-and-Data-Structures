#include <iostream>
#include "herancaMultipla.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    Base1 *obj1 = new Base1();
    Base2 *obj2 = new Base2();
    Derivada *obj3 = new Derivada();

    obj1->impBase1();
    obj2->impBase2();

    obj3->impBase1();
    obj3->impBase2();

    return 0;
}

//Entendi que na herança múltipla, uma classe derivada pode herdar de mais de uma classe base,
//e assim, a classe derivada pode acessar os membros (atributos e métodos) de todas as classes base das quais ela herda.