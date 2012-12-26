#define SPEAKER_PIN 6   // 圧電スピーカーを接続したピン番号

void setup(){
    Serial.begin(9600);
}

void loop(){
    //アナログ入力0番ピンの値を読み取り(0~1023)
    int val=analogRead(0);
    //値を0〜255の範囲にマップ
    int bright = map(val, 0, 330, 255, 0);
    //LEDを光らせる
    analogWrite(SPEAKER_PIN, bright);
    //シリアルでoutByteを送信
    Serial.write(bright);
    //1秒間に10回ループ
    delay(100);
}