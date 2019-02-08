#include "Fichier.h"

#define CHAINETEST "Utilisateur"
#define TAILLELECTURE 255

//**************************
//Principe : Procédure qui va écrire dans le fichier la carte d'identité que l'utilisateur aura saisi au préalable
//Entrée: pFile et Macarte
//
//Sortie: Fichier.text
//
//Note :
//***************************
void FWrite(FILE* pFile,CarteIdentite Macarte){

     pFile = fopen ("myfile.txt","a"); //=pointeur de fonction
     fflush(stdin);

     if(fopen ("myfile.txt","a")==NULL) //si le chemin du fichier est faux/inexistant
     {
         perror("Erreur de création de fichier");
     }
     else
     {
         fprintf(pFile,"Utilisateur %d\n",Macarte.ID);
         fputc('\n',pFile);
         fputs(Macarte.Nom,pFile);
         fputc('\n',pFile);
         fputs(Macarte.Prenom,pFile);
         fputc('\n',pFile);
         fputs(Macarte.Adresse,pFile);
         fputc('\n',pFile);
         fputs(Macarte.Ville,pFile);
         fputc('\n',pFile);
         fputs(Macarte.CodePostale,pFile);
         fputc('\n',pFile);
     }
     fclose(pFile);
}

 //**************************
//Principe : Fonction qui va permettre de lire notre fichier text
//Entrée: pFile un fichier de type FILE
//
//Sortie: Affichage écrit du contenu de pFile
//
//Note :
//***************************
void FRead(FILE *pFile){

    char cLecture[TAILLELECTURE];

     pFile = fopen ("myfile.txt","r");
     rewind(pFile);

        if(fopen ("myfile.txt","a")==NULL) //si le chemin du fichier est faux/inexistant
     {
         perror("Erreur de lecture de fichier");
     }
     else
     {
         while(fgets(cLecture, TAILLELECTURE,pFile)!=NULL)
         {
               printf("%s",cLecture);

         }

     fclose (pFile);
    }
}


//**************************
//Principe : Fonction qui permet de vérifier si il y'a déjà des Utilisateur de saisie et ainsi mettre à jour l'ID
//Entrée: pFile
//
//Sortie: Valeur de ID
//
//Note :
//***************************
int RecupUtilise(FILE* pFile){

    char sMachaine[TAILLE];
    int nTest = 0;

    pFile = fopen("myfile.txt", "r");
    rewind(pFile);
    while(fgets(sMachaine, 12, pFile)!=NULL){
        if(strcmp(sMachaine,CHAINETEST)==0){
            nTest++;
        }
    }
    fclose(pFile);

    return nTest+1;
}
