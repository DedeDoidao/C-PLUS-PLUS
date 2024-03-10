#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int matriz[3] [4];
	int i, c;
	string r;
	
	again:
	
	for(i=0;i<3;i++)
	{
		for(c=0;c<4;c++)
		{
			cin >> matriz[i] [c];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(c=0;c<4;c++)
		{
			cout << matriz [i] [c] <<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nDeseja executar o programa novamente?: ";
	cin >> r;
	if(r=="SIM" or r=="Sim" or r=="S" or r=="sim" or r=="s")
	{
		system("cls");
		goto again;
	}
	
	return 0;
}
