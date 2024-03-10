#include <iostream>

using namespace std;


void soma(int n1, int n2);
void soma();
int main()
{
		setlocale(LC_ALL, "Portuguese");
	
	soma(37, 3);
	soma();
	return 0;
}



void soma(int n1, int n2)
{
	int resto;
	resto = n1+n2;
		cout << "A soma dos dois termos é igual à " << resto << "\n";
}

void soma(){
	
	int n1=2, n2=5, resto;
	
	resto = n1+n2;
	
	cout << "A soma dos dois termos é igual à " << resto;
	
}
