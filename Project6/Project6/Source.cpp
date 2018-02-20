#include "MyForm.h"

#include <iostream>
#include <string>


using namespace std;
struct livro
{
	string titulo;
	string autor;
	string editora;
	string cota;
	int numero;
	string estado;
	livro*next;
};
struct livro*LL = NULL;