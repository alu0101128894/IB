//Crear un fichero que lea un valor entero y otro decimal, los guarde y que muestre por pantalla los datos
// test.txt

#include<stdio.h>

int main(void){
	
	int a;
	float b;
	
	FILE *f;
	
	f = fopen("test.txt","w");
	
	if(f == NULL){
		printf("Error");
	}

	printf("\nIntroduzca un valor entero y otro valor decimal: ");
	scanf("%d %f",&a,&b);
		
	fprintf(f,"%d %f",a,b);
	
	fclose(f);
	
	/* ---------- */
	
	printf("\nLos datos son:");
	
	f = fopen("test.txt","r"); //Leer
	
	fscanf(f,"%d %f",&a,&b);
	printf("\n a = %d, b = %.2f",a,b);
	
	fclose(f);	
}
