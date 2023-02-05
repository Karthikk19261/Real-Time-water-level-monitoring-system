//Connect the Transmitter data pin to Arduino pin 12
//If you don't want to use pin 12 use vw_set_tx_pin(transmit_pin), with transmit_pin being desired pin ,in void setup
//Refer to the documentation in link for more details
#include <VirtualWire.h>
byte message[VW_MAX_MESSAGE_LEN]; // a buffer to store the incoming messages
byte messageLength = VW_MAX_MESSAGE_LEN;
int ledPin=13;//led on pin 13 is ON except when transmitter is parallel to the ground
void setup()
{
   Serial.begin(9600);//Initialise the serial connection
   vw_setup(2000);
   vw_rx_start();//Bits per second
   pinMode(ledPin,OUTPUT);
   //Serial.begin(9600);//Initialise the serial connection debugging
}
void loop()
{
   uint8_t buf[VW_MAX_MESSAGE_LEN];
   uint8_t buflen = VW_MAX_MESSAGE_LEN;
   if (vw_get_message(buf, &buflen)) // Non-blocking
   {
     int i;
     //Serial.print("Got: ");//debugging
     for (i = 0; i < buflen; i++)
     {
       // Serial.print(buf[i],HEX);//You may also use integer values debugging
       //Serial.print(' ');// debugging
       if (buf[i]==0x73)//Stationary
       {
         send("s");
         digitalWrite(ledPin,HIGH);
       }
       if (buf[i]==0x61)//Backward
       {
         send("a");
         digitalWrite(ledPin,LOW);
       }
     }
   }
}
void send(char *message)//send function definition
{
    vw_send((uint8_t *)message, strlen(message));
    vw_wait_tx(); // Wait until the whole message is gone
}