#include <iostream>

using namespace std;

auto soma(int a, int b) -> int { // Usando 'auto' com especificação de tipo de retorno
    return a + b;
}

void somador() {
    static auto total = 0; // 'static' mantém o valor entre chamadas, 'auto' deduz o tipo como int
    for (int i = 0; i < 10; i++) {
        total += i;
    }
    cout << "Total do somador: " << total << endl;
}


int main() {
    auto num = 10; // 'num' é deduzido como int quando usado auto, quando inicializado com 10 ele somente aceita valores inteiros
    cout << "Valor de num: " << num << endl;

    auto res = soma(5, 7);
    cout << "Resultado da soma: " << res << endl;

    register int contador = 0; // 'register' sugere ao compilador que armazene a variável em um registrador para acesso rápido
    for (contador = 0; contador < 5; contador++) {
        cout << "Contador: " << contador << endl;
    }

    static int valorEstatico = 0; // 'static' mantém o valor da variável entre chamadas de função
    valorEstatico++;
    cout << "Valor estático: " << valorEstatico << endl;



    return 0;
}


/*
auto: É uma palavra-chave que permite a dedução automática do tipo de uma variável com base no valor com o qual ela é inicializada. 
Isso pode tornar o código mais conciso e legível, especialmente quando os tipos são longos ou complexos.

register: É uma sugestão ao compilador para armazenar a variável em um registrador de CPU em vez de na memória RAM, visando melhorar o desempenho. 
No entanto, o uso de 'register' é geralmente desconsiderado pelos compiladores modernos, que são bastante eficientes na otimização do uso de registradores.
*/