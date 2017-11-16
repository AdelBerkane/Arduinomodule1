#include <stdio.h>
#include <stdlib.h>

void generation()
{


    FILE *fichier = NULL;

fichier = fopen("param.h", "w+");

if (fichier != NULL)

{

allumage();



    fclose(fichier);
}

else
{
    printf("Refaites votre choix");
}
return 0;
}
