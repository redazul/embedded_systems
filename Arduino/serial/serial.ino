
int led = 13;

int value = 0;

void setup() {
  // put your setup code here, to run once:

  //baud rate
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() > 0) {

    //read 1 byte at a time
    value = Serial.read();
    delay(5);

    if (value == '1') {
      digitalWrite(led, HIGH);
      Serial.println("LED is ON");
    }

    if (value == '0') {
      digitalWrite(led, LOW);
      Serial.println("LED is OFF");
    }
  }
}
