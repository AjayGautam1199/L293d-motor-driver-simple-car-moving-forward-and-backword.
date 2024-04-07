# L293d-motor-driver-simple-car-moving-forward-and-backword.
let's create a new code that moves the car forward for 10 seconds and then returns back in 10 seconds using the specified motor connections.

# //=================connection is very important=============//

## 1. Motor Connections:
The code is designed to control two motors, referred to as Motor A and Motor B. The connections for these motors are as follows:

### Motor A:
Enable Pin: enA (connected to pin 8 on the Arduino)
Input 1: in1 (connected to pin 10 on the Arduino)
Input 2: in2 (connected to pin 9 on the Arduino)

### Motor B:
Enable Pin: enB (connected to pin 4 on the Arduino)
Input 3: in3 (connected to pin 6 on the Arduino)
Input 4: in4 (connected to pin 5 on the Arduino)

<img src="https://github.com/AjayGautam1199/L293d-motor-driver-simple-car-moving-forward-and-backword./blob/main/circuit%20diagram.png" alt="Circuit Diagram" /> <!-- #1 -->

<img src="https://github.com/AjayGautam1199/L293d-motor-driver-simple-car-moving-forward-and-backword./blob/main/image.png" alt="Image" /> <!-- #2 -->


## 2. Setup Function (setup()):
In the setup() function, the code sets the motor control pins as outputs using the pinMode() function. This function configures the specified pins for output, allowing them to control the motor.

## 3. Loop Function (loop()):
The loop() function controls the behavior of the car. It consists of the following steps:

### a. Moving Forward:
The moveForward() function is called, causing both motors to rotate forward. The motors are set to full speed using analogWrite() on the enable pins (enA and enB). The appropriate input pins (in1, in2, in3, in4) are set to achieve forward rotation.

### b. Delay for Forward Movement:
The code then pauses for 10 seconds using delay() to keep the car moving forward for the specified duration.

### c. Stopping and Reversing:
The stopMotors() function is called to stop the motors briefly. After a 1-second pause, the moveBackward() function is called to make the car move backward. Similar to moving forward, the appropriate input pins and enable pins are configured to achieve reverse rotation of both motors.

### d. Delay for Backward Movement:
The code pauses again for 10 seconds, making the car move backward for the specified duration.

### e. Stopping Motors:
Finally, the stopMotors() function is called to stop both motors, and the loop repeats, beginning with moving forward again.

## 4. Motor Control Functions:

'
moveForward() Function:
'

This function sets the appropriate input pins to make both motors rotate forward and sets the enable pins to provide full speed.

'
moveBackward() Function:
'

This function sets the appropriate input pins to make both motors rotate backward and sets the enable pins to provide full speed.

'
stopMotors() Function:
'

This function stops both motors by setting the input pins to LOW and turning off the enable pins.

# //============Note============//
## 5. Adjustments:
Feel free to adjust the delay durations or motor speeds (via the analogWrite() values) to suit your specific requirements for forward and backward movement.

Make sure your hardware connections match the pins specified in the code for proper functionality.



 # think creative, think big...
