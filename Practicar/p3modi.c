#include <stdio.h>

int main (void){ 

    int limite_inferior;
    int limite_superior;
    int numeros_pares, numeros_impares;
    int array_pares[100];
    int array_impares[100];
    int cuenta_pares = 0;
    int cuenta_impares = 0;
    int numero_total = 0;
    
    printf("\nPrograma codificado en C que imprima por pantalla todos los numeros pares existentes entre dos limites definidos por el usuario ambos inclusive, \n"); 
    printf("asi como el numero total de numeros analizados para ello, y el total de la cuenta de los que son pares e impares. \n"); 
    
    do{ 
        printf ("\nIntroduce el limite_inferior: "); 
        scanf ("%d", &limite_inferior); 
        printf ("Introduce el limite_superior: "); 
        scanf("%d", &limite_superior); 
        
        if (limite_inferior > limite_superior) {
            printf ("\nEl limite superior tiene que ser menor al limite inferior. Escriba de nuevo"); 
        }
    } while (limite_inferior > limite_superior); 
    
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
}