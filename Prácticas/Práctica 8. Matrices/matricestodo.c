/*

Escribir un programa que pida al usuario dos matrices de tamaño 3x3. A
continuación debe mostrarlas en pantalla y calcular:
a) Mostrar matrices
a) La suma de ambas matrices
b) La suma de cada una de las matrices (A y B)
c) Valor minimo de A, valor maximo de A, valor minimo de B, valor minimo de B
d) Multiplicacion
e) Diagonal Principal de a y b
f) Diagonal secundaria de a y b


*/

#include <stdio.h>

int main(void){

	int i,j,k;
	int a[3][3];
	int b[3][3]; 
	int c[3][3];
	int suma;
	suma=0;
	int minimo_a=999;
	int maximo_a=999;
	int minimo_b=999;
	int maximo_b=999;
	int resultado[3][3];
	int diagonal_principal_a, diagonal_principal_b;
	diagonal_principal_a=0;
	diagonal_principal_b=0;
	int n=3;
	int diagonal_secundaria_a, diagonal_secundaria_b;
	diagonal_secundaria_a=0;
	diagonal_secundaria_b=0;

 //PEDIR LOS DATOS DE LAS DOS MATRICES//

	printf("\n--- INTRODUZCA LOS DATOS DE LA PRIMERA MATRIZ ---\n");

  	for(i=0;i<3;i++){
  		
    	printf("\nIntroduzca los valores de la fila %d: \n\n", i+1);
    	
    	for(j=0;j<3;j++){
			printf("- Introduzca el elemento %d,%d: ", i+1, j+1);	scanf("%d", &a[i][j]);
   		}
  	}

	printf("\n--- INTRODUZCA LOS DATOS DE LA SEGUNDA MATRIZ ---\n");

	for(i=0;i<3;i++){	

      	printf("\nIntroduzca los valores de la fila %d: \n\n", i+1);

      	for(j=0;j<3;j++){
      		
        	printf("- Introduzca el elemento %d,%d: ", i+1, j+1);	scanf("%d", &b[i][j]);
		}
	}

   	//MOSTRAR POR PANTALLA LAS DOS MATRICES//

	printf("\n\n- Las matrices introducidas son: \n\n");

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
        	printf("\t%d ", a[i][j]); // --> Primera matriz (A) en Pantalla
      	}
	printf("\n");
	}

	printf("\n\n");             // Espacio para dividir las dos matrices en pantalla

	for(i=0;i<3;i++){
      	for(j=0;j<3;j++){
        	printf("\t%d ", b[i][j]); // --> Segunda matriz (B) en Pantalla
      	}
      	printf("\n");
    	}

 	//HACER LA SUMA Y MOSTRARLA POR PANTALLA//

	printf("\n\n- La suma de las dos matrices son: \n \n");

	for(i=0;i<3;i++){
      	for(j=0;j<3;j++){
        	c[i][j] = a[i][j] + b[i][j];
      	}
   	}

   	for(i=0;i<3;i++){
      	for(j=0;j<3;j++){
        	printf("\t%d ", c[i][j]);
   		}
	   	printf("\n");             						 //Cada vez que repita los numeros dara un salto de linea:	 
										              	  /* (a,b,c)
										                   (a,b,c) */
    }	

	//Suma de las filas de la matriz de A

	printf("\n- Las sumas de cada fila de la primera matriz (A) son:\n\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
           	suma = suma + a[i][j];
		}
		printf("\t%d", suma);
   		suma=0;
		printf("\n");  											//Cada vez que repita los numeros dara un salto de linea:	          
										      					  /* (a,b,c)
										          					 (a,b,c) */
	}
	
	//Suma de las filas de la matriz de B

	printf("\n- Las sumas de cada fila de la primera matriz (B) son:\n\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
           	suma = suma + b[i][j];
		}
        
		printf("\t%d", suma);
        suma=0;		
		printf("\n"); 								 		//Cada vez que repita los numeros dara un salto de linea:	          
										        			/*	(a,b,c)
										         			  	(a,b,c) */
	}
    
	//Suma de las columnas de la primera matriz de A

	printf("\n- Las sumas de cada columna de la primera matriz (A) son:\n\n");
	
	for(j=0;j<3;j++){
        for(i=0;i<3;i++){
			suma = suma + a[i][j];
		}
		
		printf("\t%d", suma);
		suma=0;
		printf("\n"); 	

	}
	
	//Suma de las columnas de la primera matriz de B

	printf("\n- Las sumas de cada columna de la primera matriz (B) son:\n\n");
	
	for(j=0;j<3;j++){
        for(i=0;i<3;i++){
			suma = suma + b[i][j];
		}
		
		printf("\t%d", suma);
		suma=0;
		printf("\n"); 	

	}


    //MULTPLICACION

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			resultado[i][j]=0;
			for(k=0;k<3;k++){
				resultado[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	printf("\n- La multiplicacion de las dos matrices son:\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d", resultado[i][j]);
		}
	printf("\n");
	}
	
	
    //Minimo principal de A
    
    minimo_a = a[0][0];

	for(i=1;i<3;i++){
        if(a[i][i] < minimo_a){
           	minimo_a = a[i][i];
        }
    }

    printf("\n- El elemento minimo de la diagonal principal de A es: %d\n ", minimo_a);

	//Maximo principal de A
	
	maximo_a = a[0][0];

	for(i=1;i<3;i++){
       	if(a[i][i] > maximo_a){
          	maximo_a = a[i][i];
        }
	}
    printf("\n- El elemento maximo de la diagonal principal de A es: %d\n ", maximo_a);

	//Minimo principal de B
	
  	minimo_b = b[0][0];

	for(i=1;i<3;i++){
        if(b[i][i] < minimo_b){
           	minimo_b = b[i][i];
        }
    }

    printf("\n- El elemento minimo de la diagonal principal de B es: %d\n ", minimo_b);

	//Maximo principal de A
	
	maximo_b = b[0][0];

	for(i=1;i<3;i++){
       	if(b[i][i] > maximo_b){
          	maximo_b = b[i][i];
  		  }
	}
    printf("\n- El elemento maximo de la diagonal principal de B es: %d\n ", maximo_b);

	
	//Minimo de la primera fila de A    --> Error falla en este ejericios, hacerlo separado da perfecto.
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			if (i<1){
				if (minimo_a > a[i][j])
					minimo_a = a[i][j];
			}
		}
	}

 	printf("\n- El minimo de la primera fila de A es: %d\n",minimo_a);

	
	//Minimo de la primera fila de B 	--> Error falla en este ejericios, hacerlo separado da perfecto.
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			if (i<1){
				if (minimo_b > b[i][j])
					minimo_b = b[i][j];
			}
		}
	}

 	printf("\n- El minimo de la primera fila de B es: %d\n",minimo_b);
 

	//Diagonal principal de A
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				diagonal_principal_a += a[i][j];
			}
		}	
	}
	printf("\n- La suma de la diagonal principal de A es: %d\n",diagonal_principal_a);
	
	
	//Diagonal secundaria de A
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i+j==n-1){
				diagonal_secundaria_a += a[i][j];
			}
		}	
	}
	printf("\n- La suma de la diagonal secundaria de A es: %d\n",diagonal_secundaria_a);
	
	
	//Dioagonal principal de B
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				 diagonal_principal_b += b[i][j];
			}
		}	
	}
	printf("\n- La suma de la diagonal principal de B es: %d\n", diagonal_principal_b);
	

	//Diagonal secundaria de B
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i+j==n-1){
				diagonal_secundaria_b += b[i][j];
			}
		}	
	}
	printf("\n- La suma de la diagonal secundaria de B es: %d\n",diagonal_secundaria_b);


}

