#include <stdio.h>
int limite_inferior;
int limite_superior;
int n_pares = 0;
int n_impares = 0;
int total_numeros = 0;
int incremento;
int main (void){ 
    printf("programa codificado en C que imprima por pantalla todos los numeros pares existentes entre dos limites definidos por el usuario ambos inclusive, \n"); 
    printf("asi como el numero total de numeros analizados para ello, y el total de la cuenta de los que son pares e impares. \n"); 
    
    do{ 
        printf ("\n Introduce el limite_inferior:"); 
        scanf ("%d", &limite_inferior); 
        printf ("Introduce el limite_superior:"); 
        scanf("%d", &limite_superior); 
        
        if (limite_inferior > limite_superior) {
            printf ("\n el limite superior tiene que ser menor al limite inferior"); 
        }
    } while (limite_inferior > limite_superior); 
    
    incremento = limite_inferior; 
    
    for (incremento >= limite_inferior; incremento <= limite_superior; incremento++){ 
        total_numeros++; 
        if (incremento % 2 == 0) { 
            printf ("El numero %d es par\n", incremento); 
            n_pares++;
        } 
        else{ 
            printf ("El numero %d es impar\n", incremento); 
            n_impares++;
        } 
    } 
    printf ("\n el numero total de numeros pares es %d y de impares es %d de un total de %d\n", n_pares, n_impares, total_numeros);}