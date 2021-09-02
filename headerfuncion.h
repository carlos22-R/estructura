/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   headerfuncion.h
 * Author: carlos
 *
 * Created on 1 de septiembre de 2021, 21:58
 */

#ifndef HEADERFUNCION_H
#define HEADERFUNCION_H
#define lenght(x) (sizeof(x)/sizeof((x)[0]))
#define Mostrar(vector,tamano) _Generic((vector), \
              int*: MostrarI, \
              double*: MostrarD,  \
              float*: MostrarF, \
              char*: MostrarC \
)(vector,tamano)
int MostrarI(int *vector, size_t tamano);
int MostrarD(double *vector, size_t tamano);
int MostrarC(char *vector, size_t tamano);
int MostrarF(float *vector, size_t tamano);



#endif /* HEADERFUNCION_H */

