/* Escribir un programa que dado un fichero "datos.txt" de numeros enteros
(un numero por lineas), lea el formato y visualice cuantos numeros primos contiene
el dicho fichero */

#include<stdio.h>

int main(void){

	int numero, i, cont=0, primo=0; // cantidad de numeros primos

	FILE *f; //Puntero archivo

	f = fopen("datos.txt","r");

	if (f == NULL){
		printf("Error");
		return 0;
	}

	fseek(f, 0 , SEEK_SET); //lee al principio del fichero (datos.txt")
	while (!feof(f)){

		fscanf(f,"%d",&numero);
		printf("El numero leido es: %d\n", numero);

		cont = 0;
		for (i=1; i <= numero; i++){ //Vaya aumentando 1 en 1  // 4/1 4/2 4/3 4/4 i = numero, i <= numero

			if (numero % i == 0){

				cont++; //cont = cont + 1;
			}
		}
		if (cont > 2){
				//vacio, no hace falta mostrar el "NO es un numero primo"
		}
		else{
			primo++; // primo = primo + 1;
		}
	}

	printf("\nHay %d numeros primos en total", primo);

	fclose(f);
}
