int ultra (int A, int B, int C)

  {
  long duration;
  int distance;
  digitalWrite(A, LOW);
  delayMicroseconds(2);
  digitalWrite(A, HIGH);
  delayMicroseconds(10);
  digitalWrite(A, LOW);
  duration = pulseIn(B, HIGH);       // Mengukur durasi echo
  distance = (duration * 0.0343) / 2;  // Menghitung jarak berdasarkan durasi
  Serial.print("Distance sensor : ");
  Serial.print(C);
  Serial.print(" : ");
  Serial.println(distance);
  return distance;

}
