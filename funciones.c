
#include <stdio.h>
#include "headerfuncion.h"
int MostrarI(int *vector, size_t tamano){
    int i;
    if(tamano>0){
        for (i = 0; i < tamano; i++) {
        if (i==0) {
            printf("[%i",vector[i]);

        }else if(i==(tamano-1)){
            printf(",%i]",vector[i]);
        }else{
            printf(",%i",vector[i]);
        }   
    }
    return 1;
    }else{
        return 0;
    }
    
}
int MostrarD(double *vector, size_t tamano){
   int i;
   if (tamano>0) {
       for (i = 0; i < tamano; i++) {
        if (i==0) {
            printf("[%lf",vector[i]);

        }else if(i==(tamano-1)){
            printf(",%lf]",vector[i]);
        }else{
            printf(",%lf",vector[i]);
        }
        
    }
    return 1;

    }else{
       return 0;
    }
   
    
}
int MostrarC(char *vector, size_t tamano){
    int i;
    if (tamano>0) {
        for (i = 0; i < tamano; i++) {
        if (i==0) {
            printf("[%c",vector[i]);

        }else if(i==(tamano-1)){
            printf(",%c]",vector[i]);
        }else{
            printf(",%c",vector[i]);
        }
        
    }
    return 1;


    }else{
        return 0;
    }

    }
int MostrarF(float *vector, size_t tamano){
    int i;
    if (tamano>0) {
        for (i = 0; i < tamano; i++) {
        if (i==0) {
            printf("[%f",vector[i]);

        }else if(i==(tamano-1)){
            printf(",%f]",vector[i]);
        }else{
            printf(",%f",vector[i]);
        }
        

    }

       return 1; 
    }else{
        return 0;
    }
    
}