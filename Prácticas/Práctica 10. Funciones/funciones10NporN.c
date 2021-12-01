#include<stdio.h>

#define N 50
#define M 50

void introducirmatriz();
void mostrarmatriz();
void sumamatriz();
int diagonalsecundaria();		//Prototipos
void multiplicacion();
int opciones();

int suma[N][M], multipl[N][M];

//Introducir elementos matrices (N * M)           

void introducirmatriz (int a, int b, int matriz[a][b]){
	
	int i,j;
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
    		printf("- Introduzca el elemento %d,%d: ",i+1,j+1);
    		scanf("\n%d", &matriz[i][j]);
		}
	}
}

//Mostrar matrices

void mostrarmatriz (int a, int b, int matriz[a][b]){
	
	int i,j;
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
    		printf("\t%d", matriz[i][j]);
    	}
    printf("\n");
	}
}

//Suma de matrices

void sumamatriz (int a, int b, int matriz[a][b], int c, int d, int matriz2[c][d]){
	
	int i,j;
	
	for(i=0; i<a; i++){
    	for(j=0; j<b; j++){
	    	suma[i][j] = matriz[i][j] + matriz2[i][j];
		}
	}
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
    		printf("\t%d", suma[i][j]);
    	}
	printf("\n");
	}
}

//Diagonal Secundaria

int diagonalsecundaria (int a, int b, int matriz[a][b]){
	
	int i,j,mediasecundaria;

	for(i=0; i<a; i++){
		for(j=0; j<a; j++){
			if(i + j == a - 1){
				mediasecundaria += matriz[i][j];
			}
		}
	}
	mediasecundaria = mediasecundaria / a;
	return mediasecundaria;
}

//Multiplicacion

void multiplicacion (int a, int b, int matriz[a][b], int c, int d, int matriz2[c][d], int multipl[a][d]){
	
	int i,j,k;
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			multipl[i][j]=0;
	    	for(k=0; k<b; k++){
	    		multipl[i][j]+= matriz[i][k] * matriz2[k][j];
	      	}
		}
	}
}
  
int opciones(){
	
	int opcion, opcion1, opcion2;
	int x,y,z,t;
 	
	printf("\n-- INTRODUZCA LOS DATOS DE LA PRIMERA MATRIZ --\n");
	printf("\nIntroduzca el numero de filas de la primera matriz: ");
	scanf("%d", &x);
	printf("Introduzca el numero de columnas de la primera matriz: ");
	scanf("%d", &y);
	printf("\n");

	int matriz[x][y];
		if( (x == y) && (x < N) && (y < M) ){ 		//El numero de orden son menores a lo introducido se acepta. Y se concluye funciones.
			introducirmatriz(x,y,matriz);
		}
		else{
			printf("-> No son cuadradas. Repita de nuevo el programa!\n");
			return 0;														//Si no son cuadradas, se cierra el programa
		}
	
	printf("\n-- INTRODUZCA LOS DATOS DE LA SEGUNDA MATRIZ --\n");
	printf("\nIntroduzca el numero de filas de la segunda matriz: ");
	scanf("%d", &z);
	printf("Introduzca el numero de columnas de la segunda matriz: ");
	scanf("%d", &t);
	printf("\n");

	int matriz2[z][t];
		if( (z == t) && (z < N ) && (t < M) ){	 //El numero de orden son menores a lo introducido se acepta. Y se concluye funciones.
			introducirmatriz(z,t,matriz2);
  		}
  		else{
  			printf("-> No son cuadradas. Repita de nuevo el programa!\n");
  			return 0; 																//Si no son cuadradas, se cierra el programa
	 }
 	
	do{
		printf("\n");
    	printf("1: Ver el valor de una matriz.\n");
    	printf("2: Calcular la suma de las dos matrices.\n");
    	printf("3: Calcular la media de la diagonal secundaria de una de las matrices.\n");	
    	printf("4: Calcular el producto de las matrices.\n");
    	printf("5: Salir.\n");
    
    	printf("\n- Elijo la opcion: ");
    	scanf("%d", &opcion);
   
   		switch(opcion){
   			case 1: 
   				printf("\nElija la matriz 1 o 2: ");
    			scanf("%d", &opcion1);
   				printf("\n");
    			if (opcion1 == 1){   			// Hay dos opciones, el 1 es la primera matriz y el "2" (el otro) que es la siguiente matriz
        		mostrarmatriz(x,y,matriz);
	    		}
    			else {
        			mostrarmatriz(z,t,matriz2);
    			}
    			break;
    		case 2: 
    			printf("\n");
    			if((x == z) && (y == t)){  		//Para que sean del mismo orden (ejemplo: 3x3 se puede sumar)
				sumamatriz (x,y,matriz,z,t,matriz2);
    			}
    			else{
    			printf("\nLa matrices no se pueden sumar porque no son del mismo orden. La primera es de orden (%dx%d) y la segunda (%dx%d)\n",x,y,z,t);
    			}
    			break;
    		case 3: 
    			printf("\nElija matriz 1 o 2: ");
    			scanf("%d", &opcion2); 
    
    			if (opcion2 == 1){ 
    				if(x == y){
					printf("\nLa media de la diagonal secundaria de la primera matriz es: %d\n",diagonalsecundaria (x, y, matriz));   //Primera matriz
					}
				}
    			if (opcion2 == 2){
    				if(z == t){
						printf("\nLa media de la diagonal secundaria de la segunda matriz es: %d\n",diagonalsecundaria (z, t, matriz2));	//Segunda matriz
					}
				}
				break;
			case 4:
				printf("\n");
    			if (x == z){
					multiplicacion(x,y,matriz,z,y,matriz2,multipl);
					
					mostrarmatriz(x,t,multipl);
    			}
    			else{
    				printf("\nLa matrices no se pueden mutiplicar porque no son del mismo orden. La primera es de orden (%dx%d) y la segunda (%dx%d)\n",x,y,z,t);
				}
    			break; 
    		case 5: 
    			break;
    		
    		default: 
    			printf("\nOpcion no valida. Introduzca un numero del (1-5)\n");
		   }	 
	}  while (opcion != 5);
}

int main (void){
	
	opciones();
  
}
  
