//  NOME LUZES COLORIDAS COM O USO DO POTENCIOMETRO
//CURSO SIGNAL SPARK
//AUTOR JOSE LUIZ RYBARCZYK FILHO
 
//DECLARA A VARIAVEL LED_VERMELHO E ATRIBUI A PORTA 7
 
#define LED_VERMELHO 7

//DECLARA A VARIAVEL LED_VERDE E ATRIBUI A PORTA 6

#define LED_VERDE 6

//DECLARA A VARIAVEL LED_AZUL E ATRIBUI A PORTA 5
#define LED_AZUL 5

//DECLARA A VARIAVEL PORTA_ANALOGICA  E ATRIBUI A PORTA A0
int PORTA_ANALOGICA = A0;

int valor_porta;

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
 
  pinMode(LED_VERMELHO, OUTPUT);  
 
  pinMode(LED_VERDE, OUTPUT);  
 
  pinMode(LED_AZUL, OUTPUT);       
 
  Desliga_Led(); 
 
}
 

 
void loop() {
 
  valor_porta = analogRead(PORTA_ANALOGICA);

  if(valor_porta >= 0 && valor_porta <= 256){

  Desliga_Led(); 


  }
 
  if(valor_porta >= 256 && valor_porta <= 512){

  Liga_Vermelho(); 

  }
 

  if(valor_porta >= 512 && valor_porta <= 768){

  Liga_Verde(); 

  }


  if(valor_porta >= 768 && valor_porta <= 1023){

  Liga_Azul(); 

  }
 
}
