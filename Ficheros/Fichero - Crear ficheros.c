/* Hacer un programa que cree un fichero de texto (.txt) */

#include<stdio.h>

FILE *f;

int main(void){
	
	f = fopen("hola.txt", "w"); //w = write, crear ficheros
	
	if (f == NULL){
		printf("No se puede crear el archivo");
			
	}
	else{
		printf("Se creo el archivo");
	}
}


