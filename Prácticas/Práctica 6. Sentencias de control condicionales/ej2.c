/*
Ejercicio 2: Se quiere almacenar informaci�n sobre los alumnos matriculados en una asignatura.
Para cada alumno se almacena la siguiente informaci�n: nombre, apellidos, notas de 4 trabajos pr�cticos,
nota examen. Sabiendo que la nota del examen representa un 70% en la nota final y que la nota media de los
trabajos pr�cticos representa un 30% en la nota final, se pide implementar un programa en C que permita almacenar
los datos para 2 alumnos. A continuaci�n, se deben realizar las siguientes consideraciones:

- S�lo para aquellos alumnos que hayan superado los 4 trabajos pr�cticos con nota igual o superior a 5 se les podr� calcular.
	la media aritm�tica de las notas de sus trabajos; en otro caso, debe mostrarse un mensaje que indique que el alumno tiene
	trabajos pr�cticos no superados junto con los datos del alumno y sus notas pr�cticas
- Para aquellos alumnos con los trabajos pr�cticos superados, s�lo se podr� calcular la nota final del alumno si ha superado
	adem�s la nota del examen con al menos un 5. En este caso se debe mostrar en pantalla los datos del alumno junto con la nota final.
	En otro caso, se debe mostrar en pantalla un mensaje indicando que el alumno no ha superado el examen.
*/

#include <stdio.h>

typedef struct {

	char nombre[50];
	char apellidos[50];
	float p1,p2,p3,p4;
	float examen;

}Informacion;

Informacion alumno[2];

int main (void){

	float practica_media_1 = 0, practica_media_2 = 0, notafinal_1, notafinal_2;

	printf("\n-------- Introduzca los datos del primer libro --------\n");
	printf("-Introduzca su nombre: ");	scanf("%[^\n]", alumno[0].nombre);
	getchar();
	printf("-Introduzca su apellido: "); scanf("%[^\n]", alumno[0].apellidos);
	printf("-Introduzca la nota de la primera practica: "); scanf("%f", &alumno[0].p1);
	printf("-Introduzca la nota de la segunda practica: "); scanf("%f", &alumno[0].p2);
	printf("-Introduzca la nota de la tercera practica: "); scanf("%f", &alumno[0].p3);
	printf("-Introduzca la nota de la cuarta practica: "); scanf("%f", &alumno[0].p4);
	printf("-Introduzca su nota de examen: "); scanf("%f", &alumno[0].examen);
	getchar();

	printf("\n-------- Introduzca los datos del segundo libro --------\n");
	printf("-Introduzca su nombre: ");	scanf("%[^\n]", alumno[1].nombre);
	getchar();
	printf("-Introduzca su apellido: "); scanf("%[^\n]", alumno[1].apellidos);
	printf("-Introduzca la nota de la primera practica: "); scanf("%f", &alumno[1].p1);
	printf("-Introduzca la nota de la segunda practica: "); scanf("%f", &alumno[1].p2);
	printf("-Introduzca la nota de la tercera practica: "); scanf("%f", &alumno[1].p3);
	printf("-Introduzca la nota de la cuarta practica: "); scanf("%f", &alumno[1].p4);
	printf("-Introduzca su nota de examen: "); scanf("%f", &alumno[1].examen);
	getchar();


	if(alumno[0].p1 >=5 && alumno[0].p2 >=5 && alumno[0].p3 >=5 && alumno[0].p4 >=5){ 						//Primer alumno

		practica_media_1 = (alumno[0].p1 + alumno[0].p2 + alumno[0].p3 + alumno[0].p4) / 4;
	}
	else{
		printf("\n-------- El primer alumno tiene trabajos practicos no superados --------\n");						//Practica no superada
		printf("- Nombre: %s\n",alumno[0].nombre);
		printf("- Apellidos: %s\n",alumno[0].apellidos);
		printf("- Nota de la primera practica: %.2f\n", alumno[0].p1);
		printf("- Nota de la segunda practica: %.2f\n", alumno[0].p2);
		printf("- Nota de la tercera practica: %.2f\n", alumno[0].p3);
		printf("- Nota de la cuarta practica: %.2f\n", alumno[0].p4);
	}

	if(practica_media_1 >=5 && alumno[0].examen >=5){

		notafinal_1 = (practica_media_1 * 0.3) + (alumno[0].examen * 0.7);

		printf("\n-------- El primer alumno ha aprobado y sus datos son: --------\n");								//Examen aprobado
		printf("- Nombre: %s\n",alumno[0].nombre);
		printf("- Apellidos: %s\n",alumno[0].apellidos);
		printf("- Nota de la primera practica: %.2f\n", alumno[0].p1);
		printf("- Nota de la segunda practica: %.2f\n", alumno[0].p2);
		printf("- Nota de la tercera practica: %.2f\n", alumno[0].p3);
		printf("- Nota de la cuarta practica: %.2f\n", alumno[0].p4);
		printf("- Nota del examen: %.2f\n", alumno[0].examen);
		printf("- NOTA FINAL: %.2f\n", notafinal_1);
	}
	else{
		printf("\n--> EL PRIMER alumno no ha superado el examen.\n");											//Examen suspendido
	}

	if(alumno[1].p1 >=5 && alumno[1].p2 >=5 && alumno[1].p3 >=5 && alumno[1].p4 >=5){  							//Segundo alumno

		practica_media_2= (alumno[1].p1 + alumno[1].p2 + alumno[1].p3 + alumno[1].p4) / 4;
	}

	else{
		printf("\n-------- El segundo alumno tiene trabajos practicos no superados --------\n");				//Practica no superada
		printf("- Nombre: %s\n",alumno[1].nombre);
		printf("- Apellidos: %s\n",alumno[1].apellidos);
		printf("- Nota de la primera practica: %.2f\n", alumno[1].p1);
		printf("- Nota de la segunda practica: %.2f\n", alumno[1].p2);
		printf("- Nota de la tercera practica: %.2f\n", alumno[1].p3);
		printf("- Nota de la cuarta practica: %.2f\n", alumno[1].p4);
	}

	if(practica_media_2 >=5 && alumno[1].examen >=5){

		notafinal_2 = (practica_media_2 * 0.3) + (alumno[1].examen * 0.7);

		printf("\n-------- El segundo alumno ha aprobado y sus datos son: --------\n");							//Examen aprobado
		printf("- Nombre: %s\n",alumno[1].nombre);
		printf("- Apellidos: %s\n",alumno[1].apellidos);
		printf("- Nota de la primera practica: %.2f\n", alumno[1].p1);
		printf("- Nota de la segunda practica: %.2f\n", alumno[1].p2);
		printf("- Nota de la tercera practica: %.2f\n", alumno[1].p3);
		printf("- Nota de la cuarta practica: %.2f\n", alumno[1].p4);
		printf("- Nota del examen: %.2f\n", alumno[1].examen);
		printf("- NOTA FINAL: %.2f\n", notafinal_2);
	}
	else {
		printf("\n--> EL SEGUNDO alumno no ha superado el examen.\n");										//Examen suspendido
	}

	return 0;
}
