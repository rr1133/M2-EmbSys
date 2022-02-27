# Architecture

## Structural Design:

### Block Diagram:

![BEHAV](https://user-images.githubusercontent.com/81153072/155898669-54ac32fd-b829-410b-b7c4-9196d6c8b4b3.png)

### Component's Detail:

#### Ultrasonic distance sensor
This sensor is a modified version of the original UDM sensor. The UDM sensor module has four pins but this module has only three pins for connection to external circuit. The transmitter unit sends an ultrasonic wave of 40kHz directed towards the target. The reflected signal is received by the receiver unit, which calculates distance based on the speed of ultrasonic waves and the time required by the waves to travel to-and-fro.

#### Sensor Interfacing Circuit
An ultrasonic sensor is a proximity sensor that is used to measure the distance of a target or object. It detects the object by transmitting ultrasonic waves and converts the reflected waves into an electrical signal. These sound waves travel faster than the speed of the sound that humans can hear.

#### OPTO Intrupt Sensor
A Photointerrupter is a transmission-type photosensor, which typically consists of a light emitting elements and light receiving elements aligned facing each other in a single package, that works by detecting light blockage when a target object comes between both elements, acting as an optical switch.
This circuit generates a negative pulse when the strip passes the gap in the sensor. This pulse is used to generate an interrupt signal for the microcontroller.The circuit comprises a slotted opto isolator module, BC547 npn transistor T1 and a few resistors.

#### LCD panel
The 20×4 LCD displays the scanning angle, measured distance, messages like Object Detected and Scanning, etc. It accepts ASCII value of any letter or digit and displays it on the selected line.

#### LED dial
Twelve red-colour LEDs are arranged like a dial of clock. Each LED indicates an angle between 0o and 330o that is separated from the next or previous by 30 degrees. When an object is detected, its angle is indicated by the corresponding angle of LED. This gives an approximate idea of position, direction and angle of an object with respect to reference position.

#### Buzzer
It is a piezoelectric DC buzzer that generates audible beep-like sounds when given DC supply of 5V. It is used to give short beep sounds on detection of an object.

## Behavioural Design:

### Schematic diagram 
![image](https://user-images.githubusercontent.com/81153072/155899062-c086ad10-75bc-444c-8df9-b5e68a1d1cd8.png)




