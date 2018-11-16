#include "Cancion.h"

//Constructores
Cancion::Cancion(){
    this->titulo = "";
    this->genero = "";
    this->duracion = 0;
    this->reproducciones = 0;
}

Cancion::Cancion(string titulo, string genero, int duracion, int reproducciones){
    this->titulo = titulo;
    this->genero = genero;
    this->duracion = duracion;
    this->reproducciones = reproducciones;
}

//Destructor
Cancion::~Cancion(){
}

//Getters
string Cancion::getTitulo(){
    return this->titulo;
}

string Cancion::getGenero(){
    return this->genero;
}

int Cancion::getDuracion(){
    return this->duracion;
}

int Cancion::getReproducciones(){
    return this->reproducciones;
}

//Setters
void Cancion::setTitulo(string titulo){
    this->titulo = titulo;
}

void Cancion::setGenero(string genero){
    this->genero = genero;
}

void Cancion::setDuracion(int duracion){
    this->duracion = duracion;
}

void Cancion::setReproducciones(int reproducciones){
    this->reproducciones = reproducciones;
}
