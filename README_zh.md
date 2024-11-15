# 多路串口调试助手

[English](https://github.com/hellonone/MultiSerialPort_finish/blob/master/README.md)

## 项目简介

该项目是一个基于 Qt 开发的多路串口调试助手，支持多线程连接多个串口，并实时接收和处理串口数据。用户可以在同一个界面中管理多个串口通道，方便地进行串口通信调试。

## 功能特点

- 支持多路串口连接，可以同时连接多个串口设备。
- 支持设置串口的波特率、停止位、数据位和校验位。
- 实时显示每个通道的接收数据和发送数据。
- 支持自定义添加、删除和重命名通道。
- 可清除接收区和发送区内容，方便查看最新数据。

## 安装与使用

### 依赖环境

- Qt 5 或更高版本

### 安装步骤

1. 下载或克隆项目代码：

   ```
   bash
   
   
   复制代码
   git clone https://github.com/hellonone/MultiSerialPort_finish.git
   ```

2. 使用 Qt Creator 或命令行打开项目文件，并进行编译。

### 使用方法

1. 启动程序后，选择串口连接参数（如波特率、停止位、数据位等）。
2. 添加一个或多个通道，根据需要进行串口通信调试。
3. 通过界面中的“发送”按钮发送数据，接收区会实时显示接收到的数据。

### 程序界面

![image](https://github.com/hellonone/MultiSerialPort_finish/blob/master/programImage.png)

## 项目结构

- `main.cpp`：程序入口
- `mainwindow.cpp` / `mainwindow.h`：主窗口逻辑
- `serialport.cpp` / `serialport.h`：串口操作的封装

## 贡献方式

欢迎大家提交代码、提出意见或报告问题。请在提交 Pull Request 前确保代码规范符合项目要求。

## 许可证

该项目遵循 MIT 开源许可证。
