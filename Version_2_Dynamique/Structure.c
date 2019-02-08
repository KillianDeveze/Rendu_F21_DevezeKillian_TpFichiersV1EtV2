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
    if((Macarte->Nom=malloc(TAILLE*sizeof(char)))==NULL){

            return;
    }else{

        gets(Macarte->Nom);

    }
    printf("Indiquez prenom du client\n");
    if((Macarte->Prenom=malloc(TAILLE*sizeof(char)))==NULL){

            return;
    }else{

        gets(Macarte->Prenom);

    }


    printf("Indiquez adresse du client\n");
     if((Macarte->Adresse=malloc(TAILLE*sizeof(char)))==NULL){

            return;
    }else{

        gets(Macarte->Adresse);

    }
    printf("Indiquez ville du client\n");
     if((Macarte->Ville=malloc(TAILLE*sizeof(char)))==NULL){

            return;
    }else{

        gets(Macarte->Ville);

    }

    printf("Indiquez code postale du client\n");
     if((Macarte->CodePostale=malloc(TAILLE*sizeof(char)))==NULL){

            return;
    }else{

        gets(Macarte->CodePostale);

    }
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



void FreeStruct(CarteIdentite Macarte){

    free(Macarte.Adresse);
    free(Macarte.CodePostale);
    free(Macarte.Nom);
    free(Macarte.Prenom);
    free(Macarte.Ville);




}
