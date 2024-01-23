//NOME SIMULACAO DO DIA
//CURSO SIGNAL SPARK
//AUTOR JOSE LUIZ RYBARCZYK FILHO

//DECLARA A VARIAVEL LED_VERMELHO E ATRIBUI A PORTA 7
const int LED_VERMELHO = 7;

//DECLARA A VARIAVEL LED_VERDE E ATRIBUI A PORTA 6
const int LED_VERDE = 6;

//DECLARA A VARIAVEL LED_AZUL E ATRIBUI A PORTA 5
const int LED_AZUL = 5;

void setup() {
 // INICIALIZACAO 
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AZUL, OUTPUT);
}

void loop() {
  // SIMULA O AMANHACER
  for(int i = 0; i <= 255; i++){
    //VERMELHO
    setColor(i, 0, 0); 
    delay(10);
  }
  for(int i = 0; i <= 255; i++){
    //VERMELHO + VERDE
    setColor(255, i, 0);
    delay(10);
  }
//AGUARDA 1000 MILISSEGUNDOS
  delay(1000); 
  
  
  // SIMULA O ANOITECER
  for(int i = 255; i >= 0; i--){
  //VERMELHO + VERDE
    setColor(i, 255, 0); 
    delay(10);
  }
  for(int i = 255; i >= 0; i--){
  //VERDE
    setColor(0, i, 0); 
    delay(10);
  }
}
//FUNCAO PARA VARIAR AS CORES NO LED RGB
void setColor(int vermelho, int verde, int azul) {
  analogWrite(LED_VERMELHO, vermelho);
  analogWrite(LED_VERDE, verde);
  analogWrite(LED_AZUL, azul);
}
