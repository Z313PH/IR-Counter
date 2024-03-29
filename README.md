# IR Counter and "Marble Sorter"



## Overview

This project implements an IR Break Beam sensor to count objects and sort them into two separate directions using a servo mechanism. The setup is designed to divide objects into groups of ten, directing each group alternately to the right and left.

## Functionality

- Utilizes an IR Break Beam sensor to accurately count objects passing through.
- Sorts objects into two directions using a servo mechanism.
- Ideal for scenarios requiring precise counting and sorting, such as sorting marbles into groups.

## Implementation

Imagine a scenario where marbles are being sorted into groups of ten. As marbles move down a track, the IR sensor counts them. Once it detects a group of ten marbles, the servo directs them off the track to the right. The next group of ten marbles is then directed off the track to the left. This process repeats continuously.

## Setup Considerations

- While it's not mandatory to build the physical mechanism, considering it in a working scenario can aid in understanding the functionality.
- Visualize a track along which objects are moving, with the IR sensor positioned to count them, and the servo to divert them based on the count.

## Components Needed

- IR Break Beam sensor
- Servo motor
- Microcontroller (e.g., Arduino)
- Objects to be counted and sorted (e.g., marbles)

## Circuit Diagram
<img width="590" alt="Circuit Diagram" src="https://github.com/Z313PH/IR-Counter/assets/119972119/c9ee2638-22d4-4cb0-9ad5-9dc4e7f24da6">


## Implementation Details

- Configure the IR sensor to detect objects passing through its beam.
- Program the microcontroller to count objects and trigger the servo when a predetermined count is reached.
- Design the servo mechanism to divert objects to the appropriate direction based on the count.

## Repository Contents

- **Arduino Code**: Contains the code necessary to implement the object counting and sorting mechanism.
- **Project Image**: Illustration or image depicting the conceptual setup of the project.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgements

- This project was inspired by the need for automated counting and sorting mechanisms in various industrial and recreational settings.

Feel free to contribute, report issues, or suggest improvements! Happy sorting! 🎲🤖
