/*
 * Du an: Doc nhiet do LM35 va gui qua Serial
 * Mon: Mang Cam Bien - Tuan 03
 */
int adcValues[2]; 
float nhietDo[2]; 

void setup() {
  // Khoi tao Serial voi baudrate 9600
  Serial.begin(9600);
  delay(100);

int adcValues[3];  
float nhietDo[3]; 
char chuoi[50];    

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Doc 3 kenh
  for(int i = 0; i < 3; i++) {
    adcValues[i] = analogRead(A0 + i);
    nhietDo[i] = (adcValues[i] * 500.0) / 1023.0;
  }

  // In ra JSON cho ca 3 kenh
  Serial.print("{\"T0\":"); Serial.print(nhietDo[0], 1);
  Serial.print(",\"T1\":"); Serial.print(nhietDo[1], 1);
  Serial.print(",\"T2\":"); Serial.print(nhietDo[2], 1);
  Serial.println("}");

  delay(1000);
}