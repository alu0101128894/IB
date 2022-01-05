#include <stdio.h>

int main(void) {       
    int limite_inferior, limite_superior, aux = 0;
    int numeros_pares, numeros_impares;
    int array_pares[100];
    int array_impares[100];
    int cuenta_pares = 0;
    int cuenta_impares = 0;
    int numero_total = 0;

    printf("Se va a comenzar la ejecución!\n");
    printf("\nPráctica 3. Imprimir los números pares e impares entre límites, el número total de números y el total de pares e impares.\n");
    printf("\nEmpezamos!\n\n");

    printf("Introduce un numero entero (Límite Inferior): ");
    scanf("%d",&limite_inferior);

    printf("Introduce otro numero entero (Límite Superior): ");
    scanf("%d",&limite_superior);

    // si limite superior es menor que limite inferior, se hace el cambio
    if (limite_superior < limite_inferior) {
        printf("\n - El Límite Superior es menor que el Límite Inferior, por lo que se intercambia\n");
        aux = limite_superior;              // aux = 3
        limite_superior = limite_inferior;  // superior = 3 
        limite_inferior = aux;              // inferior = 1
    }   
    // printf("\nlimite_inferior: %d\n",limite_inferior); // 1
    // printf("limite_superior: %d\n",limite_superior);  // 3
    
    printf( "\nNúmeros total de números analizados: %d", limite_superior);

    // PARES
    printf("\n\n- Secuencia de los números pares analizados: ");
    for(numeros_pares = limite_inferior; numeros_pares <= limite_superior; numeros_pares++) {    // 1 <= 3 , recorre (1,2,3)
        if(numeros_pares % 2 == 0) {    // par

            array_pares[numeros_pares] = numeros_pares;    // guarda todos los pares en array_pares[numeros_pares]     

            printf("%d, ", array_pares[numeros_pares]); // devuelve los valores del array de pares

            cuenta_pares++;     // contador de pares, contar el total de pares que hay

        }
    }

    printf( "\nNúmeros total de pares: %d", cuenta_pares); // devuelve el contador de pares

    // IMPARES
    printf("\n\n- Secuencia de los números impares analizados: ");
    for(numeros_impares = limite_inferior; numeros_impares <= limite_superior; numeros_impares++) {
        if(numeros_impares % 2 != 0) { // impar

            array_impares[numeros_impares] = numeros_impares;        // guarda todos los pares en array_impares[numeros_impares]        

            printf("%d, ", array_impares[numeros_impares]); // devuelve los valores del array de impares

            cuenta_impares++;       // contador de impares, contar el total de impar que hay

        }
    }

    printf( "\nNúmeros total de impares: %d", cuenta_impares); // devuelve el contador de impares

    printf("\n");
    return 0;
}
