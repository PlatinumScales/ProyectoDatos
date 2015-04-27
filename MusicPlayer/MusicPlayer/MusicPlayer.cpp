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
	c = new cancion(nombre, path);
	if (cldc != NULL){
		cldc->agregar(c);
	}
	all->agregar(c);
}

cancionLDC* agregarLista(autor *a, char * tipo){

	int opc = 1;
	cout << "ingrese el nombre del " << tipo << endl;
	cin >> nombre;
	cancionLDC *cldc = new cancionLDC();

	

	while (opc == 1) {
		cout << "Desea agregar una nueva cancion al " << tipo << endl;
		cout << "	1-Si " << endl;
		cout << "	0-No" << endl;
		cin >> opc;
		if (opc == 1){
			agregarCancion(cldc);
		}
	}

	cout << endl;
	if (a != NULL){
		a->insertarAlbum(cldc);
	}
	if (strcmp(tipo, "album") == 0){
		lAlbumes->insertar(cldc);
	}
	if (strcmp(tipo, "genero") == 0){
		lGeneros->insertar(cldc);
	}
	if (strcmp(tipo, "playList") == 0){
		lPlayList->insertar(cldc);
	}
	
	return cldc;
}

void agregarAutor(){
	autor *a = new autor();
	int opc = 0;
	cout << "ingrese el nombre del autor" << endl;
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
		agregarLista(a, "album");
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
			agregarLista(NULL, "album" );
			break;
		case 4:
			agregarCancion(NULL);
			break;
		case 0:
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
		cout << "( 3 ) Eliminar por Nombre" << endl;
		cout << "( 0 ) Regresar" << endl;
		cin >> opc;

		switch (opc){
		case 1:
			all->mostrarLista();
			break;
		case 2:
			cout << "ingrese el nombre del autor a eliminar" << endl;
			cin >> nombre;
			lAutores->eliminarAutor(nombre);
			break;

		case 3:
			cout << "ingrese el nombre de la cancion a eliminar" << endl;
			cin >> nombre;
			all->eliminar(nombre);
			break;
		case 0:cout << " " << endl;
			break;
		default: cout << "Opcion no valida..." << endl;

		}// fin del switch
		system("pause");

	} while (opc != 0);


}



void agregarALaLista(){
	int opc = 0;
	cout << "Seleccione el playlist" << endl;
	lPlayList->mostrar();
	cin >> opc;
	if (lPlayList->get(opc) != NULL){
		cout << "Seleccione la cancion que desea Agregar" << endl;
		
	}
}

void playlists(){

	int x;
	int opc = 0;
	do {
		printTag();
		cout << "                            Editar Playlists" << endl;
		cout << endl;
		cout << "( 1 ) Nueva Playlist" << endl;
		cout << "( 2 ) Editar Playlist" << endl;
		cout << "( 3 ) Eliminar Playlist" << endl;
		cout << "( 0 ) Regresar" << endl;
		cin >> opc;

		switch (opc){
		case 1:
			agregarLista(NULL, "playList");
			break;
		case 2:
			agregarALaLista();
			break;
		case 3:

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
		cout << "( 4 ) Crear Playlists" << endl;
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

void removeCharsFromString(string &str, char* charsToRemove) {
	for (unsigned int i = 0; i < strlen(charsToRemove); ++i) {
		str.erase(remove(str.begin(), str.end(), charsToRemove[i]), str.end());
	}
}


int _tmain(int argc, _TCHAR* argv[])
{

	lPlayList = new listaDeListas();
	lAlbumes = new listaDeListas();;
	lGeneros = new listaDeListas();;
	lAutores = new autorList();
	all = new cancionLDC("All");







	string lel = "C:\\Users\\Juan\\Desktop\\a.mp3";
	removeCharsFromString(lel, "\"");
	char kek[50];
	strcpy_s(kek, lel.c_str());

	all->agregar("test", kek);
	cout << kek << endl;

	lPlayList->insertar(all);
	system("pause");



	menu();

	system("pause");
	return 0;
}
