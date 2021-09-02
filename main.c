
#include <stdio.h>
#include <stdlib.h>
#include "headerfuncion.h"
int main(int argc, char** argv) {
    int size;
    int array[]={1,2,3,4};
    float arrayf[]={1.3,2.3,3.2,4.2};
    double arrayd[]={1.3,2.3,3.2,4.2};
    char arrayc[]={'a','b','c','d'};
    size=lenght(array);
    Mostrar(arrayc,size);
    

    return (EXIT_SUCCESS);
}

