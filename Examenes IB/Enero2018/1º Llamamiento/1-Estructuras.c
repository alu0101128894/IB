/* Definir los tipos de datos necesarios para poder almacenar la informacion de una biblioteca,
se neceista los siguientes: titulo del libro, autor, editorial, material y stock.
Sabiendo que podemos tener diferentes libros con la misma materia y diferentes libros con la misma editorial */

#include<stdio.h>

typedef struct{

	char titulo_libro[50];
	char autor[50];
	char editorial[50];
	char material[50];
	char stock[50];

}Tlibro;
Tlibro biblioteca;
