void setup() {
  Serial.begin(115200);
  for (int i = 0; i < 256; i++) {
    EEPROM.write(i,i);
  }
}

void loop() {
}
