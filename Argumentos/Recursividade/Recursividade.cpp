#include <iostream>

using namespace std;

void contador(int num, int cont=0);
int main() {
 

  contador(20);

    return 0;
}

void contador(int num, int cont){

cout << "\n" << cont;

if (num>cont){
    contador(num,++cont);
}

}

//Fatorial e Fibonacci