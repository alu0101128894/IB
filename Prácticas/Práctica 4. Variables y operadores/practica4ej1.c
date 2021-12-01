/*
Ejercicio 1: Implementar un programa que permita determinar el cambio que recibir�
el cliente de una tienda al adquirir un producto, habiendo pagado con un billete de
100 euros
*/

#include<stdio.h>

int main(void){

	int x, producto;

	printf("\n- Introduzca un valor del producto: ");
	scanf("%d", &x);

	producto = 100 - x;

	printf("\n- El cambio es: %d\n", producto);

	return 0;
}
