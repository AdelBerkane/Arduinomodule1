#include <stdio.h>
#include <stdlib.h>
#include "donnee.h"
#include "action.h"

     void lancement (int *tab, int *n){
     int i = 0;
     char *token;
     char Fsnl[10000];
     FILE * Fpointer;
     Fpointer = fopen("bacon.csv","r");
     while (fgets(Fsnl ,10000,Fpointer)!= NULL)
        {

       token = strtok(Fsnl, ";");


  while( token != NULL ) {

      tab[i]=atoi(token);
      *n = *n+1;

      token = strtok(NULL, ";");
      i++;
   }
   }
 }
void modif (int tab[],battement T[], int n ,int *n2 )
{
	int i ,j=0 ;

	for (i=0;i<n;i=i+2)
{
   T[j].tmp=tab[i];

   j++;

   *n2=*n2+1 ;
}
    j=0 ;

	for (i=1;i<n;i=i+2)
{
   T[j].pouls=tab[i];

   j++;
}
}
