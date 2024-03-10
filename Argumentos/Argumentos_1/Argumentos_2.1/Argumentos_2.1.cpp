# include <iostream>

using namespace std;

void soma(int n1,int n2);
 
int main() {
	
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 0;
	int i = 0;
	int c = 10;
	
	for (i=6,c =13; contador< 10; contador++, i++, c++)
	{
	 soma(i, c);
	}
	
	
	return 0;
}

void soma(int n1,int n2)
{
	cout << "\nO resultado da adição é " << n1+n2;
}
