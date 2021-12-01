#include <stdio.h> /*Solicita por teclado una frase. Indicar si la frase es capic�a*/
#define M 100

int i = 0, j = 0, capic = 0;
char frase[M];

int main(void)
{

    printf("Escriba una frase: "); scanf(" %[^\n]", frase);
    getchar();

    do
    {
        j++;

    } while (frase[j] != '\0'); /*Cuenta el n�mero de caracteres del char, dado que el \0 indica siempre el final*/

    for (i = 0; i <= j; i++)
    {

        if (frase[i] == frase[j - i - 1])
            capic++; /*para i=0, capic=1*/
    }

    if (capic == j + 1)
    { /*Dado que capic empieza en 1, si la palabra es capic�a ser� 1+ que el n� de letras*/
        printf("\nLa frase es capicua\n");
    }
    else
    {
        printf("\nLa frase no es capicua\n");
    }
}
