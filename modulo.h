#ifndef __MODULO_H_
#define __MODULO_H_

/****************************************************************
*pontificcia universidad javeriana
fecha 13 de feb 
autor: daniel hoyos
materia: istemas operativos
temas: memoria dinamica, progrmacion modula y compilacion automatica

	INTERFAZ DE FUNCIONES:BIBLIOTECA 
******************************************************************/

#include <stdlib.h>
#include <stdio.h>
/*funcion para inicializar mtriz*/
void inimatriz(int *M1, int *M2, int S);

void impmatriz(int *pA,int S);

void multimatrices (int *mA, int *mB,int *mC, int S);

#endif

