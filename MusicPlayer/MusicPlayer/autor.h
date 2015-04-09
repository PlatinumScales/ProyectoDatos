#pragma once

class autorList;
class listaDeListas;
class autor
{
	
private:
	char* nombre; //Nombre del solista o banda
	listaDeListas* albumes;
	autorList* grupo;
public:
	autor();
	~autor();

};

