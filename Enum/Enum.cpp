#include <iostream>
using namespace std;
int main(){

   enum armas{pistola = 75, escopeta = 30, rifle_de_plasma = 130, carabina_de_plasma = 91};
        armas armasSel;

        armasSel = escopeta;

        cout << armasSel;

    return 0;
}