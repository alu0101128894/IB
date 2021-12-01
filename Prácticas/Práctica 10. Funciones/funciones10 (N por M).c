#include<stdio.h>
#define N 50
#define M 50

int suma[N][M], multipl[N][M];

//Introducir elementos matrices (N * N)           

int introducirmatriz (int a, int b, int matriz[a][b]){
	
	int i,j;
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
    		printf("- Introduzca el elemento %d,%d: ",i+1,j+1);
    		scanf("\n%d", &matriz[i][j]);
		}
	}
}

//Mostrar matrices

int mostrarmatriz (int a, int b, int matriz[a][b]){
	
	int i,j;
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
    		printf("\t%d", matriz[i][j]);
    	}
    printf("\n");
	}
}

//Suma de matrices

int sumamatriz (int a, int b, int matriz[a][b], int c, int d, int matriz2[c][d]){
	
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

int multiplicacion (int a, int b, int matriz[a][b], int c, int d, int matriz2[c][d], int multipl[a][d]){
	
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
  
//Menu

int main (void){
	
	int opcion, opcion1, opcion2;
	int x,y;
 	
	printf("\n-- INTRODUZCA LOS DATOS DE LA PRIMERA MATRIZ --\n");
	printf("\nIntroduzca el numero de filas de la primera matriz: ");
	scanf("%d", &x);
	printf("Introduzca el numero de columnas de la primera matriz: ");
	scanf("%d", &y);
	printf("\n");

	int matriz[x][y];
		if( (x < N) && (y < M) ){ //El numero de orden son menores a lo introducido se acepta. Y se concluye funciones.
			introducirmatriz(x,y,matriz);
	}
  
	int z,t;
	
	printf("\n-- INTRODUZCA LOS DATOS DE LA SEGUNDA MATRIZ --\n");
	printf("\nIntroduzca el numero de filas de la segunda matriz: ");
	scanf("%d", &z);
	printf("Introduzca el numero de columnas de la segunda matriz: ");
	scanf("%d", &t);
	printf("\n");


	int matriz2[z][t];
		if( (z < N ) && (t < M) ){	 //El numero de orden son menores a lo introducido se acepta. Y se concluye funciones.
			introducirmatriz(z,t,matriz2);
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
   
      	if(opcion == 1){       // ---------> MOSTRAR MATRIZ
			printf("\nElija la matriz 1 o 2: ");
    		scanf("%d", &opcion1);
    		printf("\n");
    		if (opcion1 == 1){   // Hay dos opciones, el 1 es la primera matriz y el "2" (el otro) que es la siguiente matriz
        		mostrarmatriz(x,y,matriz);
	    	}
    		else {
        		mostrarmatriz(z,t,matriz2);
    		}
		} //Cerrand If 1
    
    	if(opcion == 2){		// ---------> SUMA MATRIZ
    		printf("\n");
    		if((x == z) && (y == t)){  //Para que sean del mismo orden (ejemplo: 3x3 se puede sumar)
				sumamatriz (x,y,matriz,z,t,matriz2);
    		}
    		else{
    			printf("\nLa matrices no se pueden sumar porque no son del mismo orden. La primera es de orden %dx%d y la segunda %dx%d\n",x,y,z,t);
    		}
		} //Cerrando If 2
    
    	if(opcion == 3){		// ---------> MEDIA DIAGONAL SECUNDARIA					
			printf("\nElija matriz 1 o 2: ");
    		scanf("%d", &opcion2); 
    	
    		
    			if (opcion2 == 1){ 
    				if(x == y){
					printf("\nLa media de la diagonal secundaria de la primera matriz es: %d\n",diagonalsecundaria (x, y, matriz));   //Primera matriz
					}
				    else if(x != y){
				    	printf("\n--> No es una matriz cuadrada\n");
					}
				}
		
    			if (opcion2 == 2){
    				if(z == t){
						printf("\nLa media de la diagonal secundaria de la segunda matriz es: %d\n",diagonalsecundaria (z, t, matriz2));	//Segunda matriz
					}
					else if(x != y){
						printf("\n--> No es una matriz cuadrada\n");
					}
				}
		} //Cerrando If 3
		
    	if(opcion == 4){      // ---------> MULTIPLICACION
    		printf("\n");
    		if (x == z){
				multiplicacion(x,y,matriz,z,y,matriz2,multipl);
    		}
    		
    		mostrarmatriz(x,t,multipl);
    		
		} //Cerrando If 4

  	}//Cerrando Do
  	
	while (opcion != 5);
	
}//Cerrando Main
  
 /*		 x 	y
  		 z 	t
  
	1 2 1 
	2 3 4 -> media secundaria = 3
	5 6 8 -> media principal = 4
		
	
	4 4 5 
	6 7 8 -> media secundaria = 7
	9 8 7 -> media principal = 6
	
	
	*/
