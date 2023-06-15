#ifndef _CONSULTAS_H
#define _CONSULTAS_H
#include <string>

using namespace std;

class Consultas
{
    public:
        virtual void CalificarVideo(string p_video_nombre, float p_calificacion)=0;
        virtual void VideosporGenero(string p_video_genero)=0;
        virtual void VideosporCalificacion(float p_calificacion)=0;
        virtual void EpisodiosPorSerie(string p_serie_nombre)=0;
        virtual void PeliculasporCalificacion(float p_calificacion)=0;
};

#endif