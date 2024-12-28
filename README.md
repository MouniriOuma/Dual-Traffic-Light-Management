# Dual-Traffic-Light-Management

## Description
This project simulates two traffic lights at an intersection using a PIC16F887 microcontroller. The lights are coordinated to manage traffic flow efficiently.

## Circuit
### Red Light
![Red Light Circuit](dual_red_light_circuit.png)  
*Circuit setup when the red lights are active.*

### Yellow Light
![Yellow Light Circuit](dual_yellow_light_circuit.png)  
*Circuit setup when the yellow lights are active.*

### Green Light
![Green Light Circuit](dual_green_light_circuit.png)  
*Circuit setup when the green lights are active.*

## Files
- `dual_red_light_circuit.png`: Circuit schematic for the red lights.
- `dual_yellow_light_circuit.png`: Circuit schematic for the yellow lights.
- `dual_green_light_circuit.png`: Circuit schematic for the green lights.
- `code.c`: MikroC program for managing two traffic lights.

## Instructions
1. View the individual circuit setups for each light step in the provided images.
2. Compile `code.c` in MikroC to generate the hex file.
3. Upload the hex file to Proteus and simulate the traffic light sequence.
4. Observe the dual traffic lights transitioning in a coordinated sequence.

## Tools
- MikroC Pro for PIC
- Proteus ISIS
