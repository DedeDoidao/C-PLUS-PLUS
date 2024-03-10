#include <iostream>
#include <list>

using namespace std;

int main(){

//push_front adiciona um valor no topo da lista
//push_back adiciona um valor na base da lista

//pop_front exclui o avalor do topo da lista e pop_back exclui o ultimo valor da lista

int tam = 10;

  list <int> idade, meses;
  list <int>::iterator it; //para adicionar qualquer valor sem ser no topo e na base


meses.push_front(310);
meses.push_front(473);
meses.push_front(10);
meses.push_front(700);
meses.push_front(500);

 for(int i=0; i<tam; i++){
idade.push_front(i);
}
 it = idade.begin();
 advance(it, 8);
 idade.erase(--it); //retira uma valor da lista
 
idade.merge(meses); //Mescla os valores das listas

tam = idade.size();
for(int i=0; i<tam; i++){
cout << "\n" << idade.front();
idade.pop_front();
}

idade.clear();
cout << "\n\nTamanho da lista: " << idade.size();


    return 0;
}