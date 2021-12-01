#include <stdio.h>

typedef struct {

	char nombre[50];
	char apellidos[50];
	float p1,p2,p3,p4;
	float examen;
	float practica_media;
	float nota_final;

}Informacion;

Informacion alumno[2];

int main (void){

	int i;

	for( i=0; i<2;i++){

		printf("\n-------- Introduzca el alumno [%d] --------\n",i+1);
		printf("-Introduzca su nombre: ");	scanf("%[^\n]", alumno[i].nombre);
		getchar();
		printf("-Introduzca su apellido: "); scanf("%[^\n]", alumno[i].apellidos);
		printf("-Introduzca la nota de la primera practica: "); scanf("%f", &alumno[i].p1);
		printf("-Introduzca la nota de la segunda practica: "); scanf("%f", &alumno[i].p2);
		printf("-Introduzca la nota de la tercera practica: "); scanf("%f", &alumno[i].p3);
		printf("-Introduzca la nota de la cuarta practica: "); scanf("%f", &alumno[i].p4);
		printf("-Introduzca su nota de examen: "); scanf("%f", &alumno[i].examen);
		getchar();


		if(alumno[i].p1 >=5 && alumno[i].p2 >=5 && alumno[i].p3 >=5 && alumno[i].p4 >=5){
			alumno[i].practica_media = (alumno[i].p1 + alumno[i].p2 + alumno[i].p3 + alumno[i].p4) / 4;

			printf("\n- El alumno [%d] ha aprobado las practicas y su nota media es: %.2f\n",i+1, alumno[i].practica_media);

			if(alumno[i].practica_media >=5 && alumno[i].examen >=5){

				alumno[i].nota_final = (alumno[i].practica_media * 0.3) + (alumno[i].examen * 0.7);
				printf("\n-------- El alumno [%d] ha aprobado y sus datos son: --------\n",i+1);

				printf("- Nombre: %s\n",alumno[i].nombre);
				printf("- Apellidos: %s\n",alumno[i].apellidos);
				printf("- Nota de la primera practica: %.2f\n", alumno[i].p1);
				printf("- Nota de la segunda practica: %.2f\n", alumno[i].p2);
				printf("- Nota de la tercera practica: %.2f\n", alumno[i].p3);
				printf("- Nota de la cuarta practica: %.2f\n", alumno[i].p4);
				printf("- Nota del examen: %.2f\n", alumno[i].examen);
				printf("- NOTA FINAL: %.2f\n", alumno[i].nota_final);
			}
			else{
				printf("- El alumno [%d] no ha superado el examen.\n", i+1);
			}
		}

		else{
			printf("\n-------- El alumno [%d] tiene trabajos practicos no superados --------\n",i+1);						//Practica no superada
			printf("- Nombre: %s\n",alumno[i].nombre);
			printf("- Apellidos: %s\n",alumno[i].apellidos);
			printf("- Nota de la primera practica: %.2f\n", alumno[i].p1);
			printf("- Nota de la segunda practica: %.2f\n", alumno[i].p2);
			printf("- Nota de la tercera practica: %.2f\n", alumno[i].p3);
			printf("- Nota de la cuarta practica: %.2f\n", alumno[i].p4);
		}
	}
}
