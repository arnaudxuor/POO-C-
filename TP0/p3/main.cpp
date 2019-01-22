#include <iostream>
//program 3

using namespace std;

int remlplitA(int *A );
int afficheA(int *A);

int main()
{
    int A[10];      //tableau dimension 10

    cout << "Exo1 C++ :\n" << endl;

    remlplitA(A);
    afficheA(A);

    //r�f�rence vers case 5 du tableau :
    int &r = A[5];

    cout << r << endl;  //affiche la r�f�rence r :  A[5]

    r++;    //incr�mente r => A[5] = A[5]+1

    cout << "r++ :" << endl;
    cout << r << endl;  //affiche la r�f�rence r :  A[5]

    int *p = &A[7];     // cr�ation du pointeur p=7
    p++;                // incr�mentation du pointeur : p=8
    (*p)++;             // incr�mentation de la valeur point� : A[p=7+1] = A[p=7+1] +1

    //const = constante
    int *const p2 = &A[5];
    (*p2)++;
    //  p2++;                             Erreur : impossible d'incr�menter le pointeur
    cout << "p2 = " << *p2 << "  " << p2 << endl;

    const int *p3 = &A[5];
    // (*p3)++;                           Erreur : impossible d'incr�menter la valeur point�e
    p3++;
    cout << "p3 = " << *p3 << "  " << p3 << endl;

    const int* const p4 = &A[5];
    //  (*p4)++;                          Erreur : impossible d'incr�menter la valeur point�e
    //   p4++;                            Erreur : impossible d'incr�menter le pointeur


    cout << endl;
    afficheA(A);

    return 0;
}

int remlplitA(int *A ){

    int i;
    int valeur=0;



    for (i=0; i<10; i++)
    {
        cin >> A[i];    //l'utilisateur rentre la valeur dans la case A[i]
    }
}


int afficheA(int *A){

int i;

    for (i=0; i<10; i++)
    {
        cout << "A[" << i << "] = " << A[i] << endl;    //la console affiche la case A[i]
    }

}

