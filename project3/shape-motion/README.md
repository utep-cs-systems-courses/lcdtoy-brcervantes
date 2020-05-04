# Project 3 LCD Toy

### How to run shape motion

The shape motion directory can be run after installing the root directory. Once that is done you can run make load in the shape-motion subdirectory as well as make clean to clear .o files. 

### What happens

Once the shape motion is loaded the lcd screen will display several objects approximately in the center of the screen. These objects include several space invader sprites, a circle and a rectangle. Once a button is pressed the following events occur;

- BUTTON 1 - when pressed and held down the objects will begin to move and the buzzer will play a note. The objects will continue to move and the buzzer will continue to play until the button is released. Above the game field the text in 8x12 font will display INVADERS!

- BUTTON 2 - when pressed and held down the objects will begin to move and they will change a different color, the buzzer will play a different note then button 1. They will continue until the button is released.

- BUTTON 3 - Similar to button 2, when button 3 is held down the objects will move and change color, along with a different note.

- BUTTON 4 - When pressed (not held) the screen will be cleared and changed to black displaying GAME OVER in 8x12 font and continue Y/N in 5x7 font.
