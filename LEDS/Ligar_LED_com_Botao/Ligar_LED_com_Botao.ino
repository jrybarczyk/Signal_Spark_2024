//NOME LED CODIGO MORSE
//CURSO SIGNAL SPARK
//AUTOR JOSE LUIZ RYBARCZYK FILHO

// DEFINE BOTAO COMO PORTA 7 
#define BOTAO 7

// DEFINE ESTADO DO BOTAO COMO DESLIGADO
bool ESTADO_BOTAO =  LOW;

// DEFINE LED COMO PORTA 10
#define LED 10
 
//DEFINE ESTADO DO LED COMO DESLIGADO
bool ESTADO_LED = LOW;  
 

void setup() {
// CONFIGURACAO DA PORTA 7 PARA LER O ESTADO DO BOTAO
  pinMode(BOTAO, INPUT_PULLUP); 
  
 // CONFIGURACAO DA PORTA 10 COMO SAIDA
  pinMode(LED, OUTPUT);
}
 
  
 
void loop() {
 
 // LE O ESTADO DO BOTAO 
  ESTADO_BOTAO = digitalRead(BOTAO);

// SE BOTAO FOR PRESSIONADO ENTAO LIGA O LED
  if (ESTADO_BOTAO == LOW) {

    ESTADO_LED = HIGH;
  
  } else {
  
    ESTADO_LED = LOW;
  }  
 
  digitalWrite(LED, ESTADO_LED);
 
  delay(10);
 
}