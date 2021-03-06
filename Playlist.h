#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Cancion.h"
#include <vector>
using std::vector;

#include <string>
using std::string;

class Playlist{
    private:
        string nombre;
        vector<Cancion*> listaCanciones;
    public:
        //Constructores
        Playlist();
        Playlist(string);

        //Destructor
        ~Playlist();

        //Getters
        string getNombre();
        vector<Cancion*> getListaCanciones();
        
        //Setters
        void setNombre(string);
        void setListaCanciones(vector<Cancion*>);
        void setCancion(Cancion*);

};

#endif
