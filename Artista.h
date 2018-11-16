#ifndef ARTISTA_H
#define ARTISTA_H

#include "Cancion.h"
#include <string>
using std::string;
#include <vector>
using std::vector;

class Artista{
    private:
        string nombre;
        vector<Cancion*> listaCanciones;
        int reproducciones;
    public:
        //Constructores
        Artista();
        Artista(string/*, int*/);
        //Destructor
        ~Artista();

        //Getters
        string getNombre();
        int getReproducciones();
        vector<Cancion*> getListaCanciones();

        //Setters
        void setNombre(string);
        void setReproducciones(int);
        void setListaCanciones(vector<Cancion*>);
        void setCancion(Cancion*);

};

#endif
