/*
NxM matriz
Suma filas de la matriz
Suma diagonal principal
Numero maximo y minimo
*/

#include<stdio.h>

#define N 50
#define M 50

int main(void){
    int filas, columnas, filas2, columnas2;
    int i,j;
    int matriz[N][M],matriz2[N][M];
    int suma=0;
    int diagonal_principal_a=0, diagonal_principal_b=0;
    int mayor=0,mayor2=0;
    int menor=999,menor2=999;


    printf("Introduce el numero de filas de la primera matriz: ");
    scanf("%d",&filas);
    printf("Introduce el numero de columnas de la primera matriz: ");
    scanf("%d",&columnas);

    printf("\n");

    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("Introduce el elemento %d,%d: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("\n");

    printf("Introduce el numero de filas de la segunda matriz: ");
    scanf("%d",&filas2);
    printf("Introduce el numero de columnas de la segunda matriz: ");
    scanf("%d",&columnas2);

    printf("\n");

    for(i=0;i<filas2;i++){
        for(j=0;j<columnas2;j++){
            printf("Introduce el elemento %d,%d: ",i+1,j+1);
            scanf("%d",&matriz2[i][j]);
        }
    }

    printf("\nLa suma de cada fila de la primera matriz es: \n\n");
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            suma+=matriz[i][j];
        }
        printf("\t%d",suma);
        suma=0;
        printf("\n");
    }

    printf("\nLa suma de cada fila de la segunda matriz es: \n\n");
    for(i=0;i<filas2;i++){
        for(j=0;j<columnas2;j++){
            suma+=matriz2[i][j];
        }
        printf("\t%d",suma);
        suma=0;
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
        if(matriz[i][i] > mayor){
            mayor = matriz[i][i];
        }
    }
    printf("\nEl numero mayor de la primera matriz es: %d",mayor);

     for(i=0;i<filas2;i++){
        if(matriz2[i][i] > mayor2){
            mayor2 = matriz2[i][i];
        }
    }
    printf("\nEl numero mayor de la segunda matriz es: %d",mayor2);

     for(i=0;i<filas;i++){
        if(matriz[i][i] < menor){
            menor = matriz[i][i];
        }
    }
    printf("\nEl numero menor de la primera matriz es: %d",menor);

     for(i=0;i<filas2;i++){
        if(matriz2[i][i] < menor2){
            menor2 = matriz2[i][i];
        }
    }
    printf("\nEl numero menor de la segunda matriz es: %d",menor2);


}