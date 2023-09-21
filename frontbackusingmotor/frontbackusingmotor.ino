// Motor A connections
int enA = 8;
int in1 = 10;
int in2 = 9;
// Motor B connections
int enB = 4;
int in3 = 6;
int in4 = 5;

void setup() {
  // Set the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  moveForward();
  delay(10000);  // Move forward for 10 seconds

  // Stop and then move backward for 10 seconds
  stopMotors();
  delay(1000);   // Add a brief stop before reversing
  moveBackward();
  delay(10000);  // Move backward for 10 seconds
  stopMotors();
}

void moveForward() {
  // Motor A forward
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 255);  // Full speed

  // Motor B forward
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 255);  // Full speed
}

void moveBackward() {
  // Motor A backward
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, 255);  // Full speed

  // Motor B backward
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB, 255);  // Full speed
}

void stopMotors() {
  // Motor A stop
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 0);

  // Motor B stop
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enB, 0);
}
