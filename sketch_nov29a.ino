//3번과 4번 핀은 모터 제어에 관한 핀
#define IN1  3
 #define IN2  2
 #define ENA 5
 
 #define IN3  7
 #define IN4  4
 #define ENB  6


void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT); 
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);//3,4번 제어핀들은 핀모드를 출력으로 설정
 
}

void loop() {
 //전진
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
 analogWrite(ENA,100);
 analogWrite(ENB, 100); 
 delay(1000);

 //후진
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH);
 analogWrite(ENA, 130);
 analogWrite(ENB, 130);
 delay(1000);


  //right
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH);
 analogWrite(ENA, 130);
 analogWrite(ENB, 130);
 delay(1000);


  //lefted
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
 analogWrite(ENA, 130);
 analogWrite(ENB, 130);
 delay(1000);
}
