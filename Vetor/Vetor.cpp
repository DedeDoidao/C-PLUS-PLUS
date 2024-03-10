#include <iostream>
using namespace std;
int main(){
	
	int v=5;// Essa vari�vel � a refer�ncia para o tamanho do vetor logoo na linha de baixo
	int vetor [v];
	int i;
	
	vetor[0]=1;
	vetor[1]=10;
	vetor[2]=100;
	vetor[3]=1000;
	vetor[4]=10000;
	
	
	/*� poss�vel definir os valores do vetor assim:
	int vetor[5]=(1,10,100,1000,10000)*/
	
	
	for(i=0;i<v;i++)
	{
		cout << vetor[i] << "\n";
	}	

	return 0;
}
