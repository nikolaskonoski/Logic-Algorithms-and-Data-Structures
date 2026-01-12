#include <iostream>
#include <utility>

using namespace std; 

int main() {
	pair <int, string> par;

	par.first = 1000; 
	par.second = "Nikolas";

	cout << par.first < "-" << par.second << endl; 

	return 0; 
}

/*
Entendi que é uma coleção de dados onde consigo estruturar dados em pares ou +
o metodo se chama pair
*/
