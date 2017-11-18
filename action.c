#include <stdio.h>
#include <stdlib.h>
#include "action.h"
#include "donnee.h"

void croiss_temps(battement T[] , int n2)

{int j , x , u , k;

for (k=0;k<n2;k++){

for (j=0;j<n2-1;j++)

{if (T[j].tmp>T[j+1].tmp)

{
	x=T[j].tmp ;

	T[j].tmp=T[j+1].tmp;

	T[j+1].tmp=x ;

	u=T[j].pouls ;

	T[j].pouls=T[j+1].pouls;

	T[j+1].pouls=u ;
}
}
}

for (j=0;j<n2;j++)
{

printf ("temps = %d \t",T[j].tmp);

printf ("pouls = %d \n",T[j].pouls);
}
}
void temps_donnee (battement T[],int n2)

{ int a ,b , s=0 , h=0 , j;

float moy ;

printf ("Quel interval de temps? \n ");

scanf ("%d%d",&a,&b);

for (j=0;j<n2;j++)

{if (T[j].tmp>=a&&T[j].tmp<=b)

{s=s+T[j].pouls ;

h=h+1 ;
}
}
moy=s/h ;
printf ("le poul moyen entre %d et %d est : %f ",a,b,moy);
}

void temps_particulier (battement T[],int n2)

{ int x , j ;
printf ("Donnez le temps \n") ;
scanf ("%d",&x);
for(j=0;j<n2;j++)
{if(T[j].tmp==x)
printf ("Le pouls pour le temps %d est %d", T[j].tmp, T[j].pouls);
}
}


void decroiss_temps (battement T[],int n2)
{
int j,x,u,k;

for (k=0; k<n2; k++){

for (j=0; j<n2-1; j++)

{if (T[j].tmp<T[j+1].tmp)
{
	x=T[j].tmp ;
	T[j].tmp=T[j+1].tmp ;
	T[j+1].tmp=x ;

	u=T[j].pouls ;
	T[j].pouls=T[j+1].pouls ;
	T[j+1].pouls=u ;
}
}
}
for (j=0;j<n2;j++)
{

printf ("temps = %d \t",T[j].tmp);
printf ("pouls = %d \n",T[j].pouls);
}
}
void croiss_pouls (battement T[] , int n2)
{
int j , x , u , k;

for (k=0;k<n2;k++){

for (j=0;j<n2-1;j++)

{if (T[j].pouls>T[j+1].pouls)

{
	x=T[j].tmp ;
	T[j].tmp=T[j+1].tmp ;
	T[j+1].tmp=x ;

	u=T[j].pouls ;
	T[j].pouls=T[j+1].pouls ;
	T[j+1].pouls=u ;
}
}
}
for (j=0;j<n2;j++)
{

printf ("pouls = %d \t",T[j].pouls);
printf ("temps = %d \n",T[j].tmp);
}
}

void decroiss_pouls (battement T[] , int n2)
{
int j , x , u , k;

for (k=0;k<n2;k++){

for (j=0;j<n2-1;j++)

{if (T[j].pouls<T[j+1].pouls)
{
	x=T[j].tmp ;

	T[j].tmp=T[j+1].tmp;

	T[j+1].tmp=x ;

	u=T[j].pouls;

	T[j].pouls=T[j+1].pouls ;

	T[j+1].pouls=u ;
}
}
}
for (j=0;j<n2;j++)
{

printf ("pouls = %d \t",T[j].pouls);
printf ("temps = %d \n",T[j].tmp);
}
}
void pouls_max (battement T[], int n2)
{ int j , max  ;
max = T[0].pouls ;
	for (j=0;j<n2;j++)
	{if (max<T[j].pouls)
	max=T[j].pouls ;
	}
	printf ("Le poul maximum enregistré est de : %d \n",max);
}

void pouls_min (battement T[], int n2)
{ int j , min;

min = T[0].pouls;
	for (j=0;j<n2;j++)
	{if (min>T[j].pouls)
	min=T[j].pouls ;
	}
	printf ("le minimum est : %d \n",min);
}

void nombre_de_donnees (int n2)
{printf ("\n le nombre de lignes de données actuellement en mémoire est de %d",n2);

}



