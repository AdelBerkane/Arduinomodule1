int battement, pasdebattement;
int data[200], i;
float voltage;
void setup(){
  for(i=2; i<12; i++)
  pinMode(i, OUTPUT);
Serial.begin(115200);
  
}//setup


void loop(){
 

      battement=0;//on initialise la valeur à 0
      pasdebattement = 1023;//Lorsque le signal est au maximum
      
      for(i=200; i>0; i--){
        data[i] = data[i-1];
        
      if(data[i]>battement)
      battement=data[i];
      if(data[i]<pasdebattement)
      pasdebattement=data[i];
    }//for loop
    
    data[0] = analogRead(0);
    float voltage = data[0]*(5.0/1023.0);//Nous aurons l'affichage en voltage au lieu de Bytes pour plus de facilités de lecture avec le graphique
    Serial.println(voltage);
    
 

  delay(5);
  
  
  //Nous allons contrôler les LEDS pour qu'elles s'allument en fonction de l'intensité du signal
  if((battement-pasdebattement)>150){
  
  
  if(data[0] > (battement-.95*(battement-pasdebattement)))//Si la lecture est supérieure à 95% du signal maximal
  digitalWrite(2, HIGH);
  else
  digitalWrite(2,LOW); 
  
  if(data[0] > (battement-.9*(battement-pasdebattement)))// Si la lecture est supérieure à 90% du signal etc..
  digitalWrite(3, HIGH);
  else
  digitalWrite(3,LOW); 
 
    if(data[0] > (battement-.8*(battement-pasdebattement)))
  digitalWrite(4, HIGH);
  else
  digitalWrite(4,LOW); 
    if(data[0] > (battement-.7*(battement-pasdebattement)))
  digitalWrite(5, HIGH);
  else
  digitalWrite(5,LOW); 
    if(data[0] > (battement-.6*(battement-pasdebattement)))
  digitalWrite(6, HIGH);
  else
  digitalWrite(6,LOW); 
    if(data[0] > (battement-.5*(battement-pasdebattement)))
  digitalWrite(7, HIGH);
  else
  digitalWrite(7,LOW); 
    if(data[0] > (battement-.4*(battement-pasdebattement)))
  digitalWrite(8, HIGH);
  else
  digitalWrite(8,LOW); 
    if(data[0] > (battement-.3*(battement-pasdebattement)))
  digitalWrite(9, HIGH);
  else
  digitalWrite(9,LOW); 
     if(data[0] > (battement-.2*(battement-pasdebattement)))
  digitalWrite(10, HIGH);
  else
  digitalWrite(10,LOW); 
     if(data[0] > (battement-.1*(battement-pasdebattement)))
  digitalWrite(11, HIGH);
  else
  digitalWrite(11,LOW);  
  
  }//span check
  else
  for(i=2; i<12; i++)
  digitalWrite(i,LOW);
  


    

}//loop


