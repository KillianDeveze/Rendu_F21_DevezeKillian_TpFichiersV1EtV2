#ifndef FICHIER_H_INCLUDED
#define FICHIER_H_INCLUDED
#include <string.h>
#include "Structure.h"


//prototype
extern void FWrite(FILE* pFile,CarteIdentite Macarte);
extern void FRead(FILE* pFile);
extern int RecupUtilise(FILE* pFile);

#endif // FICHIER_H_INCLUDED
