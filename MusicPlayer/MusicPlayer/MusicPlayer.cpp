// MusicPlayer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include  "autor.h"
#include "cancionLDC.h"
#include "autor.h"
#include "autorList.h"
#include  "listaDeListas.h"


listaDeListas *lPlayList;
listaDeListas *lAlbumes;
listaDeListas *lGeneros;
autorList *lAutores;

void printTag(){
	system("cls");
	cout << "                          ------------------" << endl;
	cout << "                         |   /\/\/\/\/\/\/\   |" << endl;
	cout << "                         |  < Music Player >  |" << endl;
	cout << "                         |   \/\/\/\/\/\/\/   |" << endl;
	cout << "                          ------------------" << endl;
	cout << "_______________________________________________________________________________" << endl;
	cout << endl;
	cout << endl;

}

void agregar(){

	int x;
	int opc = 0;
	do {
		cout << "                            Agregar Canciones" << endl;
		cout << endl;
		printTag();
		cout << "( 1 ) Prototipo" << endl;

		cout << "( 0 ) Regresar" << endl;
		cin >> opc;

		switch (opc){
		case 1:


			break;
		case 0:cout << "Fin del programa..." << endl;
			break;
		default: cout << "Opcion no valida..." << endl;

		}// fin del switch
		system("pause");

	} while (opc != 0);


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
		cout << "( 4 ) Todas" << endl;
		cout << "( 0 ) Regresar" << endl;
		cin >> opc;

		switch (opc){

		case 1:


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

	cancionLDC * all = new cancionLDC("All");

	all->agregar("test");

	lPlayList->insertar(all);

	//menu();

	autorList *AL = new autorList();
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
