#include <iostream>
using namespace std;

void somar(int *var, int valor);
void pont(int *v);
int main() {

 int num = 0;
 int array[4];

 somar(&num, 23);
 
 cout << "\n" << num;

 pont(array);
 
 for (int i=1; i<5; i++){
cout << "\n" << array[i];
 }
    return 0;
}

void somar(int *var, int valor){
 *var+=valor;
}

void pont(int *v){
    v[1] = 1;
    v[2] = 2;
    v[3] = 3;
    v[4] = 4;
}