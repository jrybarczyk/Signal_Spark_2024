//NOME LIGAR E DESLIGAR LED COM BOTAO
//CURSO SIGNAL SPARK
//AUTOR JOSE LUIZ RYBARCZYK FILHO

// DEFINE BOTAO COMO PORTA 7 
#define BOTAO 7

// DEFINE LED COMO PORTA 10
#define LED 10
 
// DEFINE ESTADO DO LED
bool ESTADO_LED = LOW;  

void setup() {
  // CONFIGURAÇÃO DA PORTA 7 PARA LER O ESTADO DO BOTAO
  pinMode(BOTAO, INPUT_PULLUP); 
  
  // CONFIGURAÇÃO DA PORTA 10 COMO SAÍDA
  pinMode(LED, OUTPUT);

  // Inicializa o LED no estado definido
  digitalWrite(LED, ESTADO_LED);
}
 
void loop() {
  // AGUARDA O BOTAO SER PRESSIONADO
  while (digitalRead(BOTAO) == HIGH) {
    // LOOP VAZIO
  }

  // ESPERA UNS 50 MILISSEGUNDOS
   delay(50);

  // ALTERNA O ESTADO DO LED
  if (ESTADO_LED == LOW) {

    ESTADO_LED = HIGH;
  
  } else {
  
    ESTADO_LED = LOW;
  
  }
  
  digitalWrite(LED, ESTADO_LED);

  // ESPERA O BOTAO SER SOLTO
  while (digitalRead(BOTAO) == LOW) {
    // LOOP VAZIO
  }

  // ESPERA UNS 50 MILISSEGUNDOS
  delay(50);
}
