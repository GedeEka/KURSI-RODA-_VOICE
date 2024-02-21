void forward() {

  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  analogWrite(pwm1, 255);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  analogWrite(pwm2, 255);
  Serial.println("Motor maju");
}

void backward() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  analogWrite(pwm1, 255);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  analogWrite(pwm2, 255);
  Serial.println("Motor mundur");
}

void left() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  analogWrite(pwm1, 255);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  analogWrite(pwm2, 255);
  Serial.println("Motor kiri");
}

void right() {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  analogWrite(pwm1, 255);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  analogWrite(pwm2, 255);
  Serial.println("Motor Kanan");
}

void stop() {
  for (int i = 0; i < 5; i = i + 1)
  {
    analogWrite(pwm1, FPWM_STOP[i]);
    analogWrite(pwm2, FPWM_STOP[i]);
    delay(700);
    Serial.println(FPWM_STOP[i]);
  }
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);
  Serial.println("Motor STOP");
}
//void rem() {
//  
//    for (int i = 0; i < 5; i = i + 1)
//    {
//      analogWrite(pwm1, FPWM_STOP[i]);
//      analogWrite(pwm2, FPWM_STOP[i]);
//      delay(700);
//      Serial.println(FPWM_STOP[i]);
//    }
//    digitalWrite(motor1Pin1, LOW);
//    digitalWrite(motor1Pin2, LOW);
//    digitalWrite(motor2Pin1, LOW);
//    digitalWrite(motor2Pin2, LOW);
//    Serial.println("Motor STOP");
//  
//}
