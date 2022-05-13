
int LDR = A7;
int LIGHT = 2;
int threshold = 430;

void setup() {
  // put your setup code here, to run once:
  pinMode (LDR, INPUT);
  pinMode (LIGHT,OUTPUT);
  Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int Value = analogRead (LDR);
  Serial.println(Value);
  if (Value <= threshold)
  {
    digitalWrite (LIGHT, LOW);
  }
  else
  {
    digitalWrite (LIGHT, HIGH);
  }
  delay (500);

}
