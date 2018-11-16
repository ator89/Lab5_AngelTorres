#include "Playlist.h"

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
void Cancion::setCancion(Cancion* cancion){
    this->listaCanciones.push_back(cancion);
}

void Cancion::setNombre(string nombre){
    this->nombre = nombre;
}
