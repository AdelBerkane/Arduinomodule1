#include "cardio.h"
int verifcardio(int val, int seuil, int valeurPrecedente){
  if (val > seuil) { 
    if (valeurPrecedente <= seuil) { 
      loop();
    }
  }
}

int calculcardio(int tempsDetection, int previous, int seuil){
  if (tempsDetection > (previous + seuil)){  // ce n'est pas seulement du bruit?
    loop();
  }
}
