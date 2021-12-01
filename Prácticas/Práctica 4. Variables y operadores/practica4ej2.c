/*
Ejercicio 2: Escribir un programa que solicite el radio de una circunferencia y muestre
en pantalla la longitud de la circunferencia y el area del circulo para ese radio.
*/

#include<stdio.h>
#define PI 3.141592

float area, radio, longitud;

int main(void){

	printf("\n- Introduzca el radio de una circunferencia: ");
	scanf("%f",&radio);

	area = PI * radio * radio;
	longitud = 2 * PI * radio;

	printf("\n- El area de la circunferencia es: %.2f", area);
	printf("\n- La longitud de la circunferencia es: %.2f\n",longitud);

	return 0;
}
