# Wiper Control System

## Introduction
The wiper system is an essential component of the entire vehicle system. They are made up of an ac motor and an arm that cleans the front and rear windshield surfaces. Rain sensors, which are basically LEDs that detect the amount of water on the windshield, are also used in modern cars to provide automatic sensing operation.Existing system manually used control stalk to activate wiper and the process of pulling up wiper is difficult to be handled. The driver needs to switch on and off the control stalk and it will reduce the driver’s concentration during the driving. Thus, this system is proposed to solve all these problems. The concept of this wiper system is similar with other conventional wiper, yet this system will be upgraded to an automatic control system by using a controller.Whenever the water hit a dedicated sensor that located on windscreen, it will send a signal to move on the wiper motor.Once water is not detected by sensor, the wiper will automatically stop. This will help the driver to give more concentration and reduce the car accident probability. 

### Features
- STM32F407 based controller 
- Push button to turn on ignition
- LED indicating the wiping operations

## Software Used
- STM32CubeIDE

# Components Required
Board Name : STM32F4 DISC1

Device Name : STMF407VG

![STM BOARD1](https://user-images.githubusercontent.com/101317269/168134489-1c4b82e7-9309-40f3-86dd-2bda6bf1e692.png)

## SWOT ANALYSIS
## Strengths
- Clean windshield during heavy rains
- considered for safety while driving for clear vision
## Weakness
- Basic implementation of wiper system
## Opportunities
- Implementation of water spray along with wipers 
- Rain sensing wipers
## Threats
- Failure of operation might cause vision problem while driving
## 4W&#39;s and 1&#39;H
## Why
The wiper system's primary function is to clean the windscreen sufficiently to provide adequate visibility at all times.
## What
Wipers system are operated by an electric motor. The electric motor is attached to a worm gear, which transmits the necessary force to a long rod that sets the wiper arms in motion..
## When
Mainly used during the rainy season or when there is unwanted dust in the windshield.
## Where
During driving in heavy rain
## How
It is activated when we press the wiper switch.


# Detail Requirements
## High Level Requirements
   ID | Description | Status
----- | ------------|---------------------------
HLR 01| Turn on ignition | Implemented
HL 02| Turn on wipers| Implemented
HL 03| change speed of lEDs| Implemented



##  Low Level Requirements
   ID | Description | Status
----- | ------------|---------------------------
LL 01| Blink three LEDs one after other | Implemented
LL 02| Turn on controller | Implemented

