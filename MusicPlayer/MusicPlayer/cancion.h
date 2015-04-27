#pragma once
class cancion
{
private:
	char nombre[20];
	int duracion;
	char path[40];



	
public:
	cancion();
	cancion(char *,char*);
	~cancion();

char *getNombre();
	void setNombre(char *);


	char *getPath();
	void setPath(char *);

};

