//NOME LED CODIGO MORSE
//CURSO SIGNAL SPARK
//AUTOR JOSE LUIZ RYBARCZYK FILHO
//DATA 15/01/2024

// AQUI DEFINO A VARIAVEL LED_BUILTIN COMO SENDO A PORTA 11
#define LED_BUILTIN 11
//const int ledPin = 11;

String charToMorse(char character);
void enviarMorse(String morse);
void textoParaMorse(String message);


// SETUP E A FUNCAO EXECUTADA UMA VEZ NA INICIALIZACAO DO SISTEMA
void setup() {

// AQUI DEFINO A PORTA 11 COMO SAIDA
  pinMode(LED_BUILTIN, OUTPUT);

//INICIA A PORTA SERIAL E CONFIGURA A TAXA DE DADOS PARA 9600 BITS POR SEGUNDO (bps)
  Serial.begin(9600);
}


//FUNCAO EXECUTADA REPETIDAMENTE ENQUANTO O SISTEMA ESTIVER LIGADO
void loop() {

//VERIFICA SE O NUMERO DE BYTES DISPONIVEIS PARA LEITURA DA PORTA SERIAL E MAIOR QUE ZERO
  if (Serial.available() > 0) {

// SE O NUMERO DE BYTES DISPONIVEIS E MAIOR QUE ZERO, ELE LE A MENSAGE ATE O CARATERE FINAL (ESPERA O COMANDO ENTER PARA INICIAR A LEITURA)
    String inputMessage = Serial.readStringUntil('\n');

// FAZ A CONVERSAO DA MENSAGEM PARA CODIGO MORSE
    textoParaMorse(inputMessage);
  }
}

// TABELA DE CODIGO MORSE (DE A - Z E DE 0 - 9)
String charToMorse(char character) {
  switch (character) {
    case 'A': return ".- ";
    case 'B': return "-... ";
    case 'C': return "-.-. ";
    case 'D': return "-.. ";
    case 'E': return ". ";
    case 'F': return "..-. ";
    case 'G': return "--. ";
    case 'H': return ".... ";
    case 'I': return ".. ";
    case 'J': return ".--- ";
    case 'K': return "-.- ";
    case 'L': return ".-.. ";
    case 'M': return "-- ";
    case 'N': return "-. ";
    case 'O': return "--- ";
    case 'P': return ".--. ";
    case 'Q': return "--.- ";
    case 'R': return ".-. ";
    case 'S': return "... ";
    case 'T': return "- ";
    case 'U': return "..- ";
    case 'V': return "...- ";
    case 'W': return ".-- ";
    case 'X': return "-..- ";
    case 'Y': return "-.-- ";
    case 'Z': return "--.. ";
    case '0': return "----- ";
    case '1': return ".---- ";
    case '2': return "..--- ";
    case '3': return "...-- ";
    case '4': return "....- ";
    case '5': return "..... ";
    case '6': return "-.... ";
    case '7': return "--... ";
    case '8': return "---.. ";
    case '9': return "----. ";
    case ' ': return "   "; // ESPACO ENTRE AS PALAVRAS
    default: return "";
  }
}



//FUNCAO REALIZAR A CONVERSAO DE CADA CARACTERE EM CODIGO MORSE
void textoParaMorse(String message) {

//TRANSFORMA TODAS AS LETRAS PARA MAIUSCULO
  message.toUpperCase();
  
//TEMOS UM LACO DE REPETICAO, INICIA NA POSICAO ZERO E VAI ATE O COMPRIMENTO TOTAL DA FRASE (ANDANDO DE 1 EM 1)
  for (int i = 0; i < message.length(); i++) {
 
//CHAMA A FUNCAO DE CONVERSAO DA LETRA PARA MORSE DE 1 EM 1
    String morseChar = charToMorse(message[i]);

// SERIAL PRINT ESCREVE A LETRA NA TELA DO COMPUTADOR
    Serial.print(message[i]);
    
// SERIAL PRINT ESCREVE DOIS PONTOS NA TELA DO COMPUTADOR LOGO APOS A LETRA 
    Serial.print(": ");

// SERIAL PRINTLN ESCREVE O CODIGO MORSE DA LETRA NA LETRA E DA NOVA LINHA NA TELA
    Serial.println(morseChar);
    
//CHAMA A FUNCAO ENVIARMORSE E INFORMAMOS O RESPECTIVO CODIGO MORSE ASSOCIADA A LETRA NA TELA PARA QUE ISSO
// SEJA ENVIADO PARA O ARDUINO
    enviarMorse(morseChar);
  }
}



// FUNCAO PARA ENVIAR O CODIGO MORSE
void enviarMorse(String morse) {

//TEMOS UM LACO DE REPETICAO, INICIA NA POSICAO ZERO E VAI ATE O COMPRIMENTO TOTAL DA REPRESENTACAO EM MORSE (ANDANDO DE 1 EM 1)
  for (int i = 0; i < morse.length(); i++) {
 
//SE O SINAL FOR UM PONTO, ELE ACENDE O LED NUM PERIODO DE 250 MILISEGUNDOS
    if (morse[i] == '.') {
      digitalWrite(LED_BUILTIN, HIGH);
// UM PONTO TERA UMA UNIDADE DE TEMPO DE 250 MILISEGUNDOS
      delay(250); 
      
//SE O SINAL FOR UM TRACO, ELE ACENDE O LED NUM PERIODO DE 750 MILISEGUNDOS     
    } else if (morse[i] == '-') {
      digitalWrite(LED_BUILTIN, HIGH);

// UM TRACO TERA UMA UNIDADE DE TEMPO DE 750 MILISEGUNDOS
      delay(750); 

//SE O SINAL FOR UM ESPACO, ELE ACENDE O LED NUM PERIODO DE 250 MILISEGUNDOS
    } else if (morse[i] == ' ') {
//SE O SINAL FOR UM PONTO, ELE ACENDE O LED NUM PERIODO DE 250 MILISEGUNDOS      
      delay(250);
    }
// APAGA O LED ACESO.
    digitalWrite(LED_BUILTIN, LOW);

// UM PONTO OU TRACO TERA UMA UNIDADE DE TEMPO DE 250 MILISEGUNDOS
    delay(250);
  }
// PALAVRA TERA UMA UNIDADE DE TEMPO DE 250 MILISEGUNDOS
  delay(750); // Espaço entre palavras: 3 unidades de tempo
}