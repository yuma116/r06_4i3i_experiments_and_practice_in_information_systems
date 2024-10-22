void setup() {
  // シリアル通信を9600ボーレートで初期化
  Serial.begin(9600);
}

void loop() {
  // データが受信されているか確認
  if (Serial.available() > 0) {
    // 受信データを文字列として読み込む
    String incomingData = Serial.readStringUntil('\n');

    // データを処理して応答を送信
    Serial.print("エコー: ");
    Serial.println(incomingData);
  }
}
