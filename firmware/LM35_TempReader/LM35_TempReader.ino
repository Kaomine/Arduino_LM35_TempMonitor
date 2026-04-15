/*
 * Du an: Doc nhiet do LM35 va gui qua Serial
 * Mon: Mang Cam Bien - Tuan 03
 */

int adcValues[3];  
float nhietDo[3]; 
char chuoi[50];    

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Doc 3 kenh
  for(int i = 0; i < 3; i++) {
    adcValues[i] = analogRead(A0 + i); // Doc A0, A1, A2
    nhietDo[i] = (adcValues[i] * 500.0) / 1023.0;
  }
  sprintf(chuoi, "%d,%d,%d\n", (int)nhietDo[0], (int)nhietDo[1], (int)nhietDo[2]);
  Serial.print(chuoi);
  
  delay(1000);
}
