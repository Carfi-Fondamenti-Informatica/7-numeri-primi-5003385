#include <iostream>

int main(){
   int numero;

    int cont=0;
    cin >> numero;

    funzione(numero, cont);
    if (cont==0) {
        cout << "numero primo" << endl;
    } else {
        cout << "numero non primo" << endl;
    }
  return 0;
}
