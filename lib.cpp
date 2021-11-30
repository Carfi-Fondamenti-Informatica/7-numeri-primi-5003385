
#include "lib.h"

void lib (int a, int &cont){
    int i=0;
    int r=0;
    i++;
    if (a>1 & a>i){
        r=a%i;
        if(r==0){
            cont++;
        } else {
            lib(a, cont);
        }
    }

}
