#include <iostream>

using namespace std;

int main() {

    int val;
    string res;

    cout << "Selecione uma cor:\n";
    cout << "[1]=Verde, [2]=Azul, [3]=Amarelo, [4]=Vermelho\n";
    cin >> val;

    switch (val)
    {
    case 1:
        res = "Cor selecionada: Verde";
        break;
    case 2:
        res = "Cor selecionada: Azul";
        break;
    case 3:
        res = "Cor selecionada: Amarelo";
        break;
    case 4:
        res = "Cor selecionada: Vermelho";
        break;
    default: //Caso o usuário digite um valor que não seja nenhuma das opções
        res = "Selecione uma das cores disponiveis";
        break;
    }

    cout << res << "\n\n";

    return 0;
}

/*
Para agrupar múltiplas condições em um switch case, você pode listar os casos consecutivamente sem o comando break entre eles. Por exemplo:
cout <<"[1, 2,3] = Verde, [4,5,6] = Azul\n";


Podemos também fazer switch cases aninhados
Na aula o exemplo foi de tranporte aereo ou terrestre e dentro do tipo podia escolher qual do veiculo referente a categoria 
switch (val) {
    case 1:
    case 2:
    case 3:
        res = "Cor selecionada: Verde";
        break;
    case 4:
    case 5:
    case 6:
        res = "Cor selecionada: Azul";
        break;
    default:
        res = "Selecione uma das cores disponiveis";
        break;
} 

*/
