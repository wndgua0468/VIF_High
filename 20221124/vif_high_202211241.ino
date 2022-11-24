// C++ code
//

#define F_Sondar 8
#define R_Sonar 10
#define L_Sonar 11
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(F_Sonar, OUTPUT);
  pinMode(R_Sonar, OUTPUT);
  pinMode(L_Sonar, OUTPUT);
  Serial.begin(115200);
}
measure_width = L_distance + robot_width + R_ditance
  if((measure_width>=(mazor_width- mazor_width_tolerance))&&(mazor_width + mazor_width_tolerance) ))
  (
  if((R_ditance>mazor,width)&&((R_distance<mazor_width + 400))
     (
       flag_mazor_1 = 1;
       )
     )
  else
  (
    flag_mazor_1 = 0;
    )
  
float robot_width = 200; // robot

int flag_mazor_1 = 0; //1 이면 1번 구간에 내가 위치 해 잇음

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
float R_Sonar_sensor()
{
  float duration = 0.0;
  float distance = 0.0;
  pinMode(R_Sonar, OUTPUT);
  digitalWrite(R_Sonar, LOW);
  digitalWrite(R_Sonar, HIGH);
  delay(10);
  digitalWrite(R_Sonar, LOW);
  duration = pulseln(R_Sonar, HIGH);
  distance = (duration * 340.0)/2.0/10000.0;
  return distance;
}
void loop()
{
  float L_distance, F_distance, R_distance;
  L_distance=L_Sonar_sensor();
  R_distance=R_Sonar_sensor();
  F_distance=F_Sonar_sensor();
  
  Serial.print("F:"); serial.print ( L_distance); Serial.print("
                                                               }                                                               
                                                 
  