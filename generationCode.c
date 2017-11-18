#include "generationCode.h"

void generation()
{
    int choice;
    printf("Choissiez 1 pour l'allumage moitie, 2 pour chenille, 3 pour l'allumage entier \n");
    scanf(" %d", &choice);
FILE* fichier=fopen("param.h","w+");

if(fichier==NULL)
    exit(1);

if(fichier!=NULL)
{

 if (choice == 1)
    {

fputs("#define ANALOG_IN 0", fichier);

fputs("int LED1, LED2, LED3, LED4, LED5, LED6, LED7, LED8, LED9, LED10;", fichier);
fputs("int tab[] = {2,3,4,5,6,7,8,9,10,11};", fichier);
fputs("int i;", fichier);

fputs("void setup() {", fichier);
  fputs("Serial.begin(9600);", fichier);
 fputs(" LED1 = 2;", fichier);
  fputs("LED2 = 3;", fichier);
  fputs("LED3 = 4;", fichier);
fputs("LED4 = 5;", fichier);
 fputs(" LED5 = 6;", fichier);
 fputs(" LED6 = 7;", fichier);
 fputs(" LED7 = 8;", fichier);
 fputs(" LED8 = 9;", fichier);
fputs("  LED9 = 10;", fichier);
 fputs(" LED10 = 11;", fichier);

fputs("  pinMode(LED1, OUTPUT);", fichier);
fputs("  pinMode(LED2, OUTPUT);", fichier);
fputs("  pinMode(LED3, OUTPUT);", fichier);
fputs("  pinMode(LED4, OUTPUT);", fichier);
fputs("  pinMode(LED5, OUTPUT);", fichier);
fputs("  pinMode(LED6, OUTPUT);", fichier);
fputs("  pinMode(LED7, OUTPUT);", fichier);
fputs("  pinMode(LED8, OUTPUT);", fichier);
fputs("  pinMode(LED9, OUTPUT);", fichier);
fputs("  pinMode(LED10, OUTPUT);", fichier);

  //Mise à 0V de chaque pin
fputs("  digitalWrite(LED1, LOW);", fichier);
fputs("  digitalWrite(LED2, LOW);", fichier);
fputs("  digitalWrite(LED3, LOW);", fichier);
fputs("  digitalWrite(LED4, LOW);", fichier);
fputs("  digitalWrite(LED5, LOW);", fichier);
fputs("  digitalWrite(LED6, LOW);", fichier);
fputs("  digitalWrite(LED7, LOW);", fichier);
fputs("  digitalWrite(LED8, LOW);", fichier);
fputs("  digitalWrite(LED9, LOW);", fichier);
fputs("  digitalWrite(LED10, LOW);}", fichier);


fputs("void loop(){", fichier);


fputs("  digitalWrite(LED1, HIGH);", fichier);
fputs("  digitalWrite(LED2, LOW);", fichier);
fputs("  digitalWrite(LED3, HIGH);", fichier);
fputs("  digitalWrite(LED4, LOW);", fichier);
fputs("  digitalWrite(LED5, HIGH);", fichier);
fputs("  digitalWrite(LED6, LOW);", fichier);
fputs("  digitalWrite(LED7, HIGH);", fichier);
fputs("  digitalWrite(LED8, LOW);", fichier);
fputs("  digitalWrite(LED9, HIGH);", fichier);
fputs("  digitalWrite(LED10, LOW);  } ", fichier);

    }

    else if (choice == 2)
    {

  fputs("#define ANALOG_IN 0", fichier);

fputs("int LED1, LED2, LED3, LED4, LED5, LED6, LED7, LED8, LED9, LED10;", fichier);
fputs("int tab[] = {2,3,4,5,6,7,8,9,10,11};", fichier);
fputs("int i;", fichier);

fputs("void setup() {", fichier);
  fputs("Serial.begin(9600);", fichier);
 fputs(" LED1 = 2;", fichier);
  fputs("LED2 = 3;", fichier);
  fputs("LED3 = 4;", fichier);
fputs("LED4 = 5;", fichier);
 fputs(" LED5 = 6;", fichier);
 fputs(" LED6 = 7;", fichier);
 fputs(" LED7 = 8;", fichier);
 fputs(" LED8 = 9;", fichier);
fputs("  LED9 = 10;", fichier);
 fputs(" LED10 = 11;", fichier);

fputs("  pinMode(LED1, OUTPUT);", fichier);
fputs("  pinMode(LED2, OUTPUT);", fichier);
fputs("  pinMode(LED3, OUTPUT);", fichier);
fputs("  pinMode(LED4, OUTPUT);", fichier);
fputs("  pinMode(LED5, OUTPUT);", fichier);
fputs("  pinMode(LED6, OUTPUT);", fichier);
fputs("  pinMode(LED7, OUTPUT);", fichier);
fputs("  pinMode(LED8, OUTPUT);", fichier);
fputs("  pinMode(LED9, OUTPUT);", fichier);
fputs("  pinMode(LED10, OUTPUT);", fichier);

  //Mise à 0V de chaque pin
fputs("  digitalWrite(LED1, LOW);", fichier);
fputs("  digitalWrite(LED2, LOW);", fichier);
fputs("  digitalWrite(LED3, LOW);", fichier);
fputs("  digitalWrite(LED4, LOW);", fichier);
fputs("  digitalWrite(LED5, LOW);", fichier);
fputs("  digitalWrite(LED6, LOW);", fichier);
fputs("  digitalWrite(LED7, LOW);", fichier);
fputs("  digitalWrite(LED8, LOW);", fichier);
fputs("  digitalWrite(LED9, LOW);", fichier);
fputs("  digitalWrite(LED10, LOW);}", fichier);


fputs("void loop(){", fichier);

 fputs(" for (i=0 ;i<=11; i+=2) {", fichier);

  fputs(" digitalWrite(tab[i], HIGH);", fichier);

  fputs(" delay(1000);", fichier);
  fputs("    digitalWrite(tab[i], LOW);}}", fichier);

    }
    else if (choice == 3)

{

fputs("#define ANALOG_IN 0", fichier);

fputs("int LED1, LED2, LED3, LED4, LED5, LED6, LED7, LED8, LED9, LED10;", fichier);
fputs("int tab[] = {2,3,4,5,6,7,8,9,10,11};", fichier);
fputs("int i;", fichier);

fputs("void setup() {", fichier);
  fputs("Serial.begin(9600);", fichier);
 fputs(" LED1 = 2;", fichier);
  fputs("LED2 = 3;", fichier);
  fputs("LED3 = 4;", fichier);
fputs("LED4 = 5;", fichier);
 fputs(" LED5 = 6;", fichier);
 fputs(" LED6 = 7;", fichier);
 fputs(" LED7 = 8;", fichier);
 fputs(" LED8 = 9;", fichier);
fputs("  LED9 = 10;", fichier);
 fputs(" LED10 = 11;", fichier);

fputs("  pinMode(LED1, OUTPUT);", fichier);
fputs("  pinMode(LED2, OUTPUT);", fichier);
fputs("  pinMode(LED3, OUTPUT);", fichier);
fputs("  pinMode(LED4, OUTPUT);", fichier);
fputs("  pinMode(LED5, OUTPUT);", fichier);
fputs("  pinMode(LED6, OUTPUT);", fichier);
fputs("  pinMode(LED7, OUTPUT);", fichier);
fputs("  pinMode(LED8, OUTPUT);", fichier);
fputs("  pinMode(LED9, OUTPUT);", fichier);
fputs("  pinMode(LED10, OUTPUT);", fichier);

  //Mise à 0V de chaque pin
fputs("  digitalWrite(LED1, LOW);", fichier);
fputs("  digitalWrite(LED2, LOW);", fichier);
fputs("  digitalWrite(LED3, LOW);", fichier);
fputs("  digitalWrite(LED4, LOW);", fichier);
fputs("  digitalWrite(LED5, LOW);", fichier);
fputs("  digitalWrite(LED6, LOW);", fichier);
fputs("  digitalWrite(LED7, LOW);", fichier);
fputs("  digitalWrite(LED8, LOW);", fichier);
fputs("  digitalWrite(LED9, LOW);", fichier);
fputs("  digitalWrite(LED10, LOW); }", fichier);


fputs("void loop() {", fichier);

fputs("  digitalWrite(LED1, HIGH);", fichier);
fputs("  digitalWrite(LED2, HIGH);", fichier);
fputs("  digitalWrite(LED3, HIGH);", fichier);
fputs("  digitalWrite(LED4, HIGH);", fichier);
fputs("  digitalWrite(LED5, HIGH);", fichier);
fputs("  digitalWrite(LED6, HIGH);", fichier);
fputs("  digitalWrite(LED7, HIGH);", fichier);
fputs("  digitalWrite(LED8, HIGH);", fichier);
fputs("  digitalWrite(LED9, HIGH);", fichier);
fputs("  digitalWrite(LED10, HIGH);", fichier);

fputs(" delay(300);", fichier);

fputs("  digitalWrite(LED1, LOW);", fichier);
fputs("  digitalWrite(LED2, LOW);", fichier);
fputs("  digitalWrite(LED3, LOW);", fichier);
fputs("  digitalWrite(LED4, LOW);", fichier);
fputs("  digitalWrite(LED5, LOW);", fichier);
fputs("  digitalWrite(LED6, LOW);", fichier);
fputs("  digitalWrite(LED7, LOW);", fichier);
fputs("  digitalWrite(LED8, LOW);", fichier);
fputs("  digitalWrite(LED9, LOW);", fichier);
fputs("  digitalWrite(LED10, LOW);", fichier);

}

}
}

