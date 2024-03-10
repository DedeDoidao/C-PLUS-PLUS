#include <iostream>
#include <queue>

using namespace std;

int main(){

/*
empty
size
front
back
push
pop
*/

queue <string> VG;
VG.push("Xbox"); //Adiciona um valor à fila/queue
VG.push("Series");
VG.push("X");

cout << "O tamanho da fila e de " << VG.size(); //Ve o tamanho da lista

cout << "\nA palavra da frente e " << VG.front(); //Ve o primeiro valor
cout << "\nA ultima palavra e " << VG.back(); //Ve o ultimo valor


while(!VG.empty()){
    cout << "\n\nA palavra da frente e " << VG.front();
    VG.pop(); // Retira o primeiro valor
}


    return 0;
}

 