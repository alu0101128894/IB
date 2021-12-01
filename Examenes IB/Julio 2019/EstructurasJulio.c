/* Se desea registar la informacion de los siguientes clientes una surcursal bancaria,
cada cuenta bancaria tendrá asociada los siguientes datos: numero de ccuenta y salida, se sabe
que los datos asociados a cada cliente son: nombre, apellido1, apellido2, dni y edad. Ademas de sus dos cuentas bacarias
con los datos anteriores, define los tipos de datos necesarios que permitan almacenar a 100 clientes atendiendo a las especificaciones
anteriores */

typedef struct{
	
	char numero_cuenta[20];
	char salida[50];
	
}Tcuenta;

typedef struct{
	
	char nombre[50];
	char apellido1[50];
	char apellido2[50];
	char dni[9];
	int edad;
	Tcuenta cuenta[2];
	
}Tdatos;
Tdatos clientes[100];
