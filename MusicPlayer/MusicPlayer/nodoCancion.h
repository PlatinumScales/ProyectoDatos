#pragma once
class nodoCancion
{
public:
	nodoCancion();
	~nodoCancion();

private:
	nodoCancion* anterior;
	nodoCancion* siguiente;
};

