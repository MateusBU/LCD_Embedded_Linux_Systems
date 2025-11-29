# LCD_Embedded_Linux_Systems
C examplex for controlling LCD displays on Embedded Linux systems.


# LCD Example – WiringPi (C)

This project demonstrates how to control a **16x2 character LCD** using **C** and **WiringPi** on a Raspberry Pi.

## Features
- Initialize a 16×2 LCD using WiringPi  
- 4-bit LCD communication  
- Display and clear text  
- Minimal C example

## Files
- `lcd.c` — Main program

## WiringPi Pins
| Function | WiringPi Pin |
|----------|--------------|
| RS       | 26           |
| E        | 19           |
| D4       | 13           |
| D5       | 6            |
| D6       | 5            |
| D7       | 21           |

## Compile
```bash
gcc lcd.c -o lcd -lwiringPi
