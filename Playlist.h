#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <vector>
using std::vector;

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
        void setNombre();
        void setListaCanciones(vector<Cancion*>);
        void setCancion(Cancion*);

};

#endif
