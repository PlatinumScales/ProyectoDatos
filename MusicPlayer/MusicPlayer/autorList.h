#include "nodoAutor.h"

class autorList
{
private:
	nodoAutor *cab;

public:
	autorList(void);
	~autorList(void);

	nodoAutor *getCab();
	void setCab(nodoAutor *);

	nodoAutor *dirNodo(char *);
	bool insertarAutor(autor *);
	bool vacia();
	bool eliminarAutor(char *);
	bool modificarAutor(char *, char *);
	bool buscar(char *);
	void desplegarLISTA();
	nodoAutor *DirULTIMO();
};