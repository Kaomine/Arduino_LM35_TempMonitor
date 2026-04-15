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
}

void loop() {
  // Sinh vien B van giu nguyen logic doc 2 kenh A0 va A1
  for(int i = 0; i < 2; i++) {
    adcValues[i] = analogRead(A0 + i);
    nhietDo[i] = (adcValues[i] * 500.0) / 1023.0;
  }

  // SỬA CODE: Thay vi dung sprintf in ra chuoi "25,30"
  // Chung ta in ra JSON: {"T0": 25.5, "T1": 30.2}
  Serial.print("{\"T0\":"); 
  Serial.print(nhietDo[0], 1); // In 1 chu so thap phan
  Serial.print(",\"T1\":"); 
  Serial.print(nhietDo[1], 1);
  Serial.println("}");
  
  delay(1000); // Doc moi giay 1 lan
}
