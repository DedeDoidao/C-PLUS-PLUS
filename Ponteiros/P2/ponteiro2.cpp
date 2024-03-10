#include <iostream>
using namespace std;
 int main() {

 string *ponteiro;
 string jogos[4];

   jogos[0] = "Life is strange";
   jogos[1] = "The Witcher 3: Wild Hunt";
   jogos[2] = "Red Dead Redemption 2 ";
   jogos[3] = "Batman Arkham Knight";

/*
 ponteiro = &jogos[0];

 cout << ponteiro << " " << *ponteiro;

  ponteiro = &jogos[1];

 cout << ponteiro << " " << *ponteiro;

   ponteiro = &jogos[2];

 cout << ponteiro << " " << *ponteiro;
*/

 for (int c=0; c<4; c++){
   ponteiro = &jogos[c];
   cout << "\nO jogo '" << jogos[c] << "' tem como ponteiro: " << ponteiro;

 }



     return 0;
 }