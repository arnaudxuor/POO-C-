#ifndef SEGMENT_H
#define SEGMENT_H

///////////////////////////////////////////////////////////
//   header inclus dans tous les fichiers sources        //
///////////////////////////////////////////////////////////
#include "bmp.h"
#include <fstream>
#include <iostream>
#include <cassert>
#include <cmath>
#include "point.h"



class rectangle: public point     //La classerectangle est une classe fille
{                               //de la classe point
protected :                     //Membres priv�s
    int x2, y2;                 //On a besoin d'un deuxi�me point pour tracer le rectangle
    ULONG couleur2;

public :
    rectangle();                                          //Constructeur par d�faut
    rectangle(SHORT, SHORT, ULONG, SHORT, SHORT, ULONG);  //Constructeur avec param�tres
    rectangle(rectangle &);                                 //Constructeur par recopie

    void affichers(Bmp &, int, int);                    //Affichage d'un rectangle sur l'image
    void surface();
    void translate(SHORT, SHORT);      //Translation d'un rectangle
    void inclus(SHORT,SHORT);


};

#endif //SEGMENT_H
