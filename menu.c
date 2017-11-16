#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int choice;

void allumage()
{
    printf("Choissiez 1 pour l'allumage moitie, 2 pour chenille, 3 pour l'allumage entier \n");
    scanf(" %d", &choice);

    if (choice == 1);
    {
      fputs("#define ANALOG_IN 0 int LED1, LED2, LED3, LED4, LED5, LED6, LED7, LED8, LED9, LED10; int tab[] = {2,3,4,5,6,7,8,9,10,11}; int i; void setup() { Serial.begin(9600); LED1 = 2; LED2 = 3;  LED3 = 4; LED4 = 5; LED5 = 6; LED6 = 7;LED7 = 8;LED8 = 9;LED9 = 10;LED10 = 11;pinMode(LED1, OUTPUT);pinMode(LED2, OUTPUT);pinMode(LED3, OUTPUT);pinMode(LED4, OUTPUT);pinMode(LED5, OUTPUT);pinMode(LED6, OUTPUT);pinMode(LED7, OUTPUT);pinMode(LED8, OUTPUT);pinMode(LED9, OUTPUT);pinMode(LED10, OUTPUT);digitalWrite(LED1, LOW);digitalWrite(LED2, LOW);digitalWrite(LED3, LOW);digitalWrite(LED4, LOW);digitalWrite(LED5, LOW);digitalWrite(LED6, LOW);digitalWrite(LED7, LOW);digitalWrite(LED8, LOW);digitalWrite(LED9, LOW); digitalWrite(LED10, LOW);}  void loop()   digitalWrite(LED1, HIGH);digitalWrite(LED2, LOW);digitalWrite(LED3, HIGH);digitalWrite(LED4, LOW);digitalWrite(LED5, HIGH);digitalWrite(LED6, LOW);digitalWrite(LED7, HIGH);digitalWrite(LED8, LOW);digitalWrite(LED9, HIGH);digitalWrite(LED10, LOW);  }",fichier);


    else if (choice == 2);

    fputs("#define ANALOG_IN 0 \n int LED1, LED2, LED3, LED4, LED5, LED6, LED7, LED8, LED9, LED10; \n int tab[] = {2,3,4,5,6,7,8,9,10,11}; \n  int i; \n void setup() \n { Serial.begin(9600); \n LED1 = 2; \n LED2 = 3; \n LED3 = 4; \n LED4 = 5; \n LED5 = 6; \n LED6 = 7; \n LED7 = 8; \n LED8 = 9; \n LED9 = 10; \n LED10 = 11; \n pinMode(LED1, OUTPUT); \n pinMode(LED2, OUTPUT); \n pinMode(LED3, OUTPUT); \n pinMode(LED4, OUTPUT); \n pinMode(LED5, OUTPUT); \n pinMode(LED6, OUTPUT); \n pinMode(LED7, OUTPUT); \n pinMode(LED8, OUTPUT); \n pinMode(LED9, OUTPUT); \n pinMode(LED10, OUTPUT); \n digitalWrite(LED1, LOW);digitalWrite(LED2, LOW);digitalWrite(LED3, LOW);digitalWrite(LED4, LOW);digitalWrite(LED5, LOW);digitalWrite(LED6, LOW);digitalWrite(LED7, LOW);digitalWrite(LED8, LOW);digitalWrite(LED9, LOW); digitalWrite(LED10, LOW);}void loop() { for (i=0 ;i<=11; i+=2) { digitalWrite(tab[i], HIGH); delay(1000);digitalWrite(tab[i], LOW);}}",fichier);

    else if (choice == 3);

    fputs("#define ANALOG_IN 0 int LED1, LED2, LED3, LED4, LED5, LED6, LED7, LED8, LED9, LED10; int tab[] = {2,3,4,5,6,7,8,9,10,11}; int i; void setup() { Serial.begin(9600); LED1 = 2; LED2 = 3;  LED3 = 4; LED4 = 5; LED5 = 6; LED6 = 7;LED7     = 8;LED8 = 9;LED9 = 10;LED10 = 11;pinMode(LED1, OUTPUT);pinMode(LED2, OUTPUT);pinMode(LED3, OUTPUT);pinMode(LED4, OUTPUT);pinMode(LED5, OUTPUT);pinMode(LED6, OUTPUT);pinMode(LED7, OUTPUT);pinMode(LED8, OUTPUT);pinMode(LED9, OUTPUT);pinMode(LED10, OUTPUT);digitalWrite(LED1, LOW);digitalWrite(LED2, LOW);digitalWrite(LED3, LOW);digitalWrite(LED4, LOW);digitalWrite(LED5, LOW);digitalWrite(LED6, LOW);digitalWrite(LED7, LOW);digitalWrite(LED8, LOW);digitalWrite(LED9, LOW); digitalWrite(LED10, LOW);} void loop() {digitalWrite(LED1, HIGH); digitalWrite(LED2, HIGH); digitalWrite(LED3, HIGH); digitalWrite(LED4, HIGH);digitalWrite(LED5, HIGH); digitalWrite(LED6, HIGH); digitalWrite(LED7,  HIGH); digitalWrite(LED8, HIGH); digitalWrite(LED9, HIGH); digitalWrite(LED10, HIGH); delay (300) digitalWrite(LED1, LOW); digitalWrite(LED2, LOW); digitalWrite(LED3, LOW); digitalWrite(LED4, LOW); digitalWrite(LED5, LOW); digitalWrite(LED6, LOW); digitalWrite(LED7, LOW); digitalWrite(LED8, LOW); digitalWrite(LED9, LOW); digitalWrite(LED10, LOW); ")

