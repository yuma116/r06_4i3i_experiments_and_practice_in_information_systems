import serial
import time

ser = serial.Serial('/dev/ttyACM03', 9600, timeout=1)
time.sleep(2)  # Arduinoのリセット待ち時間

print("データ受信を開始します...")

try:
    while True:
        # データを受信
        line = ser.readline().decode('utf-8').rstrip()
        if line:
            # データを表示
            print(f"受信したセンサー値: {line}")
except KeyboardInterrupt:
    print("プログラムを終了します")
finally:
    ser.close()
