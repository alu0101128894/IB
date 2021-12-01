/* Escribir una funcion que se la pase como parametros un vector de numeros enteros y la cantidad de numeros almacenados en dicho vector.
Debera calcular la media de los numeros y visualizar por pantalla, los numeros que sean mayores que la media */

#include<stdio.h>

void media (int v[], int size){
    
    int i;
    int suma = 0;
    float media=0;
    
    for(i=0; i < size; i++){
        suma = suma + v[i]; // suma += v[i]
    }
    
    media = suma / size;
    printf("El resultado de la media son: %.2f\n", media);
    
    for(i=0; i<size; i++){
        if(v[i] > media){    
            printf("%d, ", v[i]);
        }
    }
}

int main(void){
	
	int v[10] = {4,55,1,2,3,3,4,5,6,5};
    media (v, 8);
    
    return 0;
}
