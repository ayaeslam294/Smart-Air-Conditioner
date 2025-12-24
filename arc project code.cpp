#define GAS_PIN     A0
#define FIRE_PIN    A1

#define MOTOR_IN3   5
#define MOTOR_IN4   6
#define MOTOR_ENB   9  

#define LED_PIN     13
#define BUZZER_PIN  12

#define NUM_READINGS 3   

int gasThreshold  = 300;  
int fireThreshold = 500;  
int motorSpeed = 150;

void setup() {
  Serial.begin(9600);

  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  pinMode(MOTOR_IN3, OUTPUT);
  pinMode(MOTOR_IN4, OUTPUT);
  pinMode(MOTOR_ENB, OUTPUT);

  digitalWrite(MOTOR_IN3, LOW);
  digitalWrite(MOTOR_IN4, LOW);
  analogWrite(MOTOR_ENB, 0);

  Serial.println("System starting...");
  delay(3000); 


int readSensor(int pin) {
  long total = 0;
  for (int i = 0; i < NUM_READINGS; i++) {
    total += analogRead(pin);
    delay(5);
  }
  return total / NUM_READINGS;
}


void alert() {
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(BUZZER_PIN, HIGH);
  delay(120);
  digitalWrite(BUZZER_PIN, LOW);
}

void motorStop() {
  digitalWrite(MOTOR_IN3, LOW);
  digitalWrite(MOTOR_IN4, LOW);
  analogWrite(MOTOR_ENB, 0);
}

void motorBlow() {
  digitalWrite(MOTOR_IN3, HIGH);
  digitalWrite(MOTOR_IN4, LOW);
  analogWrite(MOTOR_ENB, motorSpeed);
}

void motorSuck() {
  digitalWrite(MOTOR_IN3, LOW);
  digitalWrite(MOTOR_IN4, HIGH);
  analogWrite(MOTOR_ENB, motorSpeed);
}

void loop() {

  int gasValue  = readSensor(GAS_PIN);
  int fireValue = readSensor(FIRE_PIN);

  Serial.print("Gas: ");
  Serial.print(gasValue);
  Serial.print("   Flame: ");
  Serial.println(fireValue);

  
  if (fireValue < fireThreshold) {       
    alert();
    Serial.println("🔥 FIRE DETECTED! Blowing...");
    motorBlow();
    delay(50);
    return;
  }

  if (gasValue > gasThreshold) {        
    alert();
    Serial.println("⚠️ GAS DETECTED! Suction...");
    motorSuck();
    delay(50);
    return;
  }
  motorStop();
  digitalWrite(LED_PIN, LOW);
  delay(50);
}