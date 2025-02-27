/****************************************************************
*pontificcia universidad javeriana
fecha 13 de feb 
autor: daniel hoyos
materia: istemas operativos
temas: memoria dinamica, progrmacion modula y compilacion automatica 
******************************************************************/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "modulo.h"
/*funcion para inicializar mtriz*/
void inimatriz(int *M1, int *M2, int S){
	
	for(int i=0;i<S*S; i++){
	M1[i]= 2+i;
	M2[i]= 3*i;
	}
  
}
/*funcion para imprimir*/
void impmatriz(int *pA,int S){
		if(S<6){

	for(int i=0;i<S; i++){
		for(int j=0;j<S; j++){
		printf(" %d ",pA[i*S +j]);
		}
		printf("\n");


		}
	printf("---------------------------\n");
	printf("\n");
		

 }
}

/*funcion para hacer la multiplicacion de matrices F * C*/



void multimatrices (int *mA, int *mB,int *mC, int S){


	for(int i=0;i<S;i++){
		for(int j=0;j<S;j++){
		int suma=0;
		int *pA, *pB;
		pA=mA+i*S;
		pB=mB+j;
			for(int k=0;k<S;k++,pA++,pB+=S){
			suma+= (*pA * *pB);
			}
			mC[i*S+j] = suma;
		}

	}
}


