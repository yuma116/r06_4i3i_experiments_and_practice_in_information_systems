import serial
import time

ser = serial.Serial('/dev/ttyACM03', 9600, timeout=1)
print("Python is ready")

# Arduinoにデータを送信
ser.write(b'Hello Arduino!\n')

# Arduinoからの応答を読み取る
while True:
    line = ser.readline().decode('utf-8').rstrip()
    if line:
        print("Arduinoから受信:", line)
        break

ser.close()
