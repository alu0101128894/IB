#include<stdio.h>

#define N 50
#define M 50

int main(void){

    int matriz[N][M], matriz2[N][M], matriz3[N][M],resultado[N][M];
    int i,j;
    int filas, columnas, filas2, columnas2;
    int suma=0;
    int k;
    int diagonal_principal_a=0, diagonal_principal_b=0;
    int diagonal_secundaria_a=0, diagonal_secundaria_b=0;
    int mayor=0,mayor2=0;
    int menor=999,menor2=999;


    printf("Introduzca el numero de filas de la primera matriz: ");
    scanf("%d",&filas);

    printf("Introduzca el numero de columnas de la primera matriz: ");
    scanf("%d",&columnas);

    printf("\n");
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("Introduzca el elemento %d,%d: ", i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
        
    }
    printf("\n");

    printf("Introduzca el numero de filas de la segunda matriz: ");
    scanf("%d",&filas2);

    printf("Introduzca el numero de columnas de la segunda matriz: ");
    scanf("%d",&columnas2);

    printf("\n");

    for(i=0;i<filas2;i++){
        for(j=0;j<columnas2;j++){
            printf("Introduzca el elemento %d,%d: ", i+1,j+1);
            scanf("%d",&matriz2[i][j]);
        }
       
    }
    printf("\n");

    printf("Las matrices introducidas son: \n\n");
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("\t%d",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

      for(i=0;i<filas2;i++){
        for(j=0;j<columnas2;j++){
            printf("\t%d",matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\n\nLa traspuesta de la primera matriz es: \n");

    for(i=0;i<columnas;i++){
        printf("\n");                       //--> primer error
        for(j=0;j<filas;j++){
            printf("\t%d", matriz[j][i]);
        }
    }
    printf("\n\nLa traspuesta de la segunda matriz es: \n");

    for(i=0;i<columnas2;i++){
        printf("\n");
        for(j=0;j<filas2;j++){
            printf("\t%d", matriz2[j][i]);
        }
    }
    
    printf("\n\nLa suma de las dos matrices son: \n\n");

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            matriz3[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }

   for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("\t%d",matriz3[i][j]);
        }
        printf("\n");
     }

    printf("\nLa suma de cada fila de la primera matriz son: \n\n");

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            suma += matriz[i][j];
        }
        printf("\t%d", suma);
        suma=0;
        printf("\n");
    }

    printf("\nLa suma de cada fila de la segunda matriz son: \n\n");

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            suma += matriz2[i][j];
        }
        printf("\t%d", suma);
        suma=0;
        printf("\n");
    }

    printf("\nLa suma de cada columna de la primera matriz son: \n\n");

    for(j=0;j<columnas;j++){
        for(i=0;i<filas;i++){
            suma+= matriz[i][j];
        }
        printf("\t%d", suma);
        suma=0;
        printf("\n");
    }

    printf("\nLa suma de cada columna de la segunda matriz son: \n\n");
    for(j=0;j<columnas2;j++){
        for(i=0;i<filas2;i++){
            suma+= matriz2[i][j];
        }
        printf("\t%d", suma);
        suma=0;
        printf("\n");
    }
   
    printf("\nLa multuplicacion de las dos matrices son: \n\n");

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            resultado[i][j] = 0;
            for(k=0;k<columnas;k++){
                resultado[i][j] = matriz[i][k] * matriz2[k][j];
            }
        }
    }
    
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("\t%d", resultado[i][j]);
        }
        printf("\n");
    }


    printf("\nLa diagonal principal de A es: \n\n");

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            if(i==j){
                printf("\t%d",matriz[i][j]);
            }
        }
        printf("\n");
    }
    
    printf("\nLa diagonal principal de B es: \n\n");

    for(i=0;i<filas2;i++){
        for(j=0;j<columnas2;j++){
            if(i==j){
                printf("\t%d",matriz2[i][j]);
            }
        }
        printf("\n");
    }   

    printf("\nLa diagonal secundaria de A es: \n\n");

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            if(i+j==columnas-1){
                printf("\t%d",matriz[i][j]);
            }
        }
        printf("\n");
    }

    printf("\nLa diagonal principal de A es: \n\n");

    for(i=0;i<filas2;i++){
        for(j=0;j<columnas2;j++){
            if(i+j==columnas2-1){
                printf("\t%d",matriz2[i][j]);
            }
        }
        printf("\n");
    }

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            if(i==j){
                diagonal_principal_a+=matriz[i][j];
            }
        }
    }
    printf("\nLa suma de la diagonal principal de A es: %d",diagonal_principal_a);

    for(i=0;i<filas2;i++){
        for(j=0;j<columnas2;j++){
            if(i==j){
                diagonal_principal_b+=matriz2[i][j];
            }
        }
    }
    printf("\nLa suma de la diagonal principal de B es: %d",diagonal_principal_b);

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            if(i+j==columnas-1){
                diagonal_secundaria_a+=matriz[i][j];
            }
        }
    }
    printf("\nLa suma de la diagonal secundaria de A es: %d",diagonal_secundaria_a);

    for(i=0;i<filas2;i++){
        for(j=0;j<columnas2;j++){
            if(i+j==columnas2-1){
                diagonal_secundaria_b+=matriz2[i][j];
            }
        }
    }
    printf("\nLa suma de la diagonal secundaria de A es: %d",diagonal_secundaria_b);

    for(i=0;i<filas;i++){
        if(matriz[i][i] > mayor){
            mayor = matriz[i][i];
        }
    }
    printf("\nEl numero mayor de la primera matriz es: %d", mayor);

    for(i=0;i<filas2;i++){
        if(matriz2[i][i] > mayor2){
            mayor2 = matriz2[i][i];
        }
    }
    printf("\nEl numero mayor de la segunda matriz es: %d", mayor2);

    for(i=0;i<filas;i++){
        if(matriz[i][i] < menor){
            menor = matriz[i][i];
        }
    }
    printf("\nEl numero menor de la primera matriz es: %d", menor);

     for(i=0;i<filas2;i++){
        if(matriz2[i][i] < menor2){
            menor2 = matriz2[i][i];
        }
    }
    printf("\nEl numero menor de la segunda matriz es: %d", menor2);



}