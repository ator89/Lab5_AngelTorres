#ifndef CANCION_H
#define CANCION_H

#include <string>
using std::string;

class Cancion{
    private:
        string titulo;
        string genero;
        int duracion;
        int reproducciones;
    public:
        //Constructores
        Cancion();
        Cancion(string, string, int, int);
        
        //Destructor
        ~Cancion();
        
        //Getters
        string getTitulo();
        string getGenero();
        int getDuracion();
        int getReproducciones();
        
        //Setters
        void setTitulo(string);
        void setGenero(string);
        void setDuracion(int);
        void setReproducciones(int);
};

#endif
