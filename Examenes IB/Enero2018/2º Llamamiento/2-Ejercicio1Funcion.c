/* Escribir una funcion que se la pasen dos parametros, un vector de numeros y la cantidad de ellos.
La funcion debera realizar la media y devolver la cantidad de numeros menores que la media */

#include<stdio.h>

int media (int v[], int size){

    int i, suma=0, cantidad=0;
    float media = 0;

    for(i=0; i < size; i++){
        suma = suma + v[i];
    }

    media = suma / size;
    printf("El resultado de la media es: %.2f\n", media);

    for(i=0; i<size; i++){
        if(v[i] < media){
            cantidad++;
        }
    }
    return cantidad;
}

int main(void){

    int v[8] = {1,2,3,4,5,6,7,8};

    int cantidad = 0;

    cantidad = media (v, 8);
    printf("La cantidad de los numeros menores que la media es: %d\n",cantidad);

    return 0;
}
