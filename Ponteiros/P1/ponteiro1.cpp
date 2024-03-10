#include <iostream>
using namespace std;
int main() {

//Ponteiro armazena o endereço de uma variável

 string console1;
 string console2;

 string *ponteiro1;
 string *ponteiro2;

 console1 = "Xbox Series S";
 console2 = "Playstation 4";
 ponteiro1 = &console1;
 ponteiro2 = &console2;

 cout << "O " << console1 << " tem como endereco: " << ponteiro1;
 cout << "\nO " << console2 << " tem como endereco: " << ponteiro2;

    return 0;
}


