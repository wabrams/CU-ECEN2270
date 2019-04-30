# CU-ECEN2270
Coursework from CU Boulder's ECEN 2270 Electronics Design Lab.

## ECEN 2270 Electronics Design Lab

Provides an introduction to analysis, modeling, design, and testing of analog electronic circuits in a practical laboratory setting. The laboratory is centered around a robot platform and includes design, SPICE simulations, prototyping and testing of circuits necessary to drive and remotely control the robot.

Included in this repository are the LTspice files to simulate this circuit, as well as some basic Arduino code to manuever the robot.

### Software Needed

You will need LTspice in order to open and edit the files.
You can download it from Analog.

You will also need the Arduino IDE in order to program an Arduino with the basic code.
You can download it from [Arduino](https://www.arduino.cc/en/Main/Software).

## Included Files
.asc is the schematic file
.asy is the symbol file
### Schematics and Symbols
* FeedbackControl - Feedback Loop based on encoder counts
[[https://github.com/wabrams/CU-ECEN2270/blob/master/FeedbackControl.png|alt=FeedbackControl.png]]
* MotorDriver - BJTs that can open or close to provide more or less power to motor
[[https://github.com/wabrams/CU-ECEN2270/blob/master/MotorDriver.png|alt=MotorDriver.png]]
* MotorModel - Model, given to us by Instructor, of the motor on our robot
[[https://github.com/wabrams/CU-ECEN2270/blob/master/MotorModel.png|alt=MotorModel.png]]
* SpeedControl - Complete model of the hardware feedback for a single motor
[[https://github.com/wabrams/CU-ECEN2270/blob/master/SpeedControl.png|alt=SpeedControl.png]]

## Authors

* **Will Abrams** - https://github.com/wabrams
* **David Balcells**

## Acknowledgments

* I understand that students currently enrolled in ECEN 2270 may stumble across this, use this at your own risk as it may not be compatible with your work, and will rob you of the understanding you need to have coming out of that course.
