int lightPin = 2;
int lightPin2 = 3;
int lightPin3 = 4;
int lightPin4 = 5;
int lightPin5 = 6;
int smokeSensorPin = 10;
//int lightPin6 = 8;
//int lightPin7 = 9;

void setup() 
{ 
  pinMode(lightPin, OUTPUT);
  pinMode(lightPin2, OUTPUT);
  pinMode(lightPin3, OUTPUT);
  pinMode(lightPin4, OUTPUT);
  pinMode(lightPin5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  String receivedString = "";
  String receivedString3 = receivedString;
  
  if (Serial.available() > 0) {
    
    while (Serial.available() > 0) {
      receivedString = (Serial.readString ());
    }
    
    Serial.println(receivedString3);
    
    if(receivedString == "1")
      digitalWrite(lightPin,HIGH);  
    if(receivedString == "0")
      digitalWrite(lightPin,LOW);

     Serial.println(receivedString3);

    if(receivedString == "3")
      digitalWrite(lightPin2,HIGH);
    if(receivedString == "2")
      digitalWrite(lightPin2,LOW);

    Serial.println(receivedString3);

    if(receivedString == "5")
      digitalWrite(lightPin3,HIGH);
    if(receivedString == "4")
      digitalWrite(lightPin3,LOW);

    Serial.println(receivedString3);

    if(receivedString == "7")
      digitalWrite(lightPin4,HIGH);
    if(receivedString == "6")
      digitalWrite(lightPin4,LOW);

    Serial.println(receivedString3);

    if(receivedString == "9")
      digitalWrite(lightPin5,HIGH);
    if(receivedString == "8")
      digitalWrite(lightPin5,LOW);

    Serial.println(receivedString3);
  } 

}
