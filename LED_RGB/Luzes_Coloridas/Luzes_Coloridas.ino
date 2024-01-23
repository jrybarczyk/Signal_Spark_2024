//  NOME Luzes Coloridas
//CURSO SIGNAL SPARK
//AUTOR JOSE LUIZ RYBARCZYK FILHO
 
//DECLARA A VARIAVEL LED_VERMELHO E ATRIBUI A PORTA 11
 
#define LED_VERMELHO 11

//DECLARA A VARIAVEL LED_VERDE E ATRIBUI A PORTA 10

#define LED_VERDE 10

//DECLARA A VARIAVEL LED_AZUL E ATRIBUI A PORTA 9
#define LED_AZUL 9
 

// FUNCAO PARA LIGAR LED VERMELHO
void Liga_Vermelho(){
 
  digitalWrite(LED_VERMELHO, LOW); 
  digitalWrite(LED_VERDE, HIGH); 
  digitalWrite(LED_AZUL, HIGH);
 
}
 
// FUNCAO PARA LIGAR LED VERDE
 
void Liga_Verde() {
 
  digitalWrite(LED_VERMELHO, HIGH); 
  digitalWrite(LED_VERDE,LOW); 
  digitalWrite(LED_AZUL, HIGH);
 
}

// FUNCAO PARA LIGAR LED AZUL
 
void Liga_Azul() {
 
  digitalWrite(LED_VERMELHO, HIGH); 
  digitalWrite(LED_VERDE,HIGH); 
  digitalWrite(LED_AZUL, LOW);
 
}
 
// FUNCAO PARA DESLIGAR LED
 
void Desliga_Led() {
 
  digitalWrite(LED_VERMELHO, HIGH); 
  digitalWrite(LED_VERDE,HIGH); 
  digitalWrite(LED_AZUL, HIGH);
 
}
 

 
void setup() {
// CONFIGURA A PORTA 11 COMO SAIDA PARA O LED VERMELHO
  pinMode(LED_VERMELHO, OUTPUT);
  
// CONFIGURA A PORTA 10 COMO SAIDA PARA O LED VERDE
  pinMode(LED_VERDE, OUTPUT);
  
// CONFIGURA A PORTA 9 COMO SAIDA PARA O LED AZUL
  pinMode(LED_AZUL, OUTPUT);
  
// FUNCAO PARA APAGAR O LED RGB 
  Desliga_Led(); 
 
}
 
//----------------Funcao executada repetidamente enquanto o sistema estiver ligado----------------
 
void loop() {
// ACENDE A COR VERMELHA E APAGA AS DEMAIS
  Liga_Vermelho();

 // AGUARDA 1000 MILISSEGUNDOS
  delay(1000);  
  
// ACENDE A COR VERDEA E APAGA AS DEMAIS 
  Liga_Verde(); 

  // AGUARDA 1000 MILISSEGUNDOS
  delay(1000);  

// ACENDE A COR AZUL E APAGA AS DEMAIS 
  Liga_Azul(); 

  // AGUARDA 1000 MILISSEGUNDOS
  delay(1000);  
 
  Desliga_Led();   
 // AGUARDA 1000 MILISSEGUNDOS 
  delay(1000);      
 
}
