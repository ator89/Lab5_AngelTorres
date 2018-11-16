#ifndef RADIO_H
#define RADIO_H

#include "Cancion.h"
#include <vector>
using std::vector;
#include <string>
using std::string;

class Radio{
    private:
        string nombre;
        string genero;
        vector<Cancion*> listaCanciones;
    public:
        //Constructores
        Radio();
        Radio(string, string);
        //Destructor
        ~Radio();

        //Getters
        string getNombre();
        string getGenero();
        vector<Cancion*> getListaCanciones();

        //Setters
        void setNombre(string);
        void setGenero(string);
        void getListaCanciones(vector<Cancion*>);
        void setCancion(Cancion*);
};

#endif
