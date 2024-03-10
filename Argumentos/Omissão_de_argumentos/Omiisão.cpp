#include <iostream>

using namespace std;


void impressao(string txt="Vazio");
int main()
{
	impressao("Denis");
	
	
	return 0;
}


void impressao(string txt){
	cout <<"\n" << txt;
}
