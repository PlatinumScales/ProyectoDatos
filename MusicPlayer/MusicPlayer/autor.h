#pragma once

class autorList;
class listaDeListas;
class autor
{
private:
	char nombre[20]; //Nombre del solista o banda
	/*listaDeListas* albumes;
	autorList* grupo;*/

public:
	autor(void);
	~autor(void);
	autor(char *);

	char *getNombre();
	void setNombre(char *);

	///esos no estan hechos en el cpp
	/*listaDeListas *getAlbunes();
	void setAlbunes(listaDeListas *);

	autorList *getGrupo();
	void setGrupo(autorList *);*/
};

