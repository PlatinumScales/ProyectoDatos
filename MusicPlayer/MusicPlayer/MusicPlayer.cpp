// MusicPlayer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "nodoCancion.h"
#include "cancionLDC.h"



void agregar(){

	int x;
	int opc = 0;
	do {
		system("cls");
		cout << "                          ------------------" << endl;
		cout << "                         |   Music Player   |" << endl;
		cout << "                         |                  |" << endl;
		cout << "                          ------------------" << endl;
		cout << "_______________________________________________________________________________" << endl;
		cout << endl;
		cout << endl;
		cout << "                            Agregar Canciones" << endl;
		cout << endl;
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
		system("cls");
		cout << "                          ------------------" << endl;
		cout << "                         |   Music Player   |" << endl;
		cout << "                         |                  |" << endl;
		cout << "                          ------------------" << endl;
		cout << "_______________________________________________________________________________" << endl;
		cout << endl;
		cout << endl;
		cout << "                            Reproducir Musica" << endl;
		cout << endl;
		cout << "( 1 ) Desplegar todas" << endl;
		cout << "( 2 ) Buscar por Autor" << endl;
		cout << "( 3 ) Buscar por Genero" << endl;
		cout << "( 4 ) Buscar por Nombre" << endl;
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
		system("cls");
		cout << "                          ------------------" << endl;
		cout << "                         |   Music Player   |" << endl;
		cout << "                         |                  |" << endl;
		cout << "                          ------------------" << endl;
		cout << "_______________________________________________________________________________" << endl;
		cout << endl;
		cout << endl;
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
		system("cls");
		cout << "                          ------------------" << endl;
		cout << "                         |   Music Player   |" << endl;
		cout << "                         |                  |" << endl;
		cout << "                          ------------------" << endl;
		cout << "_______________________________________________________________________________" << endl;
		cout << endl;
		cout << endl;
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
		system("cls");
		cout << "                          ------------------" << endl;
		cout << "                         |   Music Player   |" << endl;
		cout << "                         |                  |" << endl;
		cout << "                          ------------------" << endl;
		cout << "_______________________________________________________________________________" << endl;
		cout << endl;
		cout << endl;
		cout << "                            Menu Principal" << endl;
		cout << endl;
		cout << "( 1 ) Reproducir musica" << endl;
		cout << "( 2 ) Agregar canciones" << endl;
		cout << "( 3 ) Eliminar canciones" << endl;
		cout << "( 4 ) Editar Playlists" << endl;
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
	menu();
}
