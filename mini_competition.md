---
# Feel free to add content and custom Front Matter to this file.
# To modify the layout, see https://jekyllrb.com/docs/themes/#overriding-theme-defaults

layout: page
title: Robot Competition
permalink: /competition/
nav_order: 3
nav_exclude: true
---

### Robot Competition!

Hi all, in this monthly-long project, you are going to **design, build, and prototype** a working bridge-crossing robot. Here is a [detailed documentation](assets/pdf/assignments/Robot_Design_Competition.pdf) of the competition requirment. Read it thouougly will be helpful for the project. 

### Design Constraints and Requirments
The basic function of your robot is to move along a ``bridge''. The bridge is about 1 meter long and is wrapped with a layer of soft foam. You will try to move your robot from the start --- one end of the tube to the other end, then come back. The bridge is installed in Sandbox and you are free to test your design any time before the competition day.

For this project, there is no dedicated design you should follow. In other words, as a designer and prototyper, you are free to design the bot and its climbing mechanism however you want. Although, as there is no project without limitations on resources, here are four design requirements that you should follow:

<ul>
    <li>Only one ESP32, one motor driver, and one gear motor are allowed in your design. Alternatively, you are allowed to substitute the dc motor with the servo motor that is provided in your kit. In this way, you will not allowed to use the gear motor, hence no motor driver is needed. You are allowed to use other non-actuation components in your design, e.g. IMU. If you are not sure whether certain parts can be used for your project, consult your instructor and TA.</li>
    <li>Your robot will be powered via either the usb cable provided, or a 7.4v 250-350 mah Li-Po battery. Note that there are advantages and disadvantages both ways, please read the "Hint" section for more information.</li>
    <li>Your robot has to be controlled by a laptop via keyboard. There should be at least 3 commands functional: move left, move right and stop. You can choose to send the command either via Bluetooth or serial (closely related to how do you want to power your robot). You can also implement WIFI connection between your laptop and your esp32, however, since WIFI drains the battery really quickly and router won't be provided at the competition, we don't recommend WIFI as your first choice. But if you do decide on using WIFI, please make sure you can accommodate your robot with proper power source and connection at the competition.</li>
    <li>You should design your robot self-contained. That is, your robot should hold all the electronics, except the usb cable if you decide to use one. Any Free hanging/moving motor, battery, breakout board, bread board, etc. will lead to points off. Any glue or tape will also lead to points off. We will provide a set of M2 bolts and nuts to work with, you are welcome to introduce any hardware you have access to into your assembly. Note that the batteries are going to be for shared use, so you should design your battery holder easy to access and easy to get battery in and out.</li>
</ul>

### Competition Day
At the competition/demo day, we will test run all robots. Your robot will start at one side of the bridge, cross the bridge, stop, and come back. There are markers that indicates the start and finish line on both sides of the bridge. Each group will be given two chances (On the mark of robot crossing the start line). Accomplishing this task partially will be granted partial grade.

You will aim at finishing the "run" at a fast speed. We will time each run, and the top 3 groups with the "fastest lap" will be granted extra credit (worth 5\% of the total points if this project).

The instructor and TA will also pick 2 of the most outstanding mechanism design and award bonus credit (worth 10\% of the total points of this project) to the two groups.

### Team
Unlike the weekly assignment, in this robot design project you will pair up with another classmate and work together on the design. Although, as we have an odd number of students, we will reserve 3 spots for students who would like to work on this individually. The compensation for you working by yourself, is that your grade will have a 1.3X multiplier (caps at full). We have opened a number of groups on ELMS. You can sign up yourself to one of the groups like how we did for the semester-long project.
### Logistics
To accommodate this competition and your robot development, Sandbox is generously offering a spot for you to test your prototypes along the way. We will use the same setup to hold the competition. Please make sure all the items at the "development center" won't leave sandbox.

The setup includes:

<ul>
    <li>The "bridge" your robot will be crossing.</li>
    <li>8 of 7.4v 250-300mah Li-Po batteries, for sharing.</li>
</ul>

These batteries have been charged to full. If you find a battery run out, bring it down to 0102 and we will charge it
for you.


The prototyping workflow of Assignment 2 (radar fixture) applies in this project. You can use any 3D printers (please make sure you finished the training for any machines you are using, and ask for help if you are not sure what to do) in the Sandbox for prototyping, we will buy filament directly for Sandbox as compensation. Please follow their rules when it comes to printer management.

### Hint
Check this: [detailed documentation](assets/pdf/assignments/Robot_Design_Competition.pdf)