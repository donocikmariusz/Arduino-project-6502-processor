const char ADDR[] = {50,48,46,44,42,40,38,36,34,32,30,28,26,24,22};
#define CLOCK 2

void setup() {
  // put your setup code here, to run once:
for (int i = 0; i<16; i +=1) {
  pinMode(ADDR[i], INPUT);
}
pinMode(CLOCK, INPUT);
attachInterrupt(digitalPinToInterrupt(CLOCK), onClock, RISING);
Serial.begin(57600);
}

void onClock() {

for (int i = 0; i < 16; i +=1 ) {
int bit = digitalRead(ADDR[i]) ? 1 : 0;
Serial.print(bit);
}
Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:

}
