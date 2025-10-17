// C++ code
//
void setup() 
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(13, HIGH); // acende o LED
  delay(1000);              // espera 0,5 segundos
  digitalWrite(13, LOW);  // apaga o LED
  delay(1000);              // espera 0,5 segundos
}