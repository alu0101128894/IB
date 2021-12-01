/* Escribir un programa que dado un fichero "datos.txt" de numeros enteros
(un numero por lineas), lea el formato y visualice cuantos numeros primos contiene 
el dicho fichero */

#include<stdio.h>

int main(void){
	
	FILE *f; //Puntero archivo
	
	int entero;
	int numero, i, cont = 0;
	int primo = 0; // cantidad de numeros primos 
	
	f = fopen("prueba.txt","w");
	
	if (f == NULL){
		printf("No se puede crear el archivo\n");	
	}
	else{
		printf("Se creo el archivo\n");
	}
	
	for (i=0; i<5; i++){
		printf("El numero %d leido es: ",i+1);
		scanf("%d",&entero);
	}
	
	fprintf(f,"%d ",entero);
		
	fclose(f);
	
	f = fopen("prueba.txt","r"); 
	
	if (f == NULL){
		printf("Error");
		return 0;
	}

	fseek(f, 0 , SEEK_SET); //lee al principio del fichero (datos.txt")
	while (!feof(f)){
		for(i=0; i <5; i++){
			fscanf(f,"%d\n",&numero);
			printf("\nEl numero leido es: %d\n", numero);
		}
		
		cont = 0;
		for (i=1; i <= numero; i++){ //Vaya aumentando 1 en 1  // 4/1 4/2 4/3 4/4 i = numero, i <= numero
	
			if (numero % i == 0){
			
			cont++; // cont++
			}
		}
		if (cont > 2){		
		//vacio, no hace falta mostrar el "NO es un numero primo"
		}
		else{
			primo++; //primo++
		}
	}
	
	printf("\t\nHay %d numeros primos en total", primo);
	
	fclose(f);
}

	
	

	

	
