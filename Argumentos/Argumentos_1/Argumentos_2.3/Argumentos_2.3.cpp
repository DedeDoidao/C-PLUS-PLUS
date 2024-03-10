# include <iostream>

using namespace std;
void vetor (string array[3]);
int main(){
string vg[3] = {"Xbox ", "Series ", "S/X"};

vetor(vg);

return 0;
}

void vetor (string array[3]){
	for (int i=0; i<3;i++){
		cout << array[i];
	}
}
