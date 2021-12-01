/* Ejercicio 2: Se quiere almacenar informaci�n sobre los alumnos 
matriculados en una asignatura. Para cada alumno se almacena la siguiente
informaci�n: nombre, apellidos, notas de 4 trabajos pr�cticos, nota examen.
Sabiendo que la nota del examen representa un 70% en la nota final
y que la nota media de los trabajos pr�cticos representa un 30% en la nota final,
se pide implementar un programa en C que permita almacenar los datos para 2 alumnos,
a continuaci�n los muestre en pantalla junto con la nota final de cada alumno.
*/

#include <stdio.h>

typedef struct {
	char nombre[40];
	char apellidos[40 ];
	float p1,p2,p3,p4;
	float examen;

}Informacion;

Informacion alumno[2];

int main (void){

	float practica_media_1,practica_media_2,notafinal_1, notafinal_2;

	printf("\n-------- Introduzca los datos del primer alumno --------\n\n");		  			 //Primer alumno
	printf("-Introduzca su nombre: ");	scanf("%[^\n]", alumno[0].nombre);
	getchar();
	printf("-Introduzca su apellido: "); scanf("%[^\n]", alumno[0].apellidos);
	printf("-Introduzca la nota de la primera practica: "); scanf("%f", &alumno[0].p1);
	printf("-Introduzca la nota de la segunda practica: "); scanf("%f", &alumno[0].p2);
	printf("-Introduzca la nota de la tercera practica: "); scanf("%f", &alumno[0].p3);
	printf("-Introduzca la nota de la cuarta practica: "); scanf("%f", &alumno[0].p4);
	printf("-Introduzca su nota de examen: "); scanf("%f", &alumno[0].examen);
	getchar();

	printf("\n-------- Introduzca los datos del segundo alumno --------\n\n");					//Segundo alumno
	printf("-Introduzca su nombre: ");	scanf("%[^\n]", alumno[1].nombre);
	getchar();
	printf("-Introduzca su apellido: "); scanf("%[^\n]", alumno[1].apellidos);
	printf("-Introduzca la nota de la primera practica: "); scanf("%f", &alumno[1].p1);
	printf("-Introduzca la nota de la segunda practica: "); scanf("%f", &alumno[1].p2);
	printf("-Introduzca la nota de la tercera practica: "); scanf("%f", &alumno[1].p3);
	printf("-Introduzca la nota de la cuarta practica: "); scanf("%f", &alumno[1].p4);
	printf("-Introduzca su nota de examen: "); scanf("%f", &alumno[1].examen);
	getchar();

	practica_media_1 = (alumno[0].p1 + alumno[0].p2 + alumno[0].p3 + alumno[0].p4) / 4;

	practica_media_2= (alumno[1].p1 + alumno[1].p2 + alumno[1].p3 + alumno[1].p4) / 4;			//Operaciones

	notafinal_1 = (practica_media_1 * 0.3) + (alumno[0].examen * 0.7);

	notafinal_2 = (practica_media_2 * 0.3) + (alumno[1].examen * 0.7);

	printf("\n-------- Los datos del primer alumno son : --------\n\n");					//Imprimir Primer Alumno

	printf("- Nombre: %s\n",alumno[0].nombre);
	printf("- Apellidos: %s\n",alumno[0].apellidos);
	printf("- Nota de la primera practica: %.2f\n", alumno[0].p1);
	printf("- Nota de la segunda practica: %.2f\n", alumno[0].p2);
	printf("- Nota de la tercera practica: %.2f\n", alumno[0].p3);
	printf("- Nota de la cuarta practica: %.2f\n", alumno[0].p4);
	printf("- Nota del examen: %.2f\n", alumno[0].examen);
	printf("- NOTA FINAL: %.2f\n", notafinal_1);

	printf("\n-------- Los datos del segundo alumno son : --------\n\n");					//Imprimir Segundo Alumno

	printf("- Nombre: %s\n",alumno[1].nombre);
	printf("- Apellidos: %s\n",alumno[1].apellidos);
	printf("- Nota de la primera practica: %.2f\n", alumno[1].p1);
	printf("- Nota de la segunda practica: %.2f\n", alumno[1].p2);
	printf("- Nota de la tercera practica: %.2f\n", alumno[1].p3);
	printf("- Nota de la cuarta practica: %.2f\n", alumno[1].p4);
	printf("- Nota del examen: %.2f\n", alumno[1].examen);
	printf("- NOTA FINAL: %.2f\n", notafinal_2);

	return 0;
}
