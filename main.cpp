#include "Playlist.h"
#include "Cancion.h"
#include "Artista.h"
#include "Radio.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

//Menú principal
void menu();
void menuCrear();

int main(){
    Cancion* cancion;
    Artista* artista;
    Playlist* playlist;
    Radio* radio;
    vector<Cancion*> listaCanciones;
    vector<Artista*> listaArtistas;
    vector<Playlist*> listaPlaylists;
    vector<Radio*> listaRadios;

    bool v1 = true;
    int men = -1;

    bool v2 = true;
    int men2 = -1;

    while(v1){
        do{
          menu();
          cin >> men;

          switch (men) {
            case 1:{//Crear
              v2 = true;
              while(v2){
                  do{
                    menuCrear();
                    cin >> men2;
                    switch (men2) {
                      case 1:{//Crear Artista
                        string nombreArtista;
                        cout << "Agregar artistas" << endl;
                        cout << "Nombre Artista" << endl;
                        cin >> nombreArtista;

                        artista = new Artista(nombreArtista);

                        listaArtistas.push_back(artista);

                        cout << "Agregado exitosamente" << endl;

                      }break;
                      case 2:{//Crear Playlist
                        string nombrePlaylist;
                        cout << "Agregar Playlist" << endl;
                        cout << "Nombre Playlist" << endl;
                        cin >> nombrePlaylist;

                        playlist = new Playlist(nombrePlaylist);
                        /*


                        playlist->setCancion
                        */
                        listaPlaylists.push_back(playlist);



                        cout << "Agregado exitosamente" << endl;
                      }break;
                      case 3:{//Crear Canción
                        string nombreCancion;
                        string generoCancion;
                        int duracionCancion;
                        int posArtista = -1;
                        int posPlaylist = -1;

                        cout << "Crear canciones" << endl;

                        cout << "Nombre de canción: " << endl;
                        cin >> nombreCancion;

                        cout << "Género: " << endl;
                        cin >> generoCancion;

                        cout << "Duración en segundos: " << endl;
                        cin >> duracionCancion;

                        cout << "Lista de Artistas: " << endl;

                        for(int i = 0; i < listaArtistas.size(); i++){
                          cout << i << " - " <<
                          listaArtistas.at(i)->getNombre() << endl;
                        }
                        cout << "Seleccione un artista para agregar canción" << endl;
                        cin >> posArtista;
                        cancion = new Cancion(
                          nombreCancion,generoCancion,duracionCancion,0);

                        listaArtistas.at(posArtista)->setCancion(cancion);

                        for(int i = 0; i < listaPlaylists.size(); i++){
                          cout << i << " - " <<
                          listaPlaylists.at(i)->getNombre() << endl;
                        }
                        cout << "Seleccione un playlist para agregar canción" << endl;
                        cin >> posPlaylist;

                        listaPlaylists.at(posPlaylist)->setCancion(cancion);

                        cout << "Agregado exitosamente"<< endl;
                      }break;
                      case 4:{//Crear Radio
                        string nombreRadio;
                        string generoRadio;
                        cout << "Crear Radio" << endl;

                        cout << "Nombre de Radio: " << endl;
                        cin >> nombreRadio;

                        cout << "Genero de Radio: " << endl;
                        cin >> generoRadio;

                        radio = new Radio(nombreRadio,generoRadio);
                        listaRadios.push_back(radio);

                        cout << "Agregado exitosamente"<< endl;

                      }break;
                      case 0:{}break;
                      default:{//Crear Artista
                        cout << "Opción incorrecta" << endl;
                      }break;
                    }
                  }while(men2 !=0);
                  v2 = false;
              }//Final while para crear

            }
              break;
            case 2:{//Mostrar
              cout << "Mostrar Playlists" << endl;
              for(int i = 0; i < listaPlaylists.size(); i++){
                cout << i << " - " <<
                listaPlaylists.at(i)->getNombre() << endl;
              }
              cout << endl << endl;
              cout << "Mostrar Radios" << endl;
              for(int i = 0; i < listaRadios.size(); i++){
                cout << i << " - " <<
                listaRadios.at(i)->getNombre() << endl;
              }
              cout << endl << endl;
            }
              break;
            case 3:{//Reproductor
              
            }
              break;
            case 0:{
              cout << "Saliendo..." << endl;
            }
              break;
            default:
              cout << "Opción inválida" << endl << endl;
              break;

          }//End switch menu
        }while(men!=0);
        v1 = false;
    }//End While Menu

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
        << "3 - Canciones" << endl
        << "4 - Radio" << endl
        << "0 - Regresar" << endl
        << "Seleccione una opción: " << endl;
}
