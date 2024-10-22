void setup() {
  // シリアル通信を9600ボーレートで初期化
  Serial.begin(9600);

  // 3番ピンを出力モードに設定
  pinMode(3, OUTPUT);
}

void loop() {
  // A0からアナログ値を読み取る（0から1023）
  int sensorValue = analogRead(A0);

  // センサー値を0から255にマッピング（PWMのデューティ比用）
  int pwmValue = map(sensorValue, 0, 1023, 0, 255);

  // 3番ピンにPWM信号を出力
  analogWrite(3, pwmValue);

  // センサー値とPWM値をシリアルポートに送信
  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print(" | PWM Value: ");
  Serial.println(pwmValue);

  // 適切な間隔をあける
  delay(100);
}
