#include "Fichier.h"

#define CHAINETEST "Utilisateur"
#define TAILLELECTURE 255

//**************************
//Principe : Proc�dure qui va �crire dans le fichier la carte d'identit� que l'utilisateur aura saisi au pr�alable
//Entr�e: pFile et Macarte
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
         perror("Erreur de cr�ation de fichier");
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
//Entr�e: pFile un fichier de type FILE
//
//Sortie: Affichage �crit du contenu de pFile
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
//Principe : Fonction qui permet de v�rifier si il y'a d�j� des Utilisateur de saisie et ainsi mettre � jour l'ID
//Entr�e: pFile
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
