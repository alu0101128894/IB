/*
Ejemplo 3: Implementar un programa que muestre por pantalla la media aritm�tica de
4 numeros pedidos al usuario. = 4 numeros y que haga la media XD
*/

#include<stdio.h>

int main(void){

	float a,b,c,d,media;

	printf("\n- Introduzca el Primer numero: ");
	scanf("%f",&a);

	printf("- Introduzca el Segundo numero: ");
	scanf("%f",&b);

	printf("- Introduzca el Tercer numero: ");
	scanf("%f",&c);

	printf("- Introduzca el Cuarto numero: ");
	scanf("%f",&d);

	media = (a+b+c+d) / 4;

	printf("\n- La media de los 4 numeros es: %.2f\n", media);

}
