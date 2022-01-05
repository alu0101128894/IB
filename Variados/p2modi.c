#include <stdio.h>
int limite_inferior;
int limite_superior;
int cuenta_pares = 0;
int cuenta_impares = 0;
int numero_total = 0;
int incremento;
void main (){ 
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
    
    printf("\n");
    // PARES
    for(incremento = limite_inferior; incremento <= limite_superior; incremento++) {    // 1 <= 3 , recorre (1,2,3)
        if(incremento % 2 == 0) {    // par

            printf("El numero %d es par\n", incremento); // devuelve los valores del array de pares

            cuenta_pares++;     // contador de pares, contar el total de pares que hay

        }
        else { 
            
            printf("El numero %d es impar\n", incremento); // devuelve los valores del array de impares

            cuenta_impares++;       // contador de impares, contar el total de impar que hay

        }
    }
    printf( "\nNúmeros total de números analizados: %d", limite_superior);

    printf( "\nNúmeros total de pares: %d", cuenta_pares); // devuelve el contador de pares

    printf( "\nNúmeros total de impares: %d", cuenta_impares); // devuelve el contador de impares
    printf("\n");
}