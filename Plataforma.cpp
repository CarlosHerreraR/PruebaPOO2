#include "Plataforma.h"
#include "Catalogo.h"

Plataforma::Plataforma()
{
    system("clear");
    bool bSalir = false;
        
    while (!bSalir)
    {
        string sUsuario = "";
        string sContrasena = "";
        cout << "--- Bievenido a Netflix ---" << endl;
        cout << "Captura tu usuario:" << endl;
        cin >> sUsuario;
        cin.clear();            //LIMPIA EL INDICADOR DE ERROR, SI TECLEA UN VALOR DIFERENTE A NUMERO
        cin.ignore(1000,'\n');  //BORRA UNO O MAS CARACTERES DEL BUFFER, \N ES EL DELIMITADOR O CARACTER FINAL DE ENTRADA
        cout << "Captura tu contraseña:" << endl;
        cin >> sContrasena;
        cin.clear();            //LIMPIA EL INDICADOR DE ERROR, SI TECLEA UN VALOR DIFERENTE A NUMERO

        if ( sUsuario != "" && sContrasena != "" )
        {
            bSalir = true;
            system("clear");
            Menu();
        }
        else
        {
            system("clear");
            cout << "Captura el usuario y la contraseña correcta" << endl;
        }
    }
}

void Plataforma::Menu() {
    bool bSalir = false;
    Catalogo oCatalogo;
        
    while (!bSalir)
    {
        int iOpcion = 0;
        cout << "--- Netflix ---" << endl;
        cout << "Selecciona una opción:" << endl;
        cout << "1 - Cargar archivo de catalogo" << endl;
        cout << "2 - Consultar videos por mayor calificación" << endl;
        cout << "3 - Consultar videos por genero" << endl;
        cout << "4 - Consultar episodios de una serie" << endl;
        cout << "5 - Consultar peliculas por mayor calificación" << endl;
        cout << "6 - Calificar un video" << endl;
        cout << "7 - Salir" << endl;
        cin >> iOpcion;
        cin.clear();            //LIMPIA EL INDICADOR DE ERROR, SI TECLEA UN VALOR DIFERENTE A NUMERO
        cin.ignore(1000,'\n');  //BORRA UNO O MAS CARACTERES DEL BUFFER, \N ES EL DELIMITADOR O CARACTER FINAL DE ENTRADA
        try
        {
            if (iOpcion == 0)
            {
                system("clear");
                throw std::runtime_error("Error, selecciona una opcion correcta.");
            }
        }
        catch (const exception& p_error)
        {
            system("clear");
            cout << p_error.what() << "\n";
        }        

        if ( iOpcion == 1 )
        {
            system("clear");
            oCatalogo.CargaVideos();
        }
        else if ( iOpcion == 2 )
        {
            system("clear");
            oCatalogo.VideosporCalificacion();
        }
        else if ( iOpcion == 3 )
        {
            system("clear");
            oCatalogo.VideosporGenero();
        }
        else if ( iOpcion == 4 )
        {
            system("clear");
            oCatalogo.EpisodiosPorSerie();
        }
        else if ( iOpcion == 5 )
        {
            system("clear");
            oCatalogo.PeliculasporCalificacion();
        }
        else if ( iOpcion == 6 )
        {
            system("clear");
            oCatalogo.CalificarVideo();
        }
        else if ( iOpcion == 7 )
        {
            bSalir = true;
            system("clear");
        }
        else if ( iOpcion != 0 )
        {
            system("clear");
            cout << "Captura una opción correcta." << endl;
        }
    }
}