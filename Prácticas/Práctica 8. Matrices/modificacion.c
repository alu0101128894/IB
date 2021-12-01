/*

Escribir un programa que pida al usuario dos matrices de tama�o 3x3. A
continuaci�n debe mostrarlas en pantalla y calcular:
a) La suma de ambas matrices y mostrarla
b) La suma de cada una de las filas de la primera matriz y mostrarlas en forma
de matriz, y a continuacion lo mismo para la segunda matriz.
c) El valor minimo de la diagonal de la primera matriz mostr�ndolo y, a
continuacion, lo mismo para la segunda matriz.
d) Maximo de la primera fila de A y B

*/

#include <stdio.h>

int main(void){

	int i,j;
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int suma;
	suma=0;
	int minimo_a, minimo_b;
	int maximo_a, maximo_b;

    //Introducir los datos de las dos matrices

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

   	//Mostar las dos matrices

	printf("\n\n- Las matrices introducidas son: \n\n");

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
        	printf("\t%d ", a[i][j]); 						// --> Primera matriz (A) en Pantalla
      	}
	printf("\n");
	}

	printf("\n\n");             									// Espacio para dividir las dos matrices en pantalla

	for(i=0;i<3;i++){
      	for(j=0;j<3;j++){
        	printf("\t%d ", b[i][j]); 						// --> Segunda matriz (B) en Pantalla
      	}
      	printf("\n");
    	}

 	//Suma de las dos matrices y mostrarlo por pantalla

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

	// Suma de las filas de la primera matriz A

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

	// Suma de las filas de la primera matriz B

	printf("\n- Las sumas de cada fila de la primera matriz (B) son:\n\n");

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
    	suma = suma + b[i][j];
		}

	printf("\t%d", suma);
  suma=0;
	printf("\n"); 								 		//Cada vez que repita los numeros dara un salto de linea:
										        				/* (a,b,c)
										         			  	 (a,b,c) */
	}

	//Minimo principal de la diagonal A

	minimo_a = a[0][0];

	for(i=1;i<3;i++){
      if(a[i][i] < minimo_a){
          minimo_a = a[i][i];
    }
  }

    printf("\n- El elemento minimo de la diagonal A es: %d\n ", minimo_a);

		//Minimo principal de la diagonal B

	minimo_b = b[0][0];

	for(i=1;i<3;i++){
      if(b[i][i] < minimo_b){
          minimo_b = b[i][i];
		}
	}
	printf("\n- El elemento minimo de la diagonal B es: %d\n ", minimo_b);


	//Maximo de la primera fila de A

	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			if (i<1){
				if (a[i][j] > maximo_a)
					maximo_a = a[i][j];
			}
		}
	}

	printf("\n- El maximo de la primera fila de A es: %d\n",maximo_a);


	//Maximo de la primera fila de B

	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			if (i<1){
				if (b[i][j] > maximo_b)
					maximo_b = b[i][j];
			}
		}
	}

	printf("\n- El maximo de la primera fila de B es: %d\n",maximo_b);













}
