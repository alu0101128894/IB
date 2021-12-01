#include<stdio.h>

int main(void){
	
	int a,b;
	
	FILE *f;
	
	f = fopen("numeros.txt","r"); // Quiero leer
	
	if(f == NULL){
		printf("Error: No se ha abierto correctamente");
	}
	else{
																	/*	printf("Introduzca un numero entero: ");*/
	fscanf(f,"%d",&a);
	printf("El valor de a es: %d\n",a);
	
																	/*printf("Introduzca un numero entero: ");*/
	fscanf(f,"%d",&b);
	printf("El valor de b es: %d\n",b);
		
	fclose(f);
		
	}
	

}
