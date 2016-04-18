#define PIN_RED 6
#define PIN_GREEN 2
#define PIN_BLUE 4
#define DIFUZOR 5

#define NUM_COLORS 13
byte colors[3][3] = {
    {0,0,255},{0,0,0},{255,0,0}
};

void setup(){
    pinMode(PIN_RED, OUTPUT);
    pinMode(PIN_GREEN, OUTPUT);
    pinMode(PIN_BLUE, OUTPUT);
    pinMode(5, OUTPUT);
}

void loop(){
    for(byte i = 0; i<=2; i++){
        tone(5,735,400);
        analogWrite(4, colors[i][0]);
        delay(100);
        tone(5,535,400);
        analogWrite(2, colors[i][1]);
        delay(100);
        analogWrite(6, colors[i][2]);    
        delay(100);
    }
}
