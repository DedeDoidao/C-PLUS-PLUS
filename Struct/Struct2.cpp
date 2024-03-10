#include <iostream>
using namespace std;

struct carros
{
    string nome;
    string cor;
    int potencia;
    int velmax;
    int vel;
 

void inserir (string nome1, string cor1, int potencia1, int velmax1){
    nome = nome1;
    cor = cor1;
    potencia = potencia1;
    velmax = velmax1;
    vel = 0;
 }
 
void mostra(){

cout << "\nNome do carro................." << nome;
cout << "\nCor do carro.................." << cor;
cout << "\nPotencia do carro............." << potencia;
cout << "\nVelocidade maxima do carro...." << velmax;
cout << "\nVelocidade atual do carro...." << vel;

}

void velmax_mudanca(int vm){
vel = vm;

if (vel > velmax){
    vel = velmax;
}

if (vel < 0){
    vel = 0;
}

}

};

int main(){

carros carro_1, carro_2;
 
carro_1.inserir("Zentorno", "Azul escuro", 350, 278);
 
carro_2.inserir("Zentorno", "Vermelho", 350, 278);


carro_1.mostra();
cout << "\n\n";
carro_2.mostra();

cout << "\n\n";

carro_2.velmax_mudanca(231);
carro_2.mostra();

    return 0;
}