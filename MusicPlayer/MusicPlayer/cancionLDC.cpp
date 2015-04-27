#include "stdafx.h"
#include "cancionLDC.h"


cancionLDC::cancionLDC()
{
}


cancionLDC::cancionLDC( char *_nombre)
{
	strcpy_s(nombre ,_nombre);
}


cancionLDC::~cancionLDC()
{
}

nodoCancion *cancionLDC::getCab()
{

	return cab;
}

cancionLDC *cancionLDC::getAnte(){
	return this->anterior;
}
void cancionLDC::setAnte(cancionLDC *nAnte){
	this->anterior = nAnte;
}

cancionLDC *cancionLDC::getSgt(){
	return this->siguiente;

}
void cancionLDC::setSgt(cancionLDC *nDesp){
	this->siguiente = nDesp;
}

void cancionLDC::setCab(nodoCancion *_cab){
	this->cab = _cab;

}


int cancionLDC::getSize(){
		int counter = 0;


		if (!vacia()){
			nodoCancion  *aux = getCab();
			do{
				counter++;
				aux = aux->getSgte();
			} while (aux != getCab());

		}


		return counter;
	
	}
	bool cancionLDC::vacia(){
		return (cab == NULL);
	}
	nodoCancion *cancionLDC::dirNodo(char * nombre){

		if (vacia()) return NULL;
		else{

			nodoCancion *aux = getCab();

			do{
				if (strcmp(aux->getCancion()->getNombre(), nombre) == 0){
					//encontro el nodo

					return aux;
				}

				aux = aux->getSgte();
			} while (aux != getCab());



		}

		return NULL;

	}

	bool cancionLDC::agregar(char *nombre, char * path ){
		// insertar al final y no se puede insertar repetidos
		bool ok = true;
		if (vacia())
		{
			nodoCancion *nuevo = new nodoCancion(nombre,path);
			nuevo->setAnte(nuevo);
			nuevo->setSgte(nuevo);
			setCab(nuevo);
		}
		else{

			//si no esta insertando la cabeza
			nodoCancion *aux = getCab();
			do {
				if (strcmp( aux->getCancion()->getNombre(),nombre ) == 0){
					ok = false;
				}
				aux = aux->getSgte();
			} while (aux != getCab() && ok);
			if (ok){
				nodoCancion *nuevaCancion = new nodoCancion(nombre,path);
				nuevaCancion->setAnte(getCab()->getAnte());
				nuevaCancion->setSgte(getCab());
				getCab()->getAnte()->setSgte(nuevaCancion);
				getCab()->setAnte(nuevaCancion);
			}
		}
	
		return ok;
	
	}
	bool cancionLDC::eliminar(char * nombre){
	
	

		if (vacia()) return false;
		else{

			nodoCancion  *aux = getCab();

			do{
				if (strcmp(aux->getCancion()->getNombre(), nombre) == 0){
					//el valor de aux se debe eliminar entonces.

					if (getSize() == 1){
						delete aux;
						this->setCab(NULL);
						return true;
					}
					if (aux == getCab()) setCab(aux->getSgte()); //si aux hubiese sido la cabeza y se debe eliminar
					
				
						aux->getAnte()->setSgte(aux->getSgte());
						aux->getSgte()->setAnte(aux->getAnte());
						delete aux;
						return true;
					



				}
				aux = aux->getSgte();

			} while (aux != getCab());


		}
	

		return false;

	
	}

	bool cancionLDC::agregar(nodoCancion *nuevo){
		// insertar al final y no se puede insertar repetidos
		bool ok = true;
		if (vacia())
		{
			
			nuevo->setAnte(nuevo);
			nuevo->setSgte(nuevo);
			setCab(nuevo);
		}
		else{

			//si no esta insertando la cabeza
			nodoCancion *aux = getCab();
			do {
				if (strcmp( aux->getCancion()->getNombre(),nuevo->getCancion()->getNombre() ) == 0){
					ok = false;
				}
				aux = aux->getSgte();
			} while (aux != getCab() && ok);
			if (ok){
			
				nuevo->setAnte(getCab()->getAnte());
				nuevo->setSgte(getCab());
				getCab()->getAnte()->setSgte(nuevo);
				getCab()->setAnte(nuevo);
			}
		}
	
		return ok;
	
	}
	bool cancionLDC::agregar(cancion *test){
		// insertar al final y no se puede insertar repetidos
		nodoCancion *nuevo = new nodoCancion(test);
		bool ok = true;
		if (vacia())
		{

			nuevo->setAnte(nuevo);
			nuevo->setSgte(nuevo);
			setCab(nuevo);
		}
		else{

			//si no esta insertando la cabeza
			nodoCancion *aux = getCab();
			do {
				if (strcmp(aux->getCancion()->getNombre(), nuevo->getCancion()->getNombre()) == 0){
					ok = false;
				}
				aux = aux->getSgte();
			} while (aux != getCab() && ok);
			if (ok){

				nuevo->setAnte(getCab()->getAnte());
				nuevo->setSgte(getCab());
				getCab()->getAnte()->setSgte(nuevo);
				getCab()->setAnte(nuevo);
			}
		}

		return ok;

	}
	/*
	bool cancionLDC::eliminar(char * nombre){
	
	

		if (vacia()) return false;
		else{

			nodoCancion  *aux = getCab();

			do{
				if (strcmp(aux->getNombre(), nombre) == 0){
					//el valor de aux se debe eliminar entonces.

					if (getSize() == 1){
						delete aux;
						this->setCab(NULL);
						return true;
					}
					if (aux == getCab()) setCab(aux->getSgte()); //si aux hubiese sido la cabeza y se debe eliminar
					
				
						aux->getAnte()->setSgte(aux->getSgte());
						aux->getSgte()->setAnte(aux->getAnte());
						delete aux;
						return true;
					



				}
				aux = aux->getSgte();

			} while (aux != getCab());


		}
	

		return false;

	
	}*/
	void cancionLDC::mostrarLista(){
		nodoCancion *aux = getCab();
		if (aux != NULL){
			do {
				cout << "Nodo posicion en memoria: " << aux->getCancion()->getNombre() << endl;
				aux = aux->getSgte();
			} while (aux != getCab());
			
		}
		else{
			cout << "|Lista Vacia| " << endl;
		}
	}
	
	

