#include <stdio.h>
#include <stdlib.h>
#include "Structure.h"
#include "Fichier.h"
#include "Affichage.h"
//static int i=0;

int main()
{
    CarteIdentite Macarte;
    FILE * pFile=NULL;
    int nChoix;
    Macarte.ID=1;


     if(RecupUtilise(pFile)>=1){
            Macarte.ID=RecupUtilise(pFile);
        }

    printf("Choix 1 : Ecrire dans le fichier");
    printf("\nChoix 2 :Lire le fichier");
    printf("\nChoix 3 :Quittez\n");

    do{
        nChoix=0;
        printf("votre choix : ");
        scanf("%d",&nChoix);
        switch(nChoix){
            case 1: InitCarte(&Macarte);
                    FWrite(pFile,Macarte);
                    IncreId(&Macarte);
                    FreeStruct(Macarte);
                    ;break;
            case 2: FRead(pFile);break;
            case 3: break;
        }

    }while(nChoix!=3);

return 0;
}
