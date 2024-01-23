//NOME LOOP 7 SEGMENTOS
//CURSO SIGNAL SPARK
//AUTOR JOSE LUIZ RYBARCZYK FILHO

// DEFINICAO DOS PINOS DO ARDUINO CONECTADO AOS SEGMENTOS DO DISPLAY
const int segmentPins[] = {7, 8, 9, 10, 11, 12, 13};

void setup() {
 //CONFIGURACAO DOS PINOS DE SAIDA DO DISPLAY
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
}


void displayDigit0() {
  // // MAPEAMENTO DOS SEGMENTOS PARA O DIGITO 0
  const int digitSegments[7] = {1, 1, 1, 0, 1, 1, 1}; // Invertido

  // EXIBE O DIGITO 0 NO DISPLAY
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], !digitSegments[i]); // Invertido
  }
}

void displayDigit1() {
  // // MAPEAMENTO DOS SEGMENTOS PARA O DIGITO 1
  const int digitSegments[7] = {1, 0, 0, 0, 0, 0, 1}; // Invertido

  // EXIBE O DIGITO 1 NO DISPLAY
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], !digitSegments[i]); // Invertido
  }
}


void displayDigit2() {
  // // MAPEAMENTO DOS SEGMENTOS PARA O DIGITO 2
  const int digitSegments[7] = {0, 1, 1, 1, 0, 1, 1}; // Invertido

  // EXIBE O DIGITO 2 NO DISPLAYy
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], !digitSegments[i]); // Invertido
  }
}

void displayDigit3() {
  // // MAPEAMENTO DOS SEGMENTOS PARA O DIGITO 3
  const int digitSegments[7] = {1, 0, 1, 1, 0, 1, 1}; // Invertido

  // EXIBE O DIGITO 3 NO DISPLAY
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], !digitSegments[i]); // Invertido
  }
}

void displayDigit4() {
  // // MAPEAMENTO DOS SEGMENTOS PARA O DIGITO 4
  const int digitSegments[7] = {1, 0, 0, 1, 1, 0, 1}; // Invertido

  // EXIBE O DIGITO 4 NO DISPLAY
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], !digitSegments[i]); // Invertido
  }
}

void displayDigit5() {
  // // MAPEAMENTO DOS SEGMENTOS PARA O DIGITO 5
  const int digitSegments[7] = {1, 0, 1, 1, 1, 1, 0}; // Invertido

  // EXIBE O DIGITO 50 NO DISPLAY
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], !digitSegments[i]); // Invertido
  }
}


void displayDigit6() {
  // // MAPEAMENTO DOS SEGMENTOS PARA O DIGITO 6
  const int digitSegments[7] = {1, 1, 1, 1, 1, 1, 0}; // Invertido

  // EXIBE O DIGITO 6 NO DISPLAY
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], !digitSegments[i]); // Invertido
  }
}


void displayDigit7() {
  // // MAPEAMENTO DOS SEGMENTOS PARA O DIGITO 7
  const int digitSegments[7] = {1, 0, 0, 0, 0, 1, 1}; // Invertido

  // EXIBE O DIGITO 7 NO DISPLAY
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], !digitSegments[i]); // Invertido
  }
}


void displayDigit8() {
  // // MAPEAMENTO DOS SEGMENTOS PARA O DIGITO 8
  const int digitSegments[7] = {1, 1, 1, 1, 1, 1, 1}; // Invertido

  // EXIBE O DIGITO 8 NO DISPLAY
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], !digitSegments[i]); // Invertido
  }
}

void displayDigit9() {
  // MAPEAMENTO DOS SEGMENTOS PARA O DIGITO 9
  const int digitSegments[7] = {1, 0, 1, 1, 1, 1, 1}; // Invertido

  // EXIBE O DIGITO 9 NO DISPLAY
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], !digitSegments[i]); // Invertido
  }
}

void loop() {
  // EXIBE OS DIGITOS NO DISPLAY
  displayDigit0();
  delay(1000);
  displayDigit1();
  delay(1000);
  displayDigit2();
  delay(1000);
  displayDigit3();
  delay(1000);
  displayDigit4();
  delay(1000);
  displayDigit5();
  delay(1000);
  displayDigit6();
  delay(1000);
  displayDigit7();
  delay(1000);
  displayDigit8();
  delay(1000);
  displayDigit9();
  delay(1000);
}

