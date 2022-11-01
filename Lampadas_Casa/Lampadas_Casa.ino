#include <string.h>

int L1 = 41, L2 = 43, L3 = 45, L4 = 47, L5 = 49;

bool lampadas[] = {false, false, false, false, false};
int len_lampadas = sizeof(lampadas);
int pinos[] = {L1, L2, L3, L4, L5};
String lampadas_str[] = {"L1+", "L1-", "L2+", "L2-", "L3+", "L3-", "L4+", "L4-", "L5+", "L5-"};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
}

void set_true() {
  for (int i = 0; i < len_lampadas; i++) {
    lampadas[i] = true;
  }
}

void set_false() {
  for (int i  = 0; i < len_lampadas; i++) {
    lampadas[i] = false;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  String a;
  a = Serial.readString();
  String off = a.substring(0, 3);
  String on = a.substring(0, 2);
  if (off.equals("OFF")){
    set_false();
  }else if (on.equals("ON")){
    set_true();
  }else {
    
    for (int i = 0; i < a.length(); i += 3) {
  
      String lampada = a.substring(i, i + 4);
      Serial.println(lampada);
  
      if (lampada.equals(lampadas_str[0])){
        lampadas[0] = true;
      } else if (lampada.equals(lampadas_str[1])) {
        lampadas[0] = false;
      } else if (lampada.equals(lampadas_str[2])) {
        lampadas[1] = true;
      } else if (lampada.equals(lampadas_str[3])) {
        lampadas[1] = false;
      } else if (lampada.equals(lampadas_str[4])) {
        lampadas[2] = true;
      } else if (lampada.equals(lampadas_str[5])) {
        lampadas[2] = false;
      } else if (lampada.equals(lampadas_str[6])) {
        lampadas[3] = true;
      } else if (lampada.equals(lampadas_str[7])) {
        lampadas[3] = false;
      } else if (lampada.equals(lampadas_str[8])) {
        lampadas[4] = true;
      } else if (lampada.equals(lampadas_str[9])) {
        lampadas[4] = false;
      } else {
        continue;
      }
    }
  }
  
   for (int i = 0; i < len_lampadas; i++) {
     if (lampadas[i] == true) {
      digitalWrite(pinos[i], HIGH);
     } else {
      digitalWrite(pinos[i], LOW);
     }
   }
  }
