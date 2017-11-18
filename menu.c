#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include "action.h"
#include "donnee.h"

int affichmenu ()
{ int a;
printf ("Pour l'ordre du fichier csv tapez : 1 \n\n");

printf ("Pour l'ordre croissant selon le temps tapez : 2 \n\n");

printf ("Pour l'ordre decroissant selon le temps tapez : 3 \n\n");

printf ("Pour l'ordre croissant selon le pouls tapez : 4 \n\n");

printf ("Pour l'ordre croissant selon le temps tapez : 5 \n\n");

printf ("Pour rechercher et afficher les donnees dans un temps particulier tapez : 6 \n\n") ;

printf ("Pour afficher la moyenne de pouls dans une plage de temps tapez : 7 \n\n");

printf ("Pour afficher le nombre de ligne actuellement en memoire tapez : 8 \n\n");

printf ("Pour afficher le maximaum de pouls tapez : 9 \n\n");

printf ("Pour afficher le minimaum de pouls tapez : 10 \n\n ");

printf ("Tapez 0 pour quitter \n\n");
}
void affichparticulier (battement T[], int n2 )

{ int j,a ;

scanf ("%d",&a);

printf ("\n");

do
{

if (a==1)

{for (j=0;j<n2;j++){

printf ("%d \t",T[j].tmp);
printf ("%d \n",T[j].pouls);
 }
}
else if (a==2){

croiss_temps (T,n2);
}
else if (a==3)

decroiss_temps(T,n2);

else if (a==4)

croiss_pouls(T,n2);

else if (a==5)

decroiss_pouls(T,n2);

else if (a==6)

temps_particulier (T,n2);

else if (a==7)

temps_donnee (T,n2);

else if (a==8)

nombre_de_donnee(n2);

else if (a==9)

pouls_max (T,n2);

else if (a==10)

pouls_min(T,n2);

scanf("%d",&a);

}while (a!=0);{

printf ("Au revoir");}


}
