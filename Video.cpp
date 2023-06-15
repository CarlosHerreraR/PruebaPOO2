#include "Video.h"

Video::Video()
{
}

Video::Video(string p_id, string p_nombre, int p_duracion, float p_calificacion, string p_fecha_estreno)
{
    id = p_id;
    nombre = p_nombre;
    duracion = p_duracion;
    calificacion = p_calificacion;
    fecha_estreno = p_fecha_estreno;
}

string Video::ConsultaVideos() 
{
    return "|Nombre: " + nombre + " |Duración: " + to_string(duracion) + " |Calificación: " + to_string(calificacion) + " |Estreno: " + fecha_estreno;
}

string Video::VideosporCalificacion(float p_calificacion) {
    if ( p_calificacion <= calificacion )
    {
        return ConsultaVideos();
    }
    else
        return "";
}