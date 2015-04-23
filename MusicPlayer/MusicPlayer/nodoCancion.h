#pragma once
class nodoCancion
{
public:
	nodoCancion();
	nodoCancion(char *);
	~nodoCancion();
	nodoCancion *getSgte();
	nodoCancion *getAnte();
	void setSgte(nodoCancion *);
	void setAnte(nodoCancion *);
	
	
	//objeto cancion? 
	
	//nombre por ahora
	char nombre[30];


	char * getNombre();

private:
	nodoCancion* anterior;
	nodoCancion* siguiente;
};

