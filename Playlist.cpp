#include "Playlist.h"
#include "Cancion.h"

#include <vector>
using std::vector;

//Constructores
Playlist::Playlist(){
    this->nombre = "";
    this->listaCanciones;
}

Playlist::Playlist(string nombre){
    this->nombre = nombre;
}
//Destructor
Playlist::~Playlist(){
}

//Getters
string Playlist::getNombre(){
    return this->nombre;
}

vector<Cancion*> Playlist::getListaCanciones(){
    return this->listaCanciones;
}

//Setters
void Playlist::setListaCanciones(vector<Cancion*> listaCanciones){
    this-> listaCanciones = listaCanciones;
}

void Playlist::setCancion(Cancion* cancion){
    this->listaCanciones.push_back(cancion);
}

void Playlist::setNombre(string nombre){
    this->nombre = nombre;
}
