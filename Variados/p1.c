#include <stdio.h>

int main(void) {

    int numero = 0;

    printf("El programa indica si el numero es par o impar\n");

    printf("\nIntroduzca un numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0 ) {
        printf("\nEl numero %d es par\n", numero);
    } else {
       printf("\nEl numero %d es impar\n", numero);
    }
    // printf((numero % 2 == 0) ? ("El numero es par\n") : ("El numero es impar\n"));
    
    return 0;
}