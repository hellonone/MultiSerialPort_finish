# Multi-Serial Port Debug Assistant

[中文](https://github.com/hellonone/MultiSerialPort_finish/blob/master/README_zh.md)

## Project Overview

This project is a multi-serial port debug assistant developed with Qt, supporting multi-threaded connections to multiple serial ports, and real-time reception and processing of serial data. Users can manage multiple serial channels in the same interface, making serial communication debugging convenient.

## Features

- Supports multiple serial port connections, allowing simultaneous connections to multiple serial devices.
- Allows setting serial port parameters, such as baud rate, stop bits, data bits, and parity bits.
- Real-time display of received and sent data for each channel.
- Supports custom adding, deleting, and renaming of channels.
- Clear the receive and send areas to view the latest data.

## Installation & Usage

### Requirements

- Qt 5 or higher

### Installation Steps

1. Download or clone the project code:

   ```
   bash
   
   
   复制代码
   git clone https://github.com/hellonone/MultiSerialPort_finish.git
   ```

2. Open the project file in Qt Creator or compile it via the command line.

### Usage

1. After launching the program, select serial connection parameters (such as baud rate, stop bits, data bits, etc.).
2. Add one or more channels as needed for serial communication debugging.
3. Use the "Send" button to transmit data, and the receive area will display the data received in real-time.

### Program

![image](https://github.com/hellonone/MultiSerialPort_finish/blob/master/programImage.png)

## Project Structure

- `main.cpp`: Program entry point
- `mainwindow.cpp` / `mainwindow.h`: Main window logic
- `serialport.cpp` / `serialport.h`: Encapsulation of serial port operations

## Contribution

Contributions, suggestions, and bug reports are welcome. Please ensure code compliance with project standards before submitting a Pull Request.

## License

This project is licensed under the MIT License.
