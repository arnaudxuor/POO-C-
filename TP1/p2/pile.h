#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED

#define TAILLE 10

class t_pile
{
private:
    int jeton[TAILLE];          // d�claration tableau
    int imax;                   // d�claration imax

public:
    //t_pile();                   // cr�ation de la fonction
    void initialiser();       // initialisation
    void empiler(int);          // empiler jeton
    void depiler();             // d�piler jeton
    int sommet();               // sommet de la pile
    int dernier_jeton();        // dernier jeton de la pile

};


#endif // PILE_H_INCLUDED
