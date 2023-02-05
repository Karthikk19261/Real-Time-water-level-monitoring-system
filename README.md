# Real-Time-water-level-monitoring-system

In the past few years the rainfall in India has deviated from the normal pattern.It has become difficult to predict which region will face floods and which region will face droughts.Knowing the exact volume of water in river bodies can help trigger flood alerts in a much faster and efficient way.Similarly real time water monitoring can help in calculated and efficient usage of water in case of droughts. We will be focusing on is increasing the range of network which would benefit from our project.We hope that this project provides most accurate prediction of the natural disaster beforehand to take precautionary measures accordingly.Achieving an automated dam is a part of our project including drought detection and we aim to perfect both the predictions.We also hope this project could be accessible and reliable for all the consumers.

Drawbacks from existing system



•	The existing system involves a Central Monitoring Office which itself might be affected due to the flood/rain which might cause the entire network to fail.
•	Therefore there is the necessity for a more distributed ad-hoc network.

•	In our system,each subscribed node transmits the water level measured using the sensor using a RF wireless radio transceiver to other nodes in its vicinity.
•	Each node itself is used to send alerts to all users within its vicinity(if water level is greater than threshold value) rather than a central monitoring office.
•	This ensures continuity in the network even if a few nodes are affected due to flood or rain.

•	The absence of a central monitoring system makes storage and further processing on water level data difficult; however , even this can be overcome if we use a hybrid network with a central storage node.
 
Software and Hardware requirements



1	Hardware

•	Arduino - 3 units
•	Servo Motor – 1 unit
•	RF transmitter and receiver module - 3 units
•	Buzzer - 3 units
•	Ultrasonic Sensor - 1 unit
•	Rain drop Sensor -1 unit





2	Software

•	Arduino programming software

Workflow Diagram
 ![image](https://user-images.githubusercontent.com/124515180/216833670-55d10df2-023a-43a4-bb04-22124a8cfbfe.png)


Description of Modules


•	RF transmitter and receiver module : The RF transmitter receives serial data and transmits it wirelessly through through its RF antenna.
•	Rain Sensor : Rain Sensor module allows to measure moisture via analog output pins and it provides a digital output when a threshold of moisture exceeds.The rain sensor works on the principle of total internal reflection	An infrared light beams at a 45-
degree angle on a clear area of the windshield is reflected and it is sensed by the sensor- inside the car. When it rains, the wet glass causes the light to scatter and lesser amount of light gets reflected back to the sensor.
•	Ultrasonic Sensor : An ultrasonic sensor is an electronic device that measures the distance of a target object by emitting ultrasonic sound waves, and converts the reflected sound into an electrical signal
•	Servo Motor : A servo motor is a type of motor that can rotate with great accuracy. This type of motor consists of a control circuit that provides feedback on the current position of the motor shaft, this feedback allows the servo motors to rotate with great accuracy.
•	Buzzer : A 5V Active Alarm Buzzer Module for Arduino is an audio signaling device, which may be mechanical, electromechanical,
•	Arduino : The Nano development board is the smallest and most complete board and 100% compatible with the official Arduino Nano card, and fully compatible with Windows, Mac, and Linux operating systems.


