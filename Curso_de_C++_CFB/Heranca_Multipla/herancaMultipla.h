#ifndef HERANCA_MULTIPLA_H
#define HERANCA_MULTIPLA_H

class Base1 {
    public:
        void impBase1();
};

void Base1::impBase1() {
    // Implementação da função da classe 
    std::cout << "Implementação da Base1\n" << std::endl;
}

class Base2 {
    public:
        void impBase2();
};

void Base2::impBase2() {
    // Implementação da função da classe 
    std::cout << "Implementação da Base2\n" << std::endl;
}

class Derivada : public Base1, public Base2 {
};

#endif //HERANCA_MULTIPLA_H