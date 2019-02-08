#ifndef STRUCTURE_H_INCLUDED
#define STRUCTURE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#define TAILLE 50

typedef struct CarteIdentite{
    int ID;
    char* Nom;
    char* Prenom;
    char* Adresse;
    char* CodePostale;
    char* Ville;
}CarteIdentite;
//se renseigner sur les types de donnés abstraites : les piles(LIFO) et les files,Stack

extern void InitCarte(CarteIdentite *Macarte);
extern void IncreId(CarteIdentite *Macarte);
extern void FreeStruct(CarteIdentite Macarte);

#endif // STRUCTURE_H_INCLUDED
