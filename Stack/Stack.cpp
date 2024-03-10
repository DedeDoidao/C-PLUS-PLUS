#include <iostream>
#include <stack>
using namespace std;

int main(){
 
    stack <string> nome;


  if(nome.empty()){ //Verifica se a pilha está vazia
    cout << "\nPilha vazia";
  }
  else
  {
    cout << "\nPilha com valor";
  }



    nome.push("Ferreira"); //Adiciona um valor à pilha
    nome.push("Costa");
    nome.push("da");
    nome.push("Denis");

  cout << "\nTamanho do 'stack' " << nome.size() << "\n";
  cout << nome.top() << "\n"; //Exibe o primeiro valor


    nome.pop(); //Tira o último valor

  cout << nome.top() << "\n"; //Exibe o primeiro valor
   cout << "Tamanho do 'stack' " << nome.size() << "\n";


  if(nome.empty()){
    cout << "\nPilha vazia";
  }
  else
  {
    cout << "\nPilha com valor";
  }



    return 0;
}