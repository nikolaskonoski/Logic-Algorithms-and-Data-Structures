#include <cstdio>

void f2(char hello[]) {
    printf(" from f2: %p\n", (void*)&hello);
    printf("%s\n", hello);
}

void f1(char hello[]) {
    printf(" from f1: %p\n", (void*)&hello);
    f2(hello);
}

int main() {
    char hello[] = "Hello World!";
    printf(" from main: %p\n", (void*)&hello);
    f1(hello);

    return 0; 
}