
/****************************************************************
*pontificcia universidad javeriana
fecha 13 de feb 
autor: daniel hoyos
materia: istemas operativos
temas: memoria dinamica, progrmacion modula y compilacion automatica 
	Programa Principal Multiplicacion de matrices
******************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "modulo.h" 
int main (int argc, char *argv[]){
	int N = (int) atoi(argv[1]);
	/*recibir por pantalla el tamaño de la matriz y convertirlo en entero*/

	/*reserva de memoria para matrices*/

	int *mA= (int*) malloc(N*N*sizeof(int));
	int *mB= (int*) malloc(N*N*sizeof(int));
	int *mC= (int*) malloc(N*N*sizeof(int));


	/*inicialiar matrices*/

	inimatriz(mA,mB,N);


	/*imprimir matrices A y B*/

	impmatriz(mA,N);
	impmatriz(mB,N);

	clock_t t;
	t = clock();

	/*llamar funcion de multiplicar matrices*/
	multimatrices(mA,mB,mC,N);

	/*calculo de toma de tiempo con respecto a antes de multimatrices a despues*/
	t=clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("la funcion multimatrices tarda %f segundos en ejecucion: \n ",time_taken);
	

	/*imprimir matriz c*/
	impmatriz(mC,N);

	/*liberar la memoria utilizada para las matrices*/

	free(mA);
	free(mB);
	free(mC);

	return 0;
}
