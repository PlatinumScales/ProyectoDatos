#include "stdafx.h"
#include "cancionLDC.h"


cancionLDC::cancionLDC()
{
}


cancionLDC::cancionLDC( char *_nombre)
{
	strcpy_s(nombre ,nombre);
}


cancionLDC::~cancionLDC()
{
}

nodoCancion *cancionLDC::getCab()
{

	return cab;
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
				if (strcmp(aux->getNombre(), nombre) == 0){
					//encontro el nodo

					return aux;
				}

				aux = aux->getSgte();
			} while (aux != getCab());



		}

		return NULL;

	}

	bool cancionLDC::agregar(char *nombre ){
		// insertar al final y no se puede insertar repetidos
		bool ok = true;
		if (vacia())
		{
			nodoCancion *nuevo = new nodoCancion(nombre);
			nuevo->setAnte(nuevo);
			nuevo->setSgte(nuevo);
			setCab(nuevo);
		}
		else{

			//si no esta insertando la cabeza
			nodoCancion *aux = getCab();
			do {
				if (strcmp( aux->getNombre(),nombre ) == 0){
					ok = false;
				}
				aux = aux->getSgte();
			} while (aux != getCab() && ok);
			if (ok){
				nodoCancion *nuevaCancion = new nodoCancion(nombre);
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
				if (strcmp(aux->getNombre, nombre) == 0){
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
	void cancionLDC::mostrarLista(){
		nodoCancion *aux = getCab();
		if (aux != NULL){
			do {
				cout << "Nodo posicion en memoria: " << aux << endl;;
				aux = aux->getSgte();
			} while (aux != getCab());
			
		}
		else{
			cout << "|Lista Vacia| " << endl;
		}
	}
	
	

