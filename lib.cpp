

#include "lib.h"

void lib (int a,int i, int &cont){
    int r=0;
    i++;
    if (a>1 and a>i){
        r=a%i;
        if(r==0){
            cont++;
        } else {
            lib(a, i, cont);
        }
    }

}
