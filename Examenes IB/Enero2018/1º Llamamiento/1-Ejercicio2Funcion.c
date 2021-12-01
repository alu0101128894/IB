/* Implementar una funcion que se le pase como entrada una cadena de caracteres y visualice por pantalla
como resultado si la cadena tiene mas vocales que consonantes, los espacios no cuentan. En el caso de que
tengan el mismo numero de vocales y consontantes, indicar iguales */

#include<stdio.h>

void palabra (char v[]){

	int i, vocales = 0, consonantes = 0;

	for(i=0; v[i] != '\0'; i++){ // '\0' contar cadenas

		if(v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u'){ //Considera vocales primeros, lo siguiente consonantes
			vocales++;
		}else if(v[i] != ' '){ 		//Disinto a "espacios" es consonantes 100%
			consonantes++;
		}
	}

	if (vocales > consonantes){
		printf("Hay mas vocales que consonantes\n");
	}else if(vocales < consonantes){
		printf("Hay menos vocales que consonantes\n");
	}else{
		printf("Hay la misma cantidad de vocales y de consonantes\n");
	}

}
int main(void){

	palabra("ala"); //Mensaje para comprobar las vocales o consonantes
}
