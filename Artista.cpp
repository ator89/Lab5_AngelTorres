#include "Cancion.h"
#include "Artista.h"

#include <vector>
using std::vector;

#include <string>
using std::string;

//Constructores
Artista::Artista(){
    this->nombre = "";
    this->listaCanciones;
    this->reproducciones = 0;
}

Artista::Artista(string nombre/*, int reproducciones*/){
    this->nombre = nombre;
    //this->reproducciones = reproducciones;
}

Artista::~Artista(){
}

//Getters
string Artista::getNombre(){
    return this->nombre;
}

int Artista::getReproducciones(){
    return this->reproducciones;
}

vector<Cancion*> Artista::getListaCanciones(){
    return this->listaCanciones;
}

//Setters
void Artista::setNombre(string nombre){
    this->nombre = nombre;
}

void Artista::setReproducciones(int reproducciones){
    this->reproducciones = reproducciones;
}

void Artista::setCancion(Cancion* cancion){
    this->listaCanciones.push_back(cancion);
}
