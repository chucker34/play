int FAN_SOCKET = 5;
int BUTTON1_SOCKET = 2;
int BUTTON2_SOCKET = 3;
int fan_out = 0;

void setup() {
    pinMode(FAN_SOCKET, OUTPUT);
    pinMode(BUTTON1_SOCKET, INPUT);
    pinMode(BUTTON2_SOCKET, INPUT);
}

void loop() {
    if ( digitalRead(BUTTON1_SOCKET) == HIGH ){
        fan_out = 100;
        while ( digitalRead(BUTTON1_SOCKET) == HIGH ){
            delay ( 100 );
        }
    } else if ( digitalRead(BUTTON2_SOCKET) == HIGH ){
        fan_out = 0;
        while ( digitalRead(BUTTON2_SOCKET) == HIGH ){
            delay ( 100 );
        }
    }
    analogWrite( FAN_SOCKET, fan_out );
    delay (100);
}


