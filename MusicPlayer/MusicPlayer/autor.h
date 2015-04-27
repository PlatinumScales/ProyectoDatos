#pragma once
#include "listaDeListas.h"

class autorList;
class listaDeListas;
class autor
{
private:
	char nombre[20]; //Nombre del solista o banda
	listaDeListas* albumes;
	/*autorList* grupo;*/

public:
	autor(void);
	~autor(void);
	autor(char *);

	char *getNombre();
	void setNombre(char *);

	listaDeListas *getAlbumes();

	bool insertarAlbum(cancionLDC * alb);

	autorList *getGrupo();
	void setGrupo(autorList *);
};

