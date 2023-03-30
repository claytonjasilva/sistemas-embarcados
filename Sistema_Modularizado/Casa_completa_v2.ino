#include <string.h>
//Variaveis Cena Iluminação
int lightPin = 3;
int lightPin2 = 4;
int lightPin3 = 5;
int lightPin4 = 6;
int lightPin5 = 7;
int lightPin6 = 8;
int lightPin7 = 9;

//Variaveis Cena Detecção de Gases
int Pinbuzzer = 10; //PINO UTILIZADO PELO BUZZER
int PinA0 = A0;//PINO UTILIZADO PELO SENSOR DE GÁS MQ-2
int Med_Dig = 2; //PINO UTILIZADO PELO MEDIDOR DIGITAL
int leitura_sensor = 120;//DEFININDO UM VALOR LIMITE (NÍVEL DE GÁS NORMAL)

void setup() {
  // put your setup code here, to run once:

  //Inicializa a serial
  Serial.begin(9600);
  
  //Pinos Cena Iluminação
  pinMode(lightPin, OUTPUT);
  pinMode(lightPin2, OUTPUT);
  pinMode(lightPin3, OUTPUT);
  pinMode(lightPin4, OUTPUT);
  pinMode(lightPin5, OUTPUT);
  pinMode(lightPin6, OUTPUT);
  pinMode(lightPin7, OUTPUT);
 

  //Pinos Cena Detecção de Gases
  pinMode(PinA0, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(Pinbuzzer, OUTPUT); //DEFINE O PINO COMO SAÍDA

}



void luz(){

  String receivedString = "";
  String receivedString1 = "";
  String receivedString2 = "";
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

    if(receivedString == "11")
      digitalWrite(lightPin6,HIGH);
    if(receivedString == "10")
      digitalWrite(lightPin6,LOW);

    Serial.println(receivedString3);

    if(receivedString == "13")
      digitalWrite(lightPin7,HIGH);
    if(receivedString == "12")
      digitalWrite(lightPin7,LOW);

  }

}


//Funções Cena Detecção de Gases

void gas(){
  int valor_analogico = analogRead(PinA0); //VARIÁVEL RECEBE O VALOR LIDO NO PINO ANALÓGICO
  Serial.print("Leitura: "); //EXIBE O TEXTO NO MONITOR SERIAL
  Serial.println(valor_analogico);// MOSTRA NO MONITOR SERIAL O VALOR LIDO DO PINO ANALÓGICO
  if (valor_analogico > leitura_sensor){//SE VALOR LIDO NO PINO ANALÓGICO FOR MAIOR QUE O VALOR LIMITE, FAZ 
  Serial.write("gas");
  digitalWrite(Pinbuzzer, LOW); //ATIVA O BUZZER E O MESMO EMITE O SINAL SONORO
  digitalWrite(Med_Dig, HIGH); //ATIVA O MEDIDOR DIGITAL(LED VERMELHO)
  }else{ //SENÃO, FAZ
  Serial.write("normal");
  digitalWrite(Pinbuzzer, HIGH);//BUZZER DESLIGADO
  }
  delay(1000); //INTERVALO DE 100 MILISSEGUNDOS
  }



void loop() {
  // put your main code here, to run repeatedly:

  luz();
  gas();
}
