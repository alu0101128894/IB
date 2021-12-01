/*
Ejercicio 1: Se quiere almacenar la siguiente información sobre libros de una librería: 
título, editorial, precio, ISBN. Se pide implementar un programa que, haciendo uso de 
las sentencias de control condicionales, solicite la información al usuario para 3 libros. 
Para los libros cuyo precio sea inferior a 20 euros se les aplicará un descuento de un 15% en el precio, 
para los que su precio supere los 80 euros el descuento será de un 30% y el resto de libros mantendrá su precio.
A continuación el programa debe mostrar, para todos los libros, sus datos actualizados.
*/


#include <stdio.h>

typedef struct{

	char titulo[50];
	char editorial[50]; 
	float p,pd;
	char ISBN[50];
    
}Libreria;

Libreria libros[3]; 

int main(void){
				
	printf("\n-------- Introduzca los datos del primer libro --------\n");
	
	printf("-Introduzca titulo: "); scanf("%[^\n]", libros[0].titulo);			
	getchar();
	printf("-Introduzca editorial: "); scanf("%[^\n]", libros[0].editorial); 	
	printf("-Introduzca el precio: ");	scanf("%f", &libros[0].p);	
	printf("-Introduzca el ISBN: ");	scanf("%s", libros[0].ISBN);				
	getchar();	
	
	printf("\n-------- Introduzca los datos del segundo libro --------\n");
	
	printf("-Introduzca el titulo: "); scanf("%[^\n]", libros[1].titulo);			
	getchar();
	printf("-Introduzca editorial: "); scanf("%[^\n]", libros[1].editorial); 	
	printf("-Introduzca el precio: ");	scanf("%f", &libros[1].p);				
	printf("-Introduzca el ISBN: ");	scanf("%s", libros[1].ISBN);				
	getchar();	
	
	printf("\n-------- Introduzca los datos del tercer libro --------\n");
	
	printf("-Introduzca titulo: "); scanf("%[^\n]", libros[2].titulo);			
	getchar();
	printf("-Introduzca editorial: "); scanf("%[^\n]", libros[2].editorial);
	printf("-Introduzca el precio: ");	scanf("%f", &libros[2].p);				
	printf("-Introduzca el ISBN: ");	scanf("%s", libros[2].ISBN);				
	getchar();
	

	if(libros[0].p < 20){																//Precio 1
		libros[0].pd = libros[0].p - (libros[0].p * 0.15);
	}
	else if(libros[0].p > 80){
		libros[0].pd = libros[0].p - (libros[0].p * 0.30);
	}
	else{
		libros[0].pd = libros[0].p;
	}

	if(libros[1].p < 20){																//Precio 2
		libros[1].pd = libros[1].p - (libros[1].p * 0.15);
	}	
	else if(libros[1].p > 80){
		libros[1].pd = libros[1].p - (libros[1].p * 0.30);
	}
	else{
		libros[1].pd = libros[1].p;
	}

	if(libros[2].p < 20){																//Precio 3
		libros[2].pd = libros[2].p - (libros[2].p * 0.15);
	}
	else if(libros[2].p > 80){
		libros[2].pd = libros[2].p - (libros[2].p * 0.30);
	}
	else{
		libros[2].pd = libros[2].p;
	}

	printf("\n-------- Los datos del primer libro son : --------\n\n");   				// primer libro 
	printf("- Titulo: %s\n",libros[0].titulo);
	printf("- Editorial: %s\n",libros[0].editorial);
	printf("- Precio actualizado: %.2f$\n",libros[0].pd);
	printf("- ISBN: %s\n",libros[0].ISBN);
	
	printf("\n-------- Los datos del segundo libro son : --------\n\n"); 				//segundo libro 
	printf("- Titulo: %s\n",libros[1].titulo);
	printf("- Editorial: %s\n",libros[1].editorial);
	printf("- Precio actualizado: %.2f$\n",libros[1].pd);
	printf("- ISBN: %s\n",libros[1].ISBN);
	
	printf("\n-------- Los datos del tercer libro son : --------\n\n");					//tercer libro 
	printf("- Titulo: %s\n",libros[2].titulo);
	printf("- Editorial: %s\n",libros[2].editorial);
	printf("- Precio actualizado: %.2f$\n",libros[2].pd);
	printf("- ISBN: %s\n",libros[2].ISBN);
	
	return 0;

}
