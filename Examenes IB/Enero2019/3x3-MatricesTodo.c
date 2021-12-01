
#include <stdio.h>

int main(void)
{
	int matriz[3][3], matriz2[3][3], matriz3[3][3],resultado[3][3];
	int i, j;
	int suma = 0;
	int diagonal_principal_a = 0, diagonal_principal_b = 0;
	int diagonal_secundaria_a = 0, diagonal_secundaria_b = 0;
	int mayor = 0, mayor2 = 0;
	int menor = 999, menor2 = 999;
	int n = 3; //n = 3 porque se coge la columna (3x3)
	int k;

	printf("Introduzca los datos de la primera matriz\n\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Introduzca el elemento %d,%d: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("\n");

	printf("Introduzca los datos de la segunda matriz\n\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Introduzca el elemento %d,%d: ", i+1, j+1);
			scanf("%d", &matriz2[i][j]);
		}
	}
	//imprimir la matriz 1
	printf("\n- Las matrices introducidas son: \n\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\t%d", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//imprimir la matriz 2
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\t%d", matriz2[i][j]);
		}
		printf("\n");
	}

	//Traspuesta primera matriz
	printf("\n- Matriz Traspuesta de la primera matriz: \n");

	for (i = 0; i < 3; i++)  //columnas
	{
		printf("\n");
		for (j = 0; j < 3; j++)   //filas
		{
			printf("\t%d", matriz[j][i]);
		}
	}	
	printf("\n");

	//Traspuesta segunda matriz
	printf("\n- Matriz Traspuesta de la segunda matriz: \n");

	for (i = 0; i < 3; i++)  //columnas
	{
		printf("\n");
		for (j = 0; j < 3; j++)   //filas
		{
			printf("\t%d", matriz2[j][i]);
		}
	}

	//Suma de la matriz 1 y 2
	printf("\n- La suma de las dos matrices son: \n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			matriz3[i][j] = matriz[i][j] + matriz2[i][j];
		}
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{ //imprimir la suma
			printf("\t%d", matriz3[i][j]);
		}
		printf("\n");
	}

	//Suma de las filas de la 1 matriz
	printf("\n- Las sumas de cada fila de la primera matriz son:\n\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			suma += matriz[i][j];
		}
		printf("\t%d", suma);
		suma = 0;
		printf("\n");
	}
	
	//Suma de las columnas de la 1 matriz 
	printf("\n- Las sumas de cada columna de la primera matriz son:\n\n");

	for (j = 0; j < 3; j++)   //columna
	{
		for (i = 0; i < 3; i++)  //filas
		{
			suma += matriz[i][j];
		}
		printf("\t%d", suma);
		suma = 0;
		printf("\n");
	}

	//Suma de las filas de la 2 matriz
	printf("\n- Las sumas de cada fila de la segunda matriz son:\n\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			suma += matriz2[i][j];
		}
		printf("\t%d", suma);
		suma = 0;
		printf("\n");
	}

	//Multiplicacion
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			resultado[i][j] = 0;
			for (k = 0; k < 3; k++) //k = columna = 3
			{ 
				resultado[i][j] += matriz[i][k] * matriz2[k][j];
			}
		}
	}

	printf("\n- La multiplicacion de las dos matrices son:\n\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\t%d", resultado[i][j]);
		}
		printf("\n");
	}

	//Suma Diagonal principal de A
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

	printf("\n");

	//mayor elemento 1 matriz
	for (i = 0; i < 3; i++)
	{
		if (matriz[i][i] > mayor)
		{
			mayor = matriz[i][i];
		}
	}
	printf("\n- El mayor elemento de la primera matriz es: %d", mayor);

	//mayor elemento 2 matriz
	for (i = 0; i < 3; i++)
	{
		if (matriz2[i][i] > mayor2)
		{
			mayor2 = matriz2[i][i];
		}
	}
	printf("\n- El mayor elemento de la segunda matriz es: %d", mayor2);

	//menor elemento 1 matriz
	for (i = 0; i < 3; i++)
	{
		if (matriz[i][i] < menor)
		{
			menor = matriz[i][i];
		}
	}
	printf("\n- El menor elemento de la primera matriz es: %d", menor);

	//menor elemento 2 matriz
	for (i = 0; i < 3; i++)
	{
		if (matriz2[i][i] < menor2)
		{
			menor2 = matriz2[i][i];
		}
	}
	printf("\n- El menor elemento de la segunda matriz es: %d", menor2);

	return 0;
}
