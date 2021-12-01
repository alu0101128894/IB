/*
Ejercicio 1: Se quiere almacenar la siguiente información sobre libros
de una librería: título, editorial, precio, ISBN. Se pide implementar un programa que,
haciendo uso de los tipos de datos compuestos, solicite la información al usuario para 3 libros,
y a continuación muestre los libros introducidos y el coste total de los 3 libros.
*/

#include<stdio.h>

typedef struct{

	char titulo[50];
	char editorial[50];
	float precio;
	char ISBN[50];

}Tlibreria;

Tlibreria libros[3];

float coste_total;

int main(void){


	printf("\n-------- Introduzca los datos del primer libro --------\n");

	printf("-Introduzca el titulo: "); scanf("%[^\n]", libros[0].titulo);				/* TÍTULO */
	getchar();
	printf("-Introduzca su editorial: "); scanf("%[^\n]", libros[0].editorial); 		/* EDITORIAL */
	printf("-Introduzca el precio: ");	scanf("%f", &libros[0].precio);					/* PRECIO */
	printf("-Introduzca el ISBN: ");	scanf("%s", libros[0].ISBN);					/* ISBN */
	getchar();

	printf("\n-------- Introduzca los datos del segundo libro --------\n");

	printf("-Introduzca el titulo: "); scanf("%[^\n]", libros[1].titulo);				/* TÍTULO */
	getchar();
	printf("-Introduzca su editorial: "); scanf("%[^\n]", libros[1].editorial); 		/* EDITORIAL */
	printf("-Introduzca el precio: ");	scanf("%f", &libros[1].precio);					/* PRECIO */
	printf("-Introduzca el ISBN: ");	scanf("%s", libros[1].ISBN);					/* ISBN */
	getchar();

	printf("\n-------- Introduzca los datos del tercer libro --------\n");

	printf("-Introduzca el titulo: "); scanf("%[^\n]", libros[2].titulo);				/* TÍTULO */
	getchar();
	printf("-Introduzca su editorial: "); scanf("%[^\n]", libros[2].editorial); 		/* EDITORIAL */
	printf("-Introduzca el precio: ");	scanf("%f", &libros[2].precio);					/* PRECIO */
	printf("-Introduzca el ISBN: ");	scanf("%s", libros[2].ISBN);					/* ISBN */
	getchar();

	coste_total = (libros[0].precio + libros[1].precio + libros[2].precio);   			/* Operacion */

	printf("\n-------- Los datos del primer libro son : --------\n\n");   				/* Imprimir los datos del primer libro */

	printf("- Titulo: %s\n",libros[0].titulo);
	printf("- Editorial: %s\n",libros[0].editorial);
	printf("- Precio: %.2f$\n",libros[0].precio);
	printf("- ISBN: %s\n",libros[0].ISBN);

	printf("\n-------- Los datos del segundo libro son : --------\n\n"); 				/* Imprimir los datos del segundo libro */

	printf("- Titulo: %s\n",libros[1].titulo);
	printf("- Editorial: %s\n",libros[1].editorial);
	printf("- Precio: %.2f$\n",libros[1].precio);
	printf("- ISBN: %s\n",libros[1].ISBN);

	printf("\n-------- Los datos del tercer libro son : --------\n\n");					/* Imprimir los datos del tercer libro */

	printf("- Titulo: %s\n",libros[2].titulo);
	printf("- Editorial: %s\n",libros[2].editorial);
	printf("- Precio: %.2f$\n",libros[2].precio);
	printf("- ISBN: %s\n",libros[2].ISBN);

	printf("\n--------------------------------\n");

	printf("\n- El coste total de los tres libros es: %.2f$\n",coste_total);	 		/* Coste total */

	return 0;

}
