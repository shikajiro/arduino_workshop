void setup() {
pinMode(6,OUTPUT);
Serial.begin(9600); 
}
void loop() {
int ans ;
ans = analogRead(1) ; // CDS接続のアナログピン０番を読み取る
Serial.println(ans);
int bright = map(ans, 70, 380, 255, 0);
if(bright < 0) bright = 0;
analogWrite(6, bright);
}

