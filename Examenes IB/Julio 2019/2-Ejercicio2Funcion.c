/* Implementar una funcion que se le pase como un parametro un cadena de caracteres. 
La  funcion debera devolver un 1, si dicha cadena solo tiene letras (minusculas o mayusculas),
o un 0 en caso contrario ( que tenga mas cosas, como por ejemplo, espacios en blanco, numero, etc..)
No se permite hacer uso de funciones especificas de C */


//devolver = return = int 
#include<stdio.h>

int numero(char v[]){ //devolver 

	int opcion=1;

	int i;
	
	for(i=0; v[i] != '\0'; i++){ // '\0' contar cadenas
	
		if(opcion = 1){
			return 1;
		}
		else if(opcion = 0){
			return 0;
		}

	/*	}s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){ 
			letras++;
		}else if(s[i] != ' '){ 
			espacios++;
		}
	}*/
	
		switch(opcion){
			case 1: printf("Solo tiene letras\n"); break;
						
			case 0:	printf("Caso contrario, espacios en blanco\n"); break;
		}
	}
}

int main(void){

	numero("hola");

	return 0;
	
}

