/*
Practica 4 (Modificación). El cuadrado de los 4 numeros de cada uno de ellos.
*/

#include<stdio.h>

int main(void){

	int numero1,numero2,numero3,numero4;
  int cuadrado1, cuadrado2, cuadrado3, cuadrado4;

	printf("\n- Introduzca el Primer numero: ");
	scanf("%d",&numero1);

	printf("- Introduzca el Segundo numero: ");
	scanf("%d",&numero2);

	printf("- Introduzca el Tercer numero: ");
	scanf("%d",&numero3);

	printf("- Introduzca el Cuarto numero: ");
	scanf("%d",&numero4);

	cuadrado1 = numero1 * numero1;
  cuadrado2 = numero2 * numero2;
  cuadrado3 = numero3 * numero3;
  cuadrado4 = numero4 * numero4;

  printf("\n- El cuadrado del Primer numero es: %d\n",cuadrado1);
  printf("- El cuadrado del Segundo numero es: %d\n",cuadrado2);
  printf("- El cuadrado del Tercer numero es: %d\n",cuadrado3);
  printf("- El cuadrado del Cuarto numero es: %d\n",cuadrado4);

  return 0;
}
