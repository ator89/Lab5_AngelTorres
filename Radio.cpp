#include "Cancion.h"
#include "Radio.h"

#include <vector>
using std::vector;

#include <string>
using std::string;

//Constructores
Radio::Radio(){
    this->nombre = "";
    this->genero = "";
    this->listaCanciones;
}

Radio::Radio(string nombre, string genero){
    this->nombre = nombre;
    this->genero = genero;
}
//Destructor
Radio::~Radio(){
}

//Getters
string Radio::getNombre(){
    return this->nombre;
}

string Radio::getGenero(){
    return this->genero;
}

vector<Cancion*> Radio::getListaCanciones(){
    return this->listaCanciones;
}

//Setters
void Radio::setNombre(string nombre){
    this->nombre = nombre;
}

void Radio::setGenero(string genero){
    this->genero = genero;
}

void Radio::setListaCanciones(vector<Cancion*> listaCanciones){
    this->listaCanciones = listaCanciones;
}

void Radio::setCancion(Cancion* cancion){
    this->listaCanciones.push_back(cancion);
}
