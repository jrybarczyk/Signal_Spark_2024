// NOME PISCAR COM RITMO
// CURSO SIGNAL SPARK
// AUTOR JOSE LUIZ RYBARCZYK FILHO


// AQUI DEFINO A VARIAVEL LED_BUILTIN COMO SENDO A  PORTA 11 
#define LED_BUILTIN  11


// SETUP E A FUNCAO EXECUTADA UMA VEZ NA INICIALIZACAO DO SISTEMA
void setup(){
  // AQUI DEFINO A PORTA 11 COMO SAIDA
  pinMode(LED_BUILTIN, OUTPUT); 

}


// FUNCAO EXECUTADA REPETIDAMENTE ENQUANTO O SISTEMA ESTIVER LIGADO
void loop() {
  
  
  //ACENDE O LED
  digitalWrite(LED_BUILTIN, HIGH);
  
  //AGUARDA UM INTERVALO DE TEMPO DE 200 MILISEGUNDOS
  delay(200);

  //DESLIGA O LED
  digitalWrite(LED_BUILTIN, LOW);

  //AGUARDA UM INTERVALO DE TEMPO DE 800 MILISEGUNDOS
  delay(800);
}
