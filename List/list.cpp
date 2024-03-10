#include <iostream>
#include <list>

using namespace std;

int main(){

//push_front adiciona um valor no topo da lista
//push_back adiciona um valor na base da lista

//pop_front exclui o avalor do topo da lista e pop_back exclui o ultimo valor da lista

int tam = 10;

  list <int> idade;
  list <int>::iterator it; //para adicionar qualquer valor sem ser no topo e na base

 for(int i=0; i<tam; i++){
idade.push_front(i);
}
 

idade.push_front(23);
idade.push_front(10);
idade.push_front(5);
idade.push_front(17);
idade.push_front(18);
idade.push_front(30);
idade.push_front(29);
idade.push_front(89);

 
 
it = idade.begin();
advance(it, 5);
idade.insert(it, 23);
 

idade.sort(); //ordena a lista de ordem decrescente
//idade.reverse(); //ordena de ordem reversa

tam = idade.size();
for(int i=0; i<tam; i++){
cout << "\n" << idade.back();
idade.pop_back();
}
 

    return 0;
}