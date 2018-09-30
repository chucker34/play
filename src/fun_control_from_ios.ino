const int FAN_SOCKET = 5;
int fan_out = 0;

void setup() {
  pinMode(FAN_SOCKET, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    int data = Serial.read();

    if (data == 1) {
      Serial.println(1);
      fan_out = 150;
    }

    if (data == 2) {
      Serial.println(2);
      fan_out = 0;
    }
  }
  analogWrite( FAN_SOCKET, fan_out );
  delay (100);
}