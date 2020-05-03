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
  u_char j,i,k,r,c;

  clearScreen(COLOR_WHITE);


  /** draws filled in square

  for(j = 0, i=0;j < 30 && i < 30;j++,i++){
    drawPixel(j,j,COLOR_BLACK);
    drawPixel(0,j,COLOR_BLACK);
    drawPixel(i,30,COLOR_BLACK);
    for(k = 0; k < j; k++) {
      drawPixel(k,j,COLOR_BLACK);
      drawPixel(j,k,COLOR_BLACK); take out this to draw filled in triangle
    }
  }
  */

  /* non filled in square
  for(j = 0, i=0;j < 30 && i < 30;j++,i++){                                
    drawPixel(0,j,COLOR_BLACK);   Vertical line
    drawPixel(i,30,COLOR_BLACK);   bottom horizontal line
    drawPixel(30,i,COLOR_BLACK); //right vertical line
    drawPixel(j,0,COLOR_BLACK); //top horizontal line
  }
  */

  /* large rectangle going down
  for(i = 0; i <= 50; i++) {
    for(j = 0; j <= 10; j++) {
      drawPixel(20-j, i,COLOR_BLACK);
      drawPixel(20, i,COLOR_BLACK);
    }
  }
  */

  /*
  //Filled Triangle
  for(i=0,r = 60; i<=60 && r >= 0; i++,r--) {
    for(k = 60-i,j=60+i; k <= 60; k++) {
      drawPixel(k,i,COLOR_BLACK);
      drawPixel(r+60,k,COLOR_BLACK);
    }
  }
  //Filled Triangle
  for(r=30, c= 0; r >= 0 && c <= 30; r--,c++) {
    for(k = 0+r,j=30-r; k <= 30; k++) {
      drawPixel(k+30,r+30,COLOR_BLUE);
      drawPixel(c+60,r+30,COLOR_WHITE); //k+60 col
    }
  }
  */

}
  
