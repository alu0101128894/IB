#include<stdio.h>
#include<stdlib.h>

int opcion;

FILE *fich;

void crear_fichero(void){
	
	fich = fopen("nombre.txt","a+");
	
	if(fich == NULL){
		printf("Error");
	}
	else{
		printf("Fichero abierto");
	}
}

void almacenar_fichero(void){
	
	int numero;
	
	if(fich != NULL){
		printf("\nIntroduzca un numero a almacenar: ");
		scanf("%d",&numero);
		
		fprintf(fich,"%d\n", numero);
					
	}
	else{
		printf("Debe abrir el fichero primero");
	}
}

void visualizar_fichero(void){
	
	int numero;
	
	fseek(fich, 0 , SEEK_SET);
	while (!feof(fich)){
		
		fscanf(fich,"%d\n",&numero);
		printf("\nEl numero leido es: %d", numero);
	}
}


void menu(void){
	int opcion;
	
	printf("\n1. Abrir fichero");
	printf("\n2. Almacenar un numero a fichero");
	printf("\n3. Visualizar fichero");
	printf("\n0. Salir");
	printf("\nIntroduzca opcion: ");
	scanf("%d",&opcion);
}


int main(void){
	
	do{
		menu();
		switch(opcion){
			
			case 1: {crear_fichero(); break;}
			case 2: {almacenar_fichero(); break;}
			case 3: {visualizar_fichero(); break;}
			default: printf("\nError de opcion");			
		}	
	}while (opcion !=0);
	printf("\nFichero cerrado");
	fclose(fich);
		
	return 0;
}

