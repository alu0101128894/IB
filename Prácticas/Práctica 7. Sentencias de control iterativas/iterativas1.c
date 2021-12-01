/*
Ejercicio 1: Se quiere almacenar la siguiente información sobre libros de una librería: 
título, editorial, precio, ISBN. Se pide implementar un programa que, haciendo uso de 
las sentencias de control condicionales, solicite la información al usuario para 3 libros. 
Para los libros cuyo precio sea inferior a 20 euros se les aplicará un descuento de un 15% en el precio, 
para los que su precio supere los 80 euros el descuento será de un 30% y el resto de libros mantendrá su precio.
A continuación el programa debe mostrar, para todos los libros, sus datos actualizados.
*/

//Con condiciones iterativas

#include <stdio.h>

typedef struct{

	char titulo[50];
	char editorial[50]; 
	float p,pd;
	char ISBN[50];
    
}Libreria;

Libreria libros[3]; 

int i;
float ct;

int main(void){
				
	for(i=0; i<3; i++){
	
	printf("\n-------- Introduzca los datos del libro [%d] --------\n",i+1);

	printf("-Introduzca titulo: "); scanf("%[^\n]", libros[i].titulo);			
	getchar();
	printf("-Introduzca editorial: "); scanf("%[^\n]", libros[i].editorial); 	
	printf("-Introduzca el precio: ");	scanf("%f", &libros[i].p);	
	printf("-Introduzca el ISBN: "); scanf("%s", libros[i].ISBN);				
	getchar();	
		
	}			
	
	for(i=0; i<3;i++){
	
		if(libros[i].p < 20){																
			libros[i].pd = libros[i].p - (libros[i].p * 0.15);
		}
		if(libros[i].p > 80){
			libros[i].pd = libros[i].p - (libros[i].p * 0.30);
		}
	}

	ct = (libros[0].pd + libros[1].pd + libros[2].pd);
	
	for(i=0; i<3;i++){
		if(libros[i].p >= 20 && libros[i].p <= 80){
			ct = libros[i].p + ct;
		}
	}
	
	for(i=0; i<3;i++){

	printf("\n-------- Los datos del libro [%d] --------\n\n", i+1);   	
				
	printf("- Titulo: %s\n",libros[i].titulo);
	printf("- Editorial: %s\n",libros[i].editorial);
	
		if(libros[i].p < 20 || libros[i].p >80){
			printf("- Precio actualizado: %.2f$\n",libros[i].pd);		
		}
		else{
			printf("- Precio: %.2f$\n",libros[i].p);
		}
	
		printf("- ISBN: %s\n",libros[i].ISBN);
	}
	
	printf("\n- Los costes totales de los tres clientes son: %.2f$",ct);

	
	return 0;

}
