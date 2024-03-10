#include <iostream>

void Fibonacci(int n1, int n2,int c);
using namespace std;


int main(){

  

Fibonacci (1,1,0);

    return 0;
}


void Fibonacci(int n1, int n2,int c){
 
c = n2;
n2 = n2 + n1;
n1 = c;

if (n2==2){
   cout << "0 1 1 ";
}

cout << n2 << " ";

if (n2<3000){
    Fibonacci (n1, n2, c);
}

}