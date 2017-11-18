#include <stdio.h>
#include <stdlib.h>
#include "donnee.h"
#include "action.h"
#include "menu.h"

  int main ()

  {
  int   n2=0 , n=0 ;
  battement T[500];
  int tab[500];
  int menu;
  menu = affichmenu();

  lancement (&tab,&n);
  modif (tab,T,n ,&n2 );
  affichparticulier (T,n2 );

  return 0;

  }
