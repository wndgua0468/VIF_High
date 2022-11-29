//3번과 4번 핀은 모터 제어에 관한 핀
int IN1Pin = 2;
 int IN2Pin = 3;
 int ENA = 5;
 
 int IN3Pin = 4;
 int IN4Pin = 7;
 int ENB = 6;


void setup() {
  pinMode(IN1Pin, OUTPUT);
  pinMode(IN2Pin, OUTPUT); 
  pinMode(IN3Pin, OUTPUT);
  pinMode(IN4Pin, OUTPUT);//3,4번 제어핀들은 핀모드를 출력으로 설정
 
}

void loop() {
 //전진
 digitalWrite(IN1Pin, HIGH);
 digitalWrite(IN2Pin, LOW);
 digitalWrite(IN3Pin, HIGH);
 digitalWrite(IN4Pin, LOW);
 analogWrite(ENA,100);
 analogWrite(ENB, 100); 
 delay(1000);

 //후진
 digitalWrite(IN1Pin, LOW);
 digitalWrite(IN2Pin, HIGH);
 digitalWrite(IN3Pin, LOW);
 digitalWrite(IN4Pin, HIGH);
 analogWrite(ENA, 130);
 analogWrite(ENB, 130);
 delay(500);


  //right
 digitalWrite(IN1Pin, HIGH);
 digitalWrite(IN2Pin, LOW);
 digitalWrite(IN3Pin, LOW);
 digitalWrite(IN4Pin, HIGH);
 analogWrite(ENA, 130);
 analogWrite(ENB, 0);
 delay(1000);


  //lefted
 digitalWrite(IN1Pin, LOW);
 digitalWrite(IN2Pin, HIGH);
 digitalWrite(IN3Pin, HIGH);
 digitalWrite(IN4Pin, LOW);
 analogWrite(ENA, 0);
 analogWrite(ENB, 130);
 delay(1000);
}
