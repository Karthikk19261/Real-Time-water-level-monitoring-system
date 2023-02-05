#define echopin 8 // echo pin
#define trigpin 9 // Trigger pin
int maximumRange = 20;
long duration, distance;
const int sensorMin = 0; // sensor minimum
const int sensorMax = 1024;
#include <VirtualWire.h>
#include"ServoTimer2.h"

ServoTimer2 myservo; // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;
void setup() {
    Serial.begin (9600);
    pinMode (trigpin, OUTPUT);
    pinMode (echopin, INPUT );
    pinMode(2, OUTPUT);
    pinMode(LED_BUILTIN, OUTPUT);
    myservo.attach(7);
    vw_setup(2000);
}
void loop ()
{
  {
    digitalWrite(trigpin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigpin,HIGH);
    delayMicroseconds(10);
    duration=pulseIn (echopin,HIGH);
    distance= duration/58.2;
    delay (50);
    Serial.println(distance);
  }
   vw_wait_tx(); // Wait until the whole message is gone
}

int sensorReading = analogRead(A0);

if (distance <15 && sensorReading>500) {
   digitalWrite (2,HIGH);
   digitalWrite(LED_BUILTIN, HIGH);
   delay (500);
   myservo.write(1800); // tell servo to go to position in variable 'pos'
   delay(15);
   send("s"); // waits 15ms for the servo to reach the position
}
else if (distance < 10){
    digitalWrite (2, HIGH);
    digitalWrite(LED_BUILTIN, HIGH);
    myservo.write(1800); // tell servo to go to position in variable 'pos'
    delay(15); // waits 15ms for the servo to reach the position
    delay (500);
    send("s");
}
else{
    digitalWrite(LED_BUILTIN, LOW); // goes from 180 degrees to 0 degrees
    myservo.write(0); // tell servo to go to position in variable 'pos'
    delay(15);
    send("a"); // waits 15ms for the servo to reach the position
}

void send(char *message)//send function definition
{
    vw_send((uint8_t *)message, strlen(message));
}