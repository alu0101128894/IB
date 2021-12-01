/* Definir los tipos de datos en C, necesarios para poder almacenar la informacion de 5 categorias de articulos de una empresa.
Por cada categoria se necesita el nombre de la categoria y la cantidad de articulos. Dentro de cada categoria , se necesitan,
10 articulos y la informacion necesaria de cada uno de ellos: descripcion, cantidad y precio. */


typedef struct{

	char descripcion[50];
	int cantidad;
	float precio;

}Tarticulo;

typedef struct{

	char nombre_categoria[50];
	int cantidad_articulos;
	Tarticulo articulo[10];

}Tcategoria;
Tcategoria informacion[5];
