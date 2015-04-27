// MusicPlayer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include  "autor.h"
#include "cancionLDC.h"
#include "autor.h"
#include "autorList.h"
#include  "listaDeListas.h"

char nombre[20];
char path[40];
cancionLDC *all;
listaDeListas *lPlayList;
listaDeListas *lAlbumes;
listaDeListas *lGeneros;
autorList *lAutores;

void menu();

void printTag(){
	system("cls");
	cout << "                          ------------------" << endl;
	cout << "                         |   ////////////////   |" << endl;
	cout << "                         |   //Music Player//   |" << endl;
	cout << "                         |   ////////////////   |" << endl;
	cout << "                          ------------------" << endl;
	cout << "_______________________________________________________________________________" << endl;
	cout << endl;
	cout << endl;

}


void agregarCancion(cancionLDC *cldc){
	//Agrega la cancion a la lista cldc
	int opc = 0;
	cancion *c;
	cout << "ingrese el nombre de la cancion" << endl;
	cin >> nombre;
	cout << "ingrese la ruta" << endl;
	cin >> path;
	cldc->agregar(nombre, path);
	cout << "to do all->agregar(c) ";

}

cancionLDC* agregarAlbum(autor *a){
	int opc = 1;
	cout << "ingrese el nombre del Album";
	cin >> nombre;
	cancionLDC *cldc = new cancionLDC();

	while (opc == 1) {
		agregarCancion(cldc);
		cout << "Desea agregar otra cancion a esta Album ? " << endl;
		cout << "	1-Si " << endl;
		cout << "	0-No" << endl;
		cin >> opc;
	}

	cout << endl;
	if (a != NULL){
		a->insertarAlbum(cldc);
	}
	lAlbumes->insertar(cldc);

	return cldc;
}

void agregarAutor(){
	autor *a = new autor();
	int opc = 0;
	cout << "ingrese el nombre del autor";
	cin >> nombre;
	a->setNombre(nombre);
	lAutores->insertarAutor(a);
	cout << "Desea agregar un album para este autor? " << endl;
	cout << "	1-Si " << endl;
	cout << "	0-Regresar al menu Principal" << endl;
	cout << endl;
	cin >> opc;

	switch (opc){
	case 1:
		agregarAlbum(a);
		break;
	case 0:
		break;
	default:
		cout << "Opcion no valida..." << endl;
		break;
	}

}

void agregar(){
	int x;
	int opc = 0;
	do {
		printTag();
		cout << "                            Agregar Canciones" << endl;
		cout << endl;

		cout << "( 1 ) Nuevo autor" << endl;
		cout << "( 2 ) Nuevo genero" << endl;
		cout << "( 3 ) Nuevo album" << endl;
		cout << "( 4 ) Nuevo single" << endl;
		cout << "( 0 ) Regresar" << endl;
		cin >> opc;

		switch (opc){
		case 1:
			agregarAutor();
			break;
		case 2:
			cancionLDC *g;

			cout << "ingrese el nombre del genero" << endl;
			cin >> nombre;
			g = new cancionLDC(nombre);
			lGeneros->insertar(g);
			break;

		case 3:
			agregarAlbum(NULL);

			break;
		case 4:


			break;

		case 0:
			menu();
			break;
		default: cout << "Opcion no valida..." << endl;

		}// fin del switch
		system("pause");

	} while (opc != 0);

	menu();
}

void reproducir(){

	int x;
	int opc = 0;
	do {
		printTag();

		cout << "                            Reproducir Musica" << endl;
		cout << endl;
		cout << "( 1 ) Playlist" << endl;
		cout << "( 2 ) Album" << endl;
		cout << "( 3 ) Genero" << endl;
		cout << "( 4 ) Autores" << endl;
		cout << "( 5 ) Todas" << endl;
		cout << "( 0 ) Regresar" << endl;
		cin >> opc;

		switch (opc){

		case 1:
			lPlayList->mostrar();

			break;
		case 2:
			lAlbumes->mostrar();

			break;
		case 3:
			lGeneros->mostrar();

			break;
		case 4:
			lAutores->desplegarLISTA();
			break;

		case 5:
			all->mostrarLista();
			break;

		case 0:cout << "Fin del programa..." << endl;
			break;
		default: cout << "Opcion no valida..." << endl;

		}// fin del switch
		system("pause");

	} while (opc != 0);


}

void eliminar(){

	int x;
	int opc = 0;
	do {
		printTag();
		cout << "                            Eliminar Musica" << endl;
		cout << endl;
		cout << "( 1 ) Desplegar todas" << endl;
		cout << "( 2 ) Eliminar por Autor" << endl;
		cout << "( 4 ) Eliminar por Nombre" << endl;
		cout << "( 0 ) Regresar" << endl;
		cin >> opc;

		switch (opc){
		case 1:


			break;
		case 0:cout << " " << endl;
			break;
		default: cout << "Opcion no valida..." << endl;

		}// fin del switch
		system("pause");

	} while (opc != 0);


}

void playlists(){

	int x;
	int opc = 0;
	do {
		printTag();
		cout << "                            Editar Playlists" << endl;
		cout << endl;
		cout << "( 1 ) Nueva Playlost" << endl;
		cout << "( 2 ) Eliminar Playlist" << endl;
		cout << "( 3 ) Editar Playlist" << endl;
		cout << "( 0 ) Regresar" << endl;
		cin >> opc;

		switch (opc){
		case 1:



			break;
		case 0:cout << "" << endl;
			break;
		default: cout << "Opcion no valida..." << endl;

		}// fin del switch
		system("pause");

	} while (opc != 0);


}

void menu(){

	int x;
	int opc = 0;
	do {
		printTag();
		cout << "                            Menu Principal" << endl;
		cout << endl;
		cout << "( 1 ) Reproducir musica" << endl;
		cout << "( 2 ) Agregar canciones" << endl;
		cout << "( 3 ) Eliminar canciones" << endl;
		cout << "( 4 ) Agregar/Editar Playlists" << endl;
		cout << "( 0 ) Salir" << endl;
		cin >> opc;

		switch (opc){
		case 1:
			reproducir();

			break;
		case 2:
			agregar();

			break;
		case 3:
			eliminar();

			break;
		case 4:
			playlists();

			break;
		case 0:cout << "Fin del programa..." << endl;
			break;
		default: cout << "Opcion no valida..." << endl;

		}// fin del switch
		system("pause");

	} while (opc != 0);


}



int _tmain(int argc, _TCHAR* argv[])
{

	lPlayList = new listaDeListas();
	lAlbumes = new listaDeListas();;
	lGeneros = new listaDeListas();;
	lAutores = new autorList();
	all = new cancionLDC("All");

	all->agregar("test", "c://algo");


	lPlayList->insertar(all);



	menu();

	/*
	AL->insertarAutor(new autor("sip"));
	AL->insertarAutor(new autor("kek"));
	AL->insertarAutor(new autor("lel"));
	AL->insertarAutor(new autor("ktopkek"));
	AL->insertarAutor(new autor("kek"));
	AL->eliminarAutor("kek");
	AL->eliminarAutor("kek");
	AL->desplegarLISTA();
	*/
	system("pause");
	return 0;
}
