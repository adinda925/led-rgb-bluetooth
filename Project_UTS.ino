int pinm = 7;
int pinh = 6;
int pinb = 5;
String motion;

void setup() {
  Serial.begin(9600);
  pinMode(pinm,OUTPUT);
  pinMode(pinh,OUTPUT);
  pinMode(pinb,OUTPUT);
  digitalWrite(pinm, LOW);
  digitalWrite(pinh, LOW);
  digitalWrite(pinb, LOW);
}

void loop() {
  Serial.println("Ketik 'm' u/ merah, 'h' u/ hijau, 'b' u/ biru");
  while(Serial.available()==0) {   }
  
  motion = Serial.readString();
  if(motion=="m"){
    digitalWrite(pinm, HIGH);
    digitalWrite(pinh, LOW);
    digitalWrite(pinb, LOW);
  }
  if(motion=="h"){
    digitalWrite(pinm, LOW);
    digitalWrite(pinh, HIGH);
    digitalWrite(pinb, LOW);
  }
  if(motion=="b"){
    digitalWrite(pinm, LOW);
    digitalWrite(pinh, LOW);
    digitalWrite(pinb, HIGH);
  }
}
