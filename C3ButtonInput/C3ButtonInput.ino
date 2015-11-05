#define PushButton 3
#define LEDpin 13
void setup() {
  // put your setup code here, to run once:
  pinMode(PushButton, INPUT_PULLUP);
  pinMode(LEDpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  static int press_count = 0;
  static bool lastpress = 1;
  if (digitalRead(PushButton) != lastpress){
    lastpress = digitalRead(PushButton);
    press_count += digitalRead(PushButton);
    digitalWrite(LEDpin,!digitalRead(PushButton));
    Serial.println(press_count);
  }
}
