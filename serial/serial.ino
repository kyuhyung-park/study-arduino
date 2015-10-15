// 시리얼 통신을 통해 수신된 숫자를 두 배로 만들기

int number;
void setup() {
  Serial.begin(9600);
}

void loop() {
  number = 0;
  Serial.flush();
  while(Serial.available() == 0){
  }
  while(Serial.available() > 0){
    number = Serial.read() - '0';
  }
  Serial.print("You entered: ");
  Serial.println(number);
  
  Serial.print(number);
  Serial.print(" multiplied by two is ");
  number = number * 2;
  Serial.println(number);
  
}
