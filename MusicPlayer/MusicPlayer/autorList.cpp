#include "autorList.h"
#include "stdafx.h"

autorList::autorList()
{
	setCab(NULL);
}


autorList::~autorList()
{
}

nodoAutor *autorList::getCab(){
	return this->cab;
}
void autorList::setCab(nodoAutor *_cab){
	this->cab, _cab;
}
nodoAutor *autorList::dirNodo(char* _autor){
	//Devuelve la direccion del nodo cuyo nombre de autor sea _autor
	//getOAutor es el nombre del info***

	nodoAutor *aux = getCab();
	bool encontrado = true;
	while (aux != NULL &&	!encontrado){

		if (aux->getOAutor()->getNombre() != _autor)
			aux = aux->getSgte();
		else
			encontrado = true;
	}
	return aux;
}

bool autorList::insertarAutor(char *_autor){
	//hace el recorrido en el dirNodo si lo encuentra entonces no lo inserta
	//si no lo encuentra entonce lo inserta
	nodoAutor *aux = dirNodo(_autor);
	bool insertar;
	if (aux == NULL){//inserta al inicio si recorrio el dirNodo y no lo encontro
		nodoAutor *temp = new nodoAutor();
		temp->getOAutor()->setNombre(_autor);
		temp->setSgte(getCab());
		setCab(temp);
		return insertar = true;
	}
	else{
		return insertar = false;
	}
}

bool autorList::vacia(){
	bool vacia;
	if (getCab() == NULL)
		return vacia = true;
	else
	{
		return vacia = false;
	}
}
bool autorList::eliminarAutor(char * _autor){

	bool eliminado = false;
	//nodoAutor *aux = aux->getSgte();//como no tiene getAnte entonces lo situo en el segundo nodo por si lo tengo que eliminar luego
	//setearlo a la cabeza y eliminarlo
	nodoAutor *aux = getCab();
	if (!vacia())
		while (aux != NULL && eliminado)
			if (aux->getOAutor()->getNombre() == _autor){
		aux = getCab();
		setCab(aux->getSgte());
		delete aux;
		eliminado = true;
			}
	if (aux == getCab())
		setCab(aux->getSgte());
	else{
		nodoAutor *ant = aux;
		aux = aux->getSgte();
		if (aux != NULL){
			aux->setSgte(aux->getSgte()->getSgte());
			delete aux;
			eliminado = true;
		}
		else{
			aux = aux->getSgte();
		}
		return eliminado;
	}
}

bool autorList::modificarAutor(char *_buscar, char *nuevoAutor){
	//retorna true si encontro el autor que se va a modificar si lo encuentra entonces lo modifica.
	nodoAutor *aux = getCab();
	bool modificado = true;
	while (aux != NULL){
		if (aux->getOAutor()->getNombre() == _buscar){
			aux->getOAutor()->setNombre(nuevoAutor);
			return modificado;
		}
		else{
			aux = aux->getSgte();
		}
	}
	return modificado = false;
}

char *autorList::buscar(char * _autor){
	//devuelve el nombre del autor si fue encontrado
	nodoAutor *aux = getCab();
	bool encontrado = true;
	while (aux != NULL &&	!encontrado){
		if (aux->getOAutor()->getNombre() != _autor)
			aux = aux->getSgte();
		else {
			encontrado = true;
			return aux->getOAutor()->getNombre();
		}
	}
	encontrado = false;
}

void autorList::desplegarLISTA(){
	//Desplegar los datos de la estructura 
	nodoAutor *aux = getCab();
	cout << "Lista de autores" << endl;
	while (aux != NULL){
		cout << "Nombre " << aux->getOAutor()->getNombre() << endl;
		aux = aux->getSgte();

	}
} 