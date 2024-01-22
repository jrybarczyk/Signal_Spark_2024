// NOME: SEMAFORO
// CURSO: SIGNAL SPARK
// AUTOR: JOSE LUIZ RYBARCZYK FILHO

// DEFINE LED_VERDE COMO PORTA 9
#define LED_VERDE 9

// DEFINE LED_AMARELO COMO PORTA 10
#define LED_AMARELO 10

// DEFINE LED_VERMELHO COMO PORTA 11
#define LED_VERMELHO 11


void setup() {
 
// CONFIGURA A PORTA DO LED VERDE COMO SAIDA
  pinMode(LED_VERDE, OUTPUT);

// CONFIGURA A PORTA DO LED AMARELO COMO SAIDA
  pinMode(LED_AMARELO, OUTPUT);
  
// CONFIGURA A PORTA DO LED VERMELHO COMO SAIDA
  pinMode(LED_VERMELHO, OUTPUT);
 

 // INICIALIZA O ESTADO DOS LEDS (VERDE  E AMARELO DESLIGADOS, VERMELHO LIGADO)
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, HIGH);
}
 
// FUNCAO EXECUTADA REPETIDAMENTE
void loop() {

//LIGA O VERDE E DESLIGA  O VERMELHO (ESPERA 5s)
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_VERMELHO, LOW);
  delay(5000);


//DESLIGA O VERDE E LIGA O AMARELO (ESPERA 3s)
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, HIGH);
  delay(3000);

//DESLIGA O AMARELO E LIGA O VERMELHO (ESPERA 5s)
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, HIGH);
  delay(5000);

//DESLIGA O VERMELHO
  digitalWrite(LED_VERMELHO, LOW);


//AQUI PODEMOS COLOCAR MAIS SEMAFOROS !!!
}