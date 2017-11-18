#include "cardio.h"
#include "cardio.c"


int valeurPrecedente = 0;
long previous = 0;

void setup() {
  Serial.begin(115200);
}


void loop() {

  int val, seuil;
  long tempsDetection;

  val = analogRead(0);//le signal analogique sera lu et converti en numérique
  seuil = 500;
  verifcardio(val, seuil, valeurPrecedente);
  tempsDetection = millis();
  calculcardio(tempsDetection, previous, seuil);
  tempsDetection = millis();
  Serial.println( (1000.0 * 60.0) / ((tempsDetection + seuil) - previous),0);
  float voltage = val*(5.0/1023.0);
    Serial.println(voltage);
  previous = tempsDetection;



  valeurPrecedente = val;}
