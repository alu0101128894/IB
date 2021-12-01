/*Se desea registrar la informaci�n de los equipos de baloncesto que participan en un Torneo.

Para ellos, ser� necesario definir los tipos de datos necesarios para almacenar la siguiente informaci�n:

	(Nombre del equipo, A�o de fundacion, Puesto del �ltimo campeonato, Media de puntos por partidos,
	�Clasificado Copa del Rey? )

	As� mismo, tambi�n deber� almacenar la siguiente informaci�n de sus dos jugadores mas importantes:

	(Dorsal, Numero de canastas, altura del jugador, numero de asistencias, numero de rebotes, valor del jugador). */

#include<stdio.h>

typedef struct{

	int dorsal;
	int canastas;
	float altura;
	int asistencias;
	int rebotes;
	int valor;

}Tjugador;

typedef struct{

	char nombre_equipo[20];
	int fundacion;
	int p_campeonato;
	float media;
	char clasificado_CopaRey[2]; //Si o No
	Tjugador importante[2];

}torneo;
