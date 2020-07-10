
void setup() {
  Serial.begin(9600);
  pinMode(9, INPUT_PULLUP);
}
bool temp=true;
int st9=digitalRead(9);

void loop() {
  if(temp){
    st9=digitalRead(9);
    temp=false;
    }
  if (digitalRead(9) != st9) {
    Serial.println("5");
    st9=digitalRead(9);
  }
  delay(10000);
}
