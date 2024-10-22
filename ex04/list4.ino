void setup() {
  // シリアル通信を9600ボーレートで初期化
  Serial.begin(9600);
}

void loop() {
  // A0からアナログ値を読み取る
  int sensorValue = analogRead(A0);
  // センサー値をシリアルポートに送信
  Serial.println(sensorValue);
  // 適切な間隔をあける
  delay(100);
}
