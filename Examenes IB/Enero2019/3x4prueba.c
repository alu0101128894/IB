
#include <stdio.h>

int main(void)
{
	int matriz[3][4], matriz2[3][4];
	int i, j;
	

	printf("Introduzca los datos de la primera matriz\n\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("Introduzca el elemento %d,%d: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("\n");

	printf("Introduzca los datos de la segunda matriz\n\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("Introduzca el elemento %d,%d: ", i+1, j+1);
			scanf("%d", &matriz2[i][j]);
		}
	}
	//imprimir la matriz 1
	printf("\n- Las matrices introducidas son: \n\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("\t%d", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//imprimir la matriz 2
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("\t%d", matriz2[i][j]);
		}
		printf("\n");
	}

	if(3 != 4){
        printf("\nNo se puede hacer la diagonal principal de A porque la matriz es de 3 x 4\n");
    }

    if(3 != 4){
        printf("No se puede hacer la suma de la diagonal principal de A porque la matriz es de 3 x 4\n");
    }

    if(3 != 4){
        printf("No se puede hacer  la diagonal secundaria de A porque la matriz es de 3 x 4\n");
    }

    if(3 != 4){
        printf("No se puede hacer la suma de la diagonal secundaria de B porque la matriz es de 3 x 4");
    }


	/*//Suma Diagonal principal de A
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)
			{
				diagonal_principal_a += matriz[i][j];
			}
		}
	}
	printf("\n- La suma de la diagonal principal de la primera matriz es: %d", diagonal_principal_a);

	//Suma Diagonal secundaria de A
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i + j == n - 1)  //n es 3, porque se coje la columna
			{ 
				diagonal_secundaria_a += matriz[i][j];
			}
		}
	}
	printf("\n- La suma de la diagonal secundaria de la primera matriz es: %d", diagonal_secundaria_a);

	//Suma Dioagonal principal de B
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)
			{
				diagonal_principal_b += matriz2[i][j];
			}
		}
	}
	printf("\n- La suma de la diagonal principal de la segunda matriz es: %d", diagonal_principal_b);

	//suma Diagonal secundaria de B
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i + j == n - 1) // n es 3 porque se coge la columna
			{ 
				diagonal_secundaria_b += matriz2[i][j];
			}
		}
	}
	printf("\n- La suma de la diagonal secundaria de la segunda matriz es: %d", diagonal_secundaria_b);
    */


	return 0;
}
