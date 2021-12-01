/* Escribir un programa que dado un fichero "datos.txt" de texto, lea el fichero y muestre por pantalla
el numero de lineas que contiene el dicho fichero */

#include<stdio.h>

int main(void){
	
	int cont=0;
	char c;

	FILE *f;

	f = fopen("prueba.txt","r");

	if(f == NULL){
		printf("Error de apertura");
		return 0;
	}

	cont = 0;

	fseek(f, 0, SEEK_SET);
	while (!feof(f)){

		c = fgetc(f); //Se leen los caracteres
		if(c == '\n'){
			cont++;
		}
	}

	printf("La cantidad de lineas que contiene este fichero es: %d", cont);
	fclose(f);

}
