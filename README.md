# E-18 Ultrasonic

**Project Status:** Ready to manufacture

## Description

There are many challenges when bringing robot products to market. These products consist of dozens of technologies, each requiring a unique skillset to implement and connect together. This leads to one key issue - time. The time spent to develop, iterate, and implement every one of these technologies makes robot products incredibly expensive and risky to develop.

Out of our passion to solve this issue, EZ-Builder was born. The EZ-Builder software platform reduces the time it takes to get from idea to implementation. It's the leading launch pad for robot builders to quickly apply technologies to their projects and businesses to speed up product development and iteration cycles. Since 2011 we have been listening to the challenges robot builders encounter and continue to provide them with an ever expanding toolbox of solutions. Join us on this journey!

We didn't stop at the software, we also made time saving hardware solutions. This Ultrasonic reference design is one of them. The values coming from this sensor can be used to determine real world distance, collision detection, or objects detected by simulated radar when combined with EZ-Builder. This design is a simple 3-wire design with an integrated 5V regulator on-board. It saves the need for a fourth wire that most Ultrasonic sensors require, or an external voltage regulator. We want to share these files with you so you can create your own version for your community and customers to enjoy!

**Major components:** 
- PIC16F1704-I/ST PIC microcontroller (custom firmware provided)
- NCP1117ST50T3GOSCT 5V Regulator
- HC-SR04 Ultrasonic sensor

**Manufacturing notes:** 
1. Supplier: provides pre-built HC-SR04 Sensor
2. Supplier: programs custom firmware into the PIC16F1704-I/ST at their facility before sending to manufacturer
3. Manufacturer: Single side placement and soldering of SMT components
4. Manufacturer: Dual Side soldering of THT components

## Contents

[**Documentation:**](https://github.com/synthiam/E-18_Ultrasonic/tree/master/E-18%20Documentation) Schematic PDF, Datasheet PDF, BOM, Assembly Notes, Test Procedures

[**Hardware:**](https://github.com/synthiam/E-18_Ultrasonic/tree/master/E-18%20Hardware) Altium PCB design File, Altium SCH Design File, Gerbers

[**Firmware:**](https://github.com/synthiam/E-18_Ultrasonic/tree/master/E-18%20Firmware) Code, Compiled Hex

*Altium Libraries are also available <a href="https://github.com/synthiam/Synthiam_Altium_Librairies">here</a>*

## Photos

<p align="left">
<img src="https://live.staticflickr.com/65535/47744685401_8ac3556f95_k.jpg" width="683" height="383">
<img src="https://live.staticflickr.com/65535/32801182167_54b761051f_k.jpg" width="683" height="383"></p>

## Roll Out Video

This Roll-out Video includes:

1. Feature set 
2. Hook-up guide 
3. Using Synthiam EZ-Builder Software Behavior Control
4. Schematic overview
5. Bill of Materials (BOM) overview
6. Custom firmware location
7. Assembly instructions 

Link: https://youtu.be/U_xIYUk4qag

<a href="https://youtu.be/U_xIYUk4qag"><img src="https://media.giphy.com/media/Ky0A5ym6ERXtM6gtNM/giphy.gif" width="683" height="383"></a>

## EZ-Builder Behavior Control

There are 3 EZ-Builder controls that are directly related to the Ultrasonic. The Ultrasonic Distance, Collision Detection, and Radar controls. Grab the values from each of these controls with the click of a mouse button or with code. 

Link: https://synthiam.com/Products/Controls/Ultrasonic-Distance

<a href="https://synthiam.com/Products/Controls/Ultrasonic-Distance"><img src="https://media.giphy.com/media/SYRVGwGE29B9MlwK0z/giphy.gif" width="683" height="383"></a>

## Contact

For profit use of these files requires written consent. Contact partners@synthiam.com. For everyone else, party on!

Synthiam Website: https://synthiam.com

## License

This project is released under the following licenses:

**Hardware:** Creative Commons Plus Attribution-NonCommercial 4.0 International (CC+ BY-NC 4.0)

**Firmware:** Apache 2.0 + “Commons Clause” License Condition v1.0

Please see [LICENSE.md](https://github.com/synthiam/E-18_Ultrasonic/blob/master/LICENSE.md) for license details.

<a href="https://synthiam.com"><img src="https://live.staticflickr.com/65535/47791527651_358dffb302_m.jpg"></a>

