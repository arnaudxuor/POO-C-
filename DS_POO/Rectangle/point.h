#ifndef POINT_H
#define POINT_H

///////////////////////////////////////////////////////////
//   header inclus dans tous les fichiers sources        //
///////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>
#include <cassert>
#include <cmath>
#include "bmp.h"

class point
{
protected : //Membres priv�s de la classe point
    int x, y; //coordonn�es du point
    ULONG couleur; //couleur du point

public :
    point();    //constructeur par d�faut
    point(SHORT, SHORT, ULONG); //constructeur avec param�tres
    point(point &); //constructeur par recopie
    void translation(SHORT, SHORT); //translation d'un point
    void rotation(double); //rotation d'un point
    void homothetie(SHORT, SHORT, SHORT); //homoth�tie d'un point
    void afficher_p(); //afficher les coordonn�es du point sur la console
    int abscisse(); //retourne l'abscisse du point
    int ordonnee(); //retourne l'ordonn�e du point
    void set_x(SHORT); //fixe l'abscisse du point
    void set_y(SHORT); //fixe l'ordonn�e du point
    void set_c(ULONG); //fixe la couleur du point
    void afficher(Bmp &, int, int); //afficher le point sur l'image
};

#endif //POINT_H
