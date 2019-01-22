#include <iostream>
#include <cmath>
#include "point.h"
#include "bmp.h"

using namespace std;

point::point() //Constructeur par d�faut
{
    x=0;    //Donne par d�faut au point 0 en abscisse
    y=0;    //Donne par d�faut au point 0 en ordonn�e
    couleur = ROUGE; //Donne par d�faut au point la couleur rouge
}

point::point(SHORT abs=0, SHORT ord=0, ULONG c=ROUGE) //Constructeur avec param�tres
{
    /*Si aucun param�tre n'est choisit, les param�tres par d�faut sont les m�mes
    que pour le constructeur par d�faut : 0 en abscisse, 0 en ordonn�e et la couleur rouge*/
    x=abs; //Donne en abscisse du point le param�tre abs
    y=ord; //Donne en ordonn�e du point le param�tre ord
    couleur = c; //Donne au point la couleur c
}

point::point(point &p)  //Constructeur par recopie
{
    x=p.x; //Recopie l'abscisse d'un point et l'attribue au nouveau point
    y=p.y; //Recopie l'ordonn�e d'un point et l'attribue au nouveau point
    couleur = p.couleur; //Recopie la couleur d'un point et l'attribue au nouveau point
}

void point::afficher_p() //Affiche les caract�ristiques du point sur la console
{
    //Cette fonction sert surtout pour d�buguer quand l'image n'�tait pas encore cr��e
    cout<<x<<" . "<<y<<" . "<<std::hex<<couleur<<endl<<std::dec;
    //Pour afficher la couleur, on passe en h�xad�cimal, puis on repasse � la fin en d�cimal
}

void point::translation(SHORT abs, SHORT ord) //Translation d'un point
{
    x=x+abs; //On ajoute une valeur � l'ancienne abscisse
    y=y+ord; //On ajoute une valeur � l'ancienne ordonn�e
}

void point::homothetie(SHORT abs, SHORT ord, SHORT rapport) //Homoth�tie d'un point
{
    x=abs+(x-abs)*rapport; //On ajoute au nouveau point la diff�rence entre ce point et le point actuel
    y=ord+(y-abs)*rapport; //multipli� par le rapport souhait�
}

void point::rotation(double angle) //Rotation d'un point
{
    short a=x; //On met l'abscisse du point dans une variable pour ne pas la perdre
    double angle2=angle*(M_PI/180); //Conversion en radian
    x=a*cos(angle2)-y*sin(angle2); //Nouvelle abscisse du point
    y=a*sin(angle2)+y*cos(angle2); //Nouvelle ordonn�e du point
}

void point::afficher(Bmp &im, int LARGEUR, int HAUTEUR) //Affiche un point sur l'image
{
    if((x<LARGEUR)&&(y<HAUTEUR))  /*Si l'abscisse du point est inf�rieure � la largeur de l'image et si
    l'ordonn�e du point est inf�rieure � la hauteur de l'image, c'est-�-dire si le point est dans l'image.*/
    {
        im.setpixel(x,y,ROUGE); //On affiche le point
    }
    else
    {
        cout<<"Le point est en dehors de l'image."<<endl; //Sinon message d'erreur
    }
}

int point::abscisse() //Retourne l'abscisse du point
{
    return x; //retourne l'abscisse du point
}

int point::ordonnee() //Retourne l'ordonn�e du point
{
    return y; //retourne l'ordonn�e du point
}

void point::set_x( SHORT abs) //Fixe l'abcisse du point
{
    x=abs; //Nouvelle abscisse du point
}

void point::set_y(SHORT ord) //Fixe l'ordonn�e du point
{
    y=ord; //Nouvelle ordonn�e du point
}

void point::set_c(ULONG c) //Fixe la couleur du point
{
    couleur=c; //Nouvelle couleur du point
}
