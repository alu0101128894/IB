/* Escribir un programa que dado un fichero "datos.txt" de numeros enteros
(un numero por lineas), lea el formato y visualice cuantos numeros por linea hay*/

#include<stdio.h>

int main(void){
	
	FILE *f; 
	
	int numero;
	
	f = fopen("datos.txt","r"); 
	
	if (f == NULL){
		printf("Error");
		return 0;
	}

	fseek(f, 0 , SEEK_SET); //lee al principio del fichero (datos.txt")
	while (!feof(f)){
		
		fscanf(f,"%d",&numero);
		printf("El numero leido es: %d\n", numero);
	}
	fclose(f);
}

