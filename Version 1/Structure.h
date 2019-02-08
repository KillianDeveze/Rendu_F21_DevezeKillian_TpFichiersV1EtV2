#ifndef STRUCTURE_H_INCLUDED
#define STRUCTURE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#define TAILLE 50

typedef struct CarteIdentite{
    int ID;
    char Nom[TAILLE];
    char Prenom[TAILLE];
    char Adresse[TAILLE];
    char CodePostale[TAILLE];
    char Ville[TAILLE];
}CarteIdentite;


extern void InitCarte(CarteIdentite *Macarte);
extern void IncreId(CarteIdentite *Macarte);

#endif // STRUCTURE_H_INCLUDED
