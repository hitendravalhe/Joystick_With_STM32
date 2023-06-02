Joystick Controlled by STM32 in Arduino IDE
This repository contains the necessary code and instructions to set up a joystick controlled by an STM32 microcontroller using the Arduino IDE.

Hardware Requirements
STM32 microcontroller (such as STM32F103C8, commonly known as Blue Pill)
Joystick module
Breadboard or PCB for prototyping
Jumper wires
Software Requirements
Arduino IDE (version 1.8.10 or later)
STM32 Arduino Core library
Setup Instructions
1. Installing Arduino IDE
If you haven't installed Arduino IDE, you can download it from the official Arduino website: https://www.arduino.cc/en/software. Follow the installation instructions for your operating system.

2. Installing STM32 Arduino Core library
To use STM32 microcontrollers with Arduino IDE, you need to install the STM32 Arduino Core library. Follow these steps to install the library:

Open Arduino IDE.
Go to File > Preferences.
In the "Additional Boards Manager URLs" field, enter the following URL:
bash

https://github.com/stm32duino/BoardManagerFiles/raw/master/STM32/package_stm_index.json
Click OK to save the preferences.

Go to Tools > Board > Boards Manager.
In the Boards Manager window, search for "STM32" and click on the STM32 Cores result.
Click Install.
After installation, close the Boards Manager window.
3. Wiring the Joystick
Connect the joystick module to the STM32 microcontroller according to the following wiring diagram:

    Joystick Module    STM32 Microcontroller
         GND              GND
         VCC              3.3 or 5 V
         VRX              PA0 (Analog Pin)
         VRY              PA1 (Analog Pin)
         
4. Uploading the Code
Open the Arduino IDE.
Go to File > New to create a new sketch.
Copy and paste the following code into the new sketch: (code is given in the file )

Go to Tools > Board and select the appropriate STM32 board you are using (e.g., "Generic STM32F1 series").
Go to Tools > Port and select the port to which your STM32 microcontroller is connected.
Click on the Upload button to compile and upload the code to the STM32 microcontroller.
Open the Serial Monitor by going to Tools > Serial Monitor or pressing Ctrl+Shift+M.
Set the baud rate to 9600 in the Serial Monitor.
You should now see the X and Y values of the joystick, as well as the button state, printed in the Serial Monitor.
Customizing the Code
Feel free
