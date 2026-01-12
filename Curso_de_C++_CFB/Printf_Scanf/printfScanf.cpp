#include <iostream>
#include <stdio.h> 

using namespace std;

int main() {

    int ano; 
    // Declara um array de 10 chars. O nome pode ter até 9 caracteres,
    // pois o 10º espaço é reservado para o caractere nulo '\0'.
    char nome[10]; 
    printf("Digite seu nome: ");
    // Usamos "%9s" para limitar a leitura a 9 caracteres, evitando buffer overflow.
    // O nome de um array (nome) já é um ponteiro para seu primeiro elemento,
    // então não precisamos do '&' para o formato %s.
    scanf("%9s", nome);

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano);

    printf("\nOla %s, voce nasceu em %d.\n", nome, ano);


    return 0;
}
//Comandos para leitura e impressão de dados
//Necessitam de placeholder anterior a chamada da variável 
//Necessitam usar o opoerador de endereço &

/* 
//Placeholders %:
d, i => INT 
x, X => Hexadecimal 
u => int sem sinal 
s => string (char*) 
f => float/double (para printf), lf para double (para scanf)
p => ponteiros  


Outras Observações e Melhorias
Analisando o restante do seu código, encontrei alguns outros pontos que podem ser melhorados para torná-lo mais correto e seguro:

Null Terminator Incorreto: Você usou '/0' para terminar a string. O caractere nulo em C/C++ é '\0' (com uma barra invertida).
Uso de scanf:
scanf("%s", &nome); é perigoso, pois pode causar um buffer overflow se o usuário digitar mais de 9 caracteres (o 10º é para o \0). É mais seguro especificar um limite de tamanho.
Ao passar um array para scanf com %s, você não precisa do operador de endereço &. O nome do array (nome) já "aponta" para o endereço do seu primeiro elemento.
Código Redundante: A inicialização manual do array nome é sobrescrita logo em seguida pela chamada scanf. Você pode remover essa inicialização se a intenção é ler o nome do usuário.
Versão Corrigida e Comentada
*/