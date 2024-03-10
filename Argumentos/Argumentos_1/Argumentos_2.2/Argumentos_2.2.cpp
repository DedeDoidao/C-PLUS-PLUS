#include <iostream>

using namespace std;


int soma_2(int n1, int n2);

int main(){
	int resto = soma_2(12, 11);
	
	resto= soma_2(12, 11);
	
	
	cout << resto;
	
	return 0;
}

int soma_2(int n1, int n2){
	return n1+n2;
}
//O 'Void' é o único que não utiliza o 'return'
