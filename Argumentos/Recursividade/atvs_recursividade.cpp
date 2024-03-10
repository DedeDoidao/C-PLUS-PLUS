#include <iostream>

using namespace std;

void fatorial(int n, int resultado);
int main(){


fatorial(4, 1);

return 0;
}

void fatorial(int n, int resultado){

resultado = resultado * n;

 if (n>1){
 cout << n << " * ";
 }

 else if (n==1){
      cout << n << " = " << resultado;
 }
 {
     
 }
 if (n>0){
     fatorial(--n, resultado);
     
 }


}