# 1 "D:\\programy\\Visual Studio Code\\Arduino-project-6502-processor\\Arduino-project-6502-processor.ino"
const char ADDR[] = {50,48,46,44,42,40,38,36,34,32,30,28,26,24,22};


void setup() {
  // put your setup code here, to run once:
for (int i = 0; i<16; i +=1) {
  pinMode(ADDR[i], 0x0);
}
pinMode(2, 0x0);
attachInterrupt(digitalPintoInterrupt(2), onClock, 3);
Serial.begin(57600);
}

void onClock {

for (int i = 0; i < 16; i +=1 ) {
int bit = digitalRead(ADDR[i]) ? 1 : 0;
Serial.print(bit);
}
Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:

}
