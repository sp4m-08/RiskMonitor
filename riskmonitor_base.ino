int FWDA = 5;
int REVA = 6;
int FWDB = 7;
int REVB = 8;

void setup() {
  Serial.begin(9600);

  pinMode(FWDA, OUTPUT);
  pinMode(REVA, OUTPUT);
  pinMode(FWDB, OUTPUT);
  pinMode(REVB, OUTPUT);

  digitalWrite(FWDA, LOW);
  digitalWrite(REVA, LOW);
  digitalWrite(FWDB, LOW);
  digitalWrite(REVB, LOW);
}

void loop() {

  char ch = Serial.read();

  if (ch == 'f') {
    digitalWrite(FWDA, HIGH);
    digitalWrite(FWDB, HIGH);
    digitalWrite(REVA, LOW);
    digitalWrite(REVB, LOW);
  }
  if (ch == 'r') {
    digitalWrite(FWDA, HIGH);
    digitalWrite(REVB, HIGH);
    digitalWrite(REVA, LOW);
    digitalWrite(FWDB, LOW);
  }
  if (ch == 'l') {
    digitalWrite(REVA, HIGH);
    digitalWrite(FWDB, HIGH);
    digitalWrite(FWDA, LOW);
    digitalWrite(REVB, LOW);
  }
  if (ch == 'r') {
    digitalWrite(REVA, HIGH);
    digitalWrite(REVB, HIGH);
    digitalWrite(FWDA, LOW);
    digitalWrite(FWDB, LOW);
  }
  if (ch == 's') {
    digitalWrite(FWDA, LOW);
    digitalWrite(FWDB, LOW);
    digitalWrite(REVA, LOW);
    digitalWrite(REVB, LOW);
  }
}