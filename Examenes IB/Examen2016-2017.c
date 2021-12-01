//EXAM FORTE 2016-2017

/*  Crea las estructuras de datos para almacenar información de 5 alumnos en cuanto a su nombre, apellido,
dirección, localidad. También debemos almacenar datos acerca de 5 asignaturas que cursan cada uno de los
alumnos, el nombre de estas y la calificación obtenida por cada persona. Además, queremos almacenar la media del
alumno en todas las materias, y la media de las calificaciones sacadas por todos los alumnos */

#include<stdio.h>

typedef struct{
	char nombre[30];
	char apellidos[30];
	char direccion[50];
	char localidad[30];

}Tinfo; 
Tinfo alumno;

typedef struct{
	float media_alumno;
	float media_asignatura;
	int calificacion;
	Tinfo alumno[5];

}Tasignaturas;
Tasignaturas asignaturas[5];


/* 1. Definir los tipos de datos necesarios para poder almacenar la info de los 5 articulos de un supermercado.
Necesitamos almacenar de cada uno la descripcion, la cantidad, el precio,  y la info del proveedor de que se le compra.
esa info sera en codigo, su nombre y su direccion. */

#include<stdio.h>

typedef struct{
	int codigo;
	char nombre[30];
	char direccion[50];
}Tinfo; //informacion proveedor

typedef struct{
	char descripcion[50];
	int cantidad;
	float precio;
	Tinfo info;

}Tdatos;

Tdatos datos [5]; //5 articulos


/* 2� Escribir una funcion que se le pase un vector N de numeros enteros y devuelva el valor mayor, el menor
y la suma de los elementos del vector. */

#include<stdio.h>

void opciones(int v[], int size){

	int i;
	int mayor=0;
	int menor=999;
	int suma=0;

	for(i=0;i < size;i++){
		if(v[i] > mayor){
			mayor = v[i];
		}
		if(v[i] < menor){
			menor = v[i];
		}

		suma += v[i];
	}
	printf("El mayor es: %d\n", mayor);
	printf("El menor es: %d\n", menor);
	printf("La suma de los elementos del vector es: %d\n", suma);
}

int main(void){

	int v[8] = {13,2,3,4,5,6,7,8};
	opciones (v, 8);

	return 0;
}

/* 3�. Implementar una funci�n que se le pase como entrada una cadena de caracteres y que devuelva el n�mero de palabras
que contiene. Cada palabra estar� separada con uno o m�s espacios. Si la cadena est� vac�a devolver� (evidentemente) un 0. */

#include<stdio.h>
#define N 10

int main(void){

int i;

	int numero_palabras(char cadena[N]){

		int numeropalabras=0;

		for(i=0;i<N;i++){
			if(cadena[i] == " "){
				if(cadena[i-1] != " "){ //El espacio cuenta desde la izquierda
					numeropalabras++;
				}
			}
		}
		return numeropalabras;
	}

}


/* 4�. Implementar una funci�n que se le pase como entrada dos cadenas de caracteres. Una contendr� un nombre de una persona que deber�
buscarse en la otra cadena. La funci�n devolver� el n�mero de repeticiones de la persona dentro de la cadena.*/


#include<stdio.h>

int main(void){
	int i,j;
	int numero_repeticiones(char cadena1[N], char cadena2[M]){

		int contador;
		int contador2;
		int numeropalabras=0;

		for(i=0;i<M;i++){
			if(cadena2[i] == cadena1[0]){ // i es

				contador=i+1;
				contador2=1;

				for(j=1;j<N;j++){
					if(cadena1[j] == cadena2[contador]){

						contador++;
						contador2++;
					}
				}
				if(contador2 == N){
					numeropalabras++;
				}
			}
		}

		return numeropalabras;
	}
}

/* 5�. Dado un fichero de n�meros enteros, uno por l�nea, llamado "datos.txt". Escribir un programa que lea el contenido del fichero
y genere dos ficheros de salida nuevos, y uno contendr� los n�meros pares y el otro impares. */

#include<stdio.h>

	int numero;

	FILE *input;
	FILE *output;
	FILE *output2;

	input = fopen("datos.txt", "r"); //Lo abres "r" lectura "w" escritura (puedes escribir)
	output = fopen("pares.txt", "w");
	output2 = fopen("impares.txt", "w");

	if(input != NULL){
		printf("Error apertura");
	}
	else{

		while(!feof(input)){ //y no sea el final del fichero, leo el fichero con los numeros (fscanf)

		fscanf(input, "%d", &numero); //Se lee el fichero
			if(numero%2==0){
				fprintf(output, "%d\n",numero ); //imprimir
			}
			else{
				fprintf(output2, "%d\n",numero );
			}
		}
	}

		fclose(input);
		fclose(output);
		fclose(output2);
	}
}
