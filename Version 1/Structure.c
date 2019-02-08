#include "Structure.h"

//**************************
//Principe : Procédure qui va demander à l'utilisateur de saisir sa carte d'identité
//Entrée: Macarte
//
//Sortie: Macarte initialisée
//
//Note :
//***************************
void InitCarte(CarteIdentite *Macarte){

    fflush(stdin);

    printf("Indiquez Nom du client\n");
    gets(Macarte->Nom);
    printf("Indiquez prenom du client\n");
    gets(Macarte->Prenom);
    printf("Indiquez adresse du client\n");
    gets(Macarte->Adresse);
    printf("Indiquez ville du client\n");
    gets(Macarte->Ville);
    printf("Indiquez code postale du client\n");
    gets(Macarte->CodePostale);
}

//**************************
//Principe : Fonction qui va incrémenter l'ID a chaque fois que l'on initialise une carte
//Entrée: MaCarte.ID
//
//Sortie:MaCarte.Id+1
//
//Note :
//***************************
void IncreId(CarteIdentite *Macarte){


        Macarte->ID++;

}
