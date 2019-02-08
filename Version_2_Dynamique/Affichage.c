#include "Affichage.h"

#define TAILLELECTURE 500
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

