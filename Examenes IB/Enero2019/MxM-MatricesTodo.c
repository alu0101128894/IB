
#include <stdio.h>
#define M 50

int main(void)
{
    int matriz[M][M], matriz2[M][M], matriz3[M][M], resultado[M][M];
    int dim, dim2, i, j;
    int suma = 0;
    int diagonal_principal_a = 0, diagonal_principal_b = 0;
    int diagonal_secundaria_a = 0, diagonal_secundaria_b = 0;
    int mayor = 0, mayor2 = 0;
    int menor = 999, menor2 = 999;
    int k;

    printf("Introduzca el numero de filas y columnas de la primera matriz: ");
    scanf("%d", &dim);

    printf("\n");

    for (i = 0; i < dim; i++)
    {
        for (j = 0; j < dim; j++)
        {
            printf("Introduzca el elemento %d,%d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");

    printf("Introduzca el numero de filas y columnas de la segunda matriz: ");
    scanf("%d", &dim2);

    printf("\n");

    for (i = 0; i < dim2; i++)
    {
        for (j = 0; j < dim2; j++)
        {
            printf("Introduzca el elemento %d,%d: ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }
    //imprimir la matriz 1
    printf("\n- Las matrices introducidas son: \n\n");

    for (i = 0; i < dim; i++)
    {
        for (j = 0; j < dim; j++)
        {
            printf("\t%d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //imprimir la matriz 2
    for (i = 0; i < dim2; i++)
    {
        for (j = 0; j < dim2; j++)
        {
            printf("\t%d", matriz2[i][j]);
        }
        printf("\n");
    }

    //suma de la matriz 1 y 2
    printf("\n- La suma de las dos matrices son: \n");

    for (i = 0; i < dim; i++)
    {
        for (j = 0; j < dim; j++)
        {
            matriz3[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }
    printf("\n");

    for (i = 0; i < dim; i++)
    {
        for (j = 0; j < dim; j++)
        { //imprimir la suma
            printf("\t%d", matriz3[i][j]);
        }
        printf("\n");
    }
    
    //Suma de las filas de la 1 matriz
    printf("\n- Las sumas de cada fila de la primera matriz son:\n\n");

    for (i = 0; i < dim; i++)
    {
        for (j = 0; j < dim; j++)
        {
            suma += matriz[i][j];
        }
        printf("\t%d", suma);
        suma = 0;
        printf("\n");
    }

    //Suma de las filas de la 2 matriz
    printf("\n- Las sumas de cada fila de la segunda matriz son:\n\n");

    for (i = 0; i < dim; i++)
    {
        for (j = 0; j < dim; j++)
        {
            suma += matriz2[i][j];
        }
        printf("\t%d", suma);
        suma = 0;
        printf("\n");
    }

    //Multiplicacion
    for (i = 0; i < dim; i++)
    {
        for (j = 0; j < dim; j++)
        {
            resultado[i][j] = 0;
            for (k = 0; k < dim; k++)   // dim = tiene el mismo numero, asi que se coloca "dim"
            {
                resultado[i][j] += matriz[i][k] * matriz2[k][j];
            }
        }
    }

    printf("\n- La multiplicacion de las dos matrices son:\n\n");
    for (i = 0; i < dim; i++)
    {
        for (j = 0; j < dim; j++)
        {
            printf("\t%d", resultado[i][j]);
        }
        printf("\n");
    }

    //Suma Diagonal principal de A
    for (i = 0; i < dim; i++)
    {
        for (j = 0; j < dim; j++)
        {
            if (i == j)
            {
                diagonal_principal_a += matriz[i][j];
            }
        }
    }
    printf("\n- La suma de la diagonal principal de la primera matriz es: %d", diagonal_principal_a);

    //Suma Diagonal secundaria de A
    for (i = 0; i < dim; i++)
    {
        for (j = 0; j < dim; j++)
        {
            if (i + j == dim - 1)  // dim = tiene el mismo numero, asi que se coloca "dim"
            {
                diagonal_secundaria_a += matriz[i][j];
            }
        }
    }
    printf("\n- La suma de la diagonal secundaria de la primera matriz es: %d", diagonal_secundaria_a);

    //Suma Diagonal principal de B
    for (i = 0; i < dim; i++)
    {
        for (j = 0; j < dim; j++)
        {
            if (i == j)
            {
                diagonal_principal_b += matriz2[i][j];
            }
        }
    }
    printf("\n- La suma de la diagonal principal de la segunda matriz es: %d", diagonal_principal_b);

    //Suma Diagonal secundaria de B
    for (i = 0; i < dim2; i++)
    {
        for (j = 0; j < dim2; j++)
        {
            if (i + j == dim2 - 1)
            {
                diagonal_secundaria_b += matriz2[i][j];
            }
        }
    }
    printf("\n- La suma de la diagonal secundaria de la segunda matriz es: %d", diagonal_secundaria_b);

    printf("\n");

    //mayor elemento 1 matriz   
    for (i = 0; i < dim; i++)   //filas 1 = dim
    {
        if (matriz[i][i] > mayor)
        {
            mayor = matriz[i][i];
        }
    }
    printf("\n- El mayor elemento de la primera matriz es: %d", mayor);

    //mayor elemento 2 matriz

    for (i = 0; i < dim2; i++)   //filas 2 = dim2
    {
        if (matriz2[i][i] > mayor2)
        {
            mayor2 = matriz2[i][i];
        }
    }
    printf("\n- El mayor elemento de la segunda matriz es: %d", mayor2);

    //menor elemento 1 matriz

    for (i = 0; i < dim; i++)  //filas = dim
    {
        if (matriz[i][i] < menor)
        {
            menor = matriz[i][i];
        }
    }
    printf("\n- El menor elemento de la primera matriz es: %d", menor);

    //menor elemento 2 matriz

    for (i = 0; i < dim2; i++)
    {
        if (matriz2[i][i] < menor2)
        {
            menor2 = matriz2[i][i];
        }
    }
    printf("\n- El menor elemento de la segunda matriz es: %d", menor2);

    return 0;
}