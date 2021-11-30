#include <iostream>
#include "lib.h"
using namespace std;
int main(){
   int numero;

    int cont=0;
    cin >> numero;

    lib(numero, cont);
    if (cont==0) {
        cout << "numero primo" << endl;
    } else {
        cout << "numero non primo" << endl;
    }
  return 0;
}
