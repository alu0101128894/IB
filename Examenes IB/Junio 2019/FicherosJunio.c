/* Escribir un programa que dado un fichero "datos.txt" de numero enteros (un numero por lineas), abra,
lea el fichero, y visualice el minimo de los impares por pantalla. Se deber� realizar una funcion que calcule
y devuelva el minimo. El programa principal lo visualizar� por pantalla */

#include<stdio.h>

int main(void){

	FILE *f;

	int numero,minimo=999;

	f = fopen("datos.txt","r"); //Leer

	if(f == NULL){
		printf("Error de apertura");
		return 0;
	}

	fseek(f, 0 , SEEK_SET); //lee al principio del fichero (datos.txt")
	while (!feof(f)){

		fscanf(f,"%d",&numero);
		/*printf("El numero leido es: %d\n\n", numero);*/

		/*	if(numero % 2 == 0){  //pares  }

		else */

		if(numero % 1 == 0 && numero < minimo){
			minimo = numero;
			/*	printf("El numero %d es Impar\n\n", numero);*/
		}

	}
	printf("El minimo e impar es el: %d", minimo);

	fclose(f);

}
