# Project 3: Graphical LCD Toy 
## Introduction

Continuing your effort to help ACME Solutions provide Christmas toys, 
your task is now to develop a toy with a graphical LCD screen.  You should 
utilize the knowledge you havegained working with the buttons and 
buzzer.  In addition, a series of libraries have been found to assist
you in creating your game.

Students can propose alternate projects that demonstrate
similar skills.  These proposals must approved by the course
instructor in writing (e.g. email) at least two weeks before the
project due date. 

## Requirements
Your game should meet the following minimum criteria:

Special for Spring 2020

- Dynamically render graphical elements that move and change, and multiple sounds
-- including one original algorithmically rendered graphical element 
- Some text must should be rendered from an ASCII string.
-- using a font other than 5x7
- Graphical rendering must be performed by an interruptable foreground task
-- that sleeps when there is nothing to update
- The program's behavior must change in response to button presses and the progress of time
-- Sensitivity to time and buttons must be interrupt driven


## Libraries

Several libraries are included.  
They can be installed by the default production of Makefile in the repostiory's 
root directory, or by a "$make install" in each of their subdirs.

- timerLib: Provides code to configure Timer A to generate watchdog timer interrupts at 250 Hz

- p2SwLib: Provides an interrupt-driven driver for the four switches on the LCD board.

- lcdLib: Provides low-level lcd control primitives, defines several fonts, 
and a simple demo program that uses them.

- shapeLib: Provides an translatable model for shapes that can be translated 
and rendered as layers.

- circleLib: Provides a circle model as a vector of demi-chord lengths,
pre-computed circles as layers with a variety of radii, 
and a demonstration program that renders a circle.


## How to run Project3 program

To run Project3 you need to first make sure that all directories are installed. To do this run Make in the root directory. You can also clean the files by running Make clean in the root directory or in each of the subdirectories.

After all the directories are installed you can run make load in the subdirectory shape-motion.
- shape-motion: A program that uses shapeLib to represent and render shapes that move. The program also uses the rest of the subdirectories to use switch interrupts and the watch dog timer. 


