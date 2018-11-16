#include "Playlist.h"
#include "Cancion.h"
#include "Artista.h"
#include "Radio.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//Menú principal
void menu();
void menuCrear();

int main(){
    
    return 0;
}

//Menú principal
void menu(){
    cout << "\t $potifai" << endl
        << "1 - Crear" << endl
        << "2 - Mostrar " << endl
        << "3 - Reproductor" << endl 
        << "0 - Salir" << endl
        << "Seleccione una opción: " << endl;
}

//Menú para crear
void menuCrear(){
    cout << "\tMenú crear" << endl
        << "1 - Artistas" << endl
        << "2 - Playlists" << endl
        << "3 - Radio" << endl
        << "0 - Regresar" << endl
        << "Seleccione una opción: " << endl;
}
