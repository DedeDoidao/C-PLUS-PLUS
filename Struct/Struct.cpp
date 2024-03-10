#include <iostream>

using namespace std;


struct carros
{
    string nome;
    string cor;
    int potencia;
    int velmax;

};

int main(){

carros carro_1;
carro_1.nome = "Zentorno";
carro_1.cor = "Azul escuro";
carro_1.potencia = 400;
carro_1.velmax = 330;

cout << "\nNome do carro................." << carro_1.nome;
cout << "\nCor do carro.................." << carro_1.cor;
cout << "\nPotencia do carro............." << carro_1.potencia;
cout << "\nVelocidade máxima do carro...." << carro_1.velmax;
cout << "\n\n";

carros carro_2;
carro_2.nome = "Batmovel";
carro_2.cor = "Preto";
carro_2.potencia = 600;
carro_2.velmax = 500;


cout << "\nNome do carro................." << carro_2.nome;
cout << "\nCor do carro.................." << carro_2.cor;
cout << "\nPotencia do carro............." << carro_2.potencia;
cout << "\nVelocidade máxima do carro...." << carro_2.velmax;



    return 0;
}