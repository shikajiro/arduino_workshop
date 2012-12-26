
# define BLUELED 13
# define YELLOWLED 12
# define REDLED 11
# define BUTTON 2

int val = 0;
int count = 0;
int old_val = 0;

void setup() {
pinMode(BLUELED, OUTPUT);
pinMode(YELLOWLED, OUTPUT);
pinMode(REDLED, OUTPUT);

pinMode(BUTTON, INPUT);
}

void loop(){

val = digitalRead(BUTTON);

if((val == HIGH) && (old_val == LOW)){
count = count + 1;
}
old_val = val;

if(count == 0){
digitalWrite(REDLED, LOW);
digitalWrite(YELLOWLED, LOW);
digitalWrite(BLUELED, HIGH);
}

if(count == 1){
digitalWrite(REDLED, LOW);
digitalWrite(YELLOWLED, HIGH);
digitalWrite(BLUELED, LOW);
}

if(count == 2){
digitalWrite(REDLED, HIGH);
digitalWrite(YELLOWLED, LOW);
digitalWrite(BLUELED, LOW);
}

if(count == 3){
count = 0;
}
delay(10);
}
