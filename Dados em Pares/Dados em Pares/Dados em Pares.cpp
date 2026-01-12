


/* MEU CÓDIGO
#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main() {
	
	pair <int, string> par;
	par.first = 100; 
	par.second = "Nikolas";

	cout << par.first << "-" << par.second << endl;

	//Opção de usar com vetores: 
	//Atento nas bibliotecas e placeholders

	const int tam = 3; 

	pair <int, string> par[tam];

	par[0].first = 100; 
	par[0].second = "Nikolas";

	par[1].first = 200;
	par[1].second = "Konoski";

	par[2].first = 300;
	par[2].second = "Magnata";

	cout << par[0].first << "-" << par[0]second << endl;
	

	//UTILIZANDO MAKE PAIR 

	const int tam = 3; 
	pair <int, pair <string, double> par[tam];

	par[0]= make_pair(10, make_pair("mouse", 10.55)); 
	par[1]= make_pair(20, "Curso de C++"; 
	par[2]= make_pair(30,"CFB Cursos");

	for(int i=0<tam; i++) {
	cout << par[i].first << "-" << par{i}.secod << endl; 
	}

	return 0; 

	



	return 0; 


}

*/

/*
Entendi ser uma ferramenta para ter estrutura de dados em pares

*/