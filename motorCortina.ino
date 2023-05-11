// C++ code
//
#define vermelho 2 // pino que conecta o fio vermelho do motor
#define preto 11 // pino que conecta o fio preto do arduino

void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(preto, OUTPUT);
  Serial.begin(9600);
}

// funcao que define o sentido do motor
char defineSentido(int sent){
  if(sent == 1){
    return 'h';
  }
  else if(sent == 2){
    return 'a';
  }
  return 'p';
}

// funcao que faz o motor funcionar
void funcionaMotor(int sent){
  
  char sentido = defineSentido(sent);
  
  if(sentido == 'h'){
    digitalWrite(vermelho, HIGH);
    digitalWrite(preto, LOW);
    delay(5000);
  }
  else if(sentido == 'a'){
    digitalWrite(vermelho, LOW);
    digitalWrite(preto, HIGH);
    delay(5000);
  }
  digitalWrite(vermelho, LOW);
  digitalWrite(preto, LOW);
}

void loop() {
  int sent;
  if(Serial.available()>=1){
    sent = Serial.read();
    sent -= 48;
    funcionaMotor(sent);
  }
}
