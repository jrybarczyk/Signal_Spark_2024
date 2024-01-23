//NOME RANDOM 7 SEGMENTOS
//CURSO SIGNAL SPARK
//AUTOR JOSE LUIZ RYBARCZYK FILHO


// DEFINICAO DOS PINOS DO ARDUINO CONECTADO AOS SEGMENTOS DO DISPLAY
const int segmentPins[] = {7, 8, 9, 10, 11, 12, 13};

void setup() {
 //CONFIGURACAO DOS PINOS DE SAIDA DO DISPLAY
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }

  // INICIALIZACAO DA SEMENTE DO GERADOR DE NUMEROS ALEATORIOS
  randomSeed(analogRead(0));
}

void displayDigit(int digit) {
  // MAPEAMENTO DOS SEGMENTOS PARA OS DIGITOS
  const int digitSegments[10][7] = {
    {1, 1, 1, 0, 1, 1, 1}, // 0
    {1, 0, 0, 0, 0, 0, 1}, // 1
    {0, 1, 1, 1, 0, 1, 1}, // 2
    {1, 0, 1, 1, 0, 1, 1}, // 3
    {1, 0, 0, 1, 1, 0, 1}, // 4
    {1, 0, 1, 1, 1, 1, 0}, // 5
    {1, 1, 1, 1, 1, 1, 0}, // 6
    {1, 0, 0, 0, 0, 1, 1}, // 7
    {1, 1, 1, 1, 1, 1, 1}, // 8
    {1, 0, 1, 1, 1, 1, 1}  // 9
  };

  // EXIBE O DIGITO NO DISPLAY
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], !digitSegments[digit][i]);
  }
}

void displayRandomDigit() {
  // GERA UM NUMERO ALEATORIO ENTRE 0 E 9
  int randomDigit = random(0, 10);

  // EXIBE O DIGITO ALEATORIO NO DISPLAY
  displayDigit(randomDigit);
}

void loop() {
  // CHAMA A FUNCAO PARA EXIBIR UM DIGITO ALEATORIO
  displayRandomDigit();

  // AGUARDA POR ALGUNS SEGUNDOS ANTES DE CHAMAR A FUNCAO NOVAMENTE
  delay(2000);
}

