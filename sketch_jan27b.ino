const int pingPin = 9; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 10; // Echo Pin of Ultrasonic Sensor
int i=11;
int count=0;

void setup() {
   Serial.begin(9600); // Starting Serial Terminal
   pinMode(i,OUTPUT);
   }

void loop() {
   long duration, inches, cm;
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(200);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(100);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   inches = microsecondsToInches(duration);
   cm = microsecondsToCentimeters(duration);
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   delay(100);
}

long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
   if (microsecondsToInches<=3){
    count=count+1;
    if (count=1){
    analogWrite(i,50);
    }
    else if (count=2){
    analogWrite(i,100);
    }
    else if (count=3){
    analogWrite(i,125);
    }
    else if (count=4){
    analogWrite(i,175);
    }
    else(count=5);
    {
      analogWrite(i,255);
      Serial.print("room full");
    }
      
    
}
}
