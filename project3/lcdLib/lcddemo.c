/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_PINK);

  drawString5x7(10,40, "I'M DYING!!", COLOR_TURQUOISE, COLOR_WHITE);
  drawString8x12(60,60, "Help me", COLOR_ROSE_QUARTZ, COLOR_BLACK);

  //fillRectangle(30,30, 60, 60, COLOR_ORANGE);
  
}
