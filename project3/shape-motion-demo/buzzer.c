#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"

// boolean true if song is to be played, false otherwise
char play_song = 0;

// specific notes to be played
int notes[43] = {D5, F5, D6, D5, F5, D6, E6, F6, E6, F6, E6, C6, A5, A5, D5, F5, G5, A5, A5,
		     D5, F5, G5, E5, D5, F5, D6, D5, F5, D6, E6, F6, E6, F6, E6, C6, A5, A5, D5,
		     F5, G5, A5, A5, D5};

// The duration of each note
int note_duration[43] = {100, 100, 200, 100, 100, 200, 200, 100, 100, 100, 100, 100, 100, 200,
			  200, 100, 100, 100, 200, 200, 100, 100, 100, 100, 100, 200, 100, 100,
			  200, 200, 100, 100, 100, 100, 100, 100, 200, 200, 100, 100, 300, 200,
			  300};

// The delay between each note
int delay_time[43] = {4, 4, 12, 4, 4, 12, 15, 15, 4, 4, 4, 4, 15, 5, 5, 5,
			5, 25, 5, 5, 5, 5, 25, 4, 4, 12, 4, 4, 12, 10, 5, 4,
		      4, 4, 4, 15, 5, 5, 5, 5, 5, 5, 2000};

void buzzer_init()
{
    /* 
       Direct timer A output "TA0.1" to P2.6.  
        According to table 21 from data sheet:
          P2SEL2.6, P2SEL2.7, anmd P2SEL.7 must be zero
          P2SEL.6 must be 1
        Also: P2.6 direction must be output
    */
    timerAUpmode();		/* used to drive speaker */
    P2SEL2 &= ~(BIT6 | BIT7);
    P2SEL &= ~BIT7; 
    P2SEL |= BIT6;
    P2DIR = BIT6;		/* enable output to speaker (P2.6) */
}

void buzzer_set_period(short cycles) /* buzzer clock = 2MHz.  (period of 1k results in 2kHz tone) */
{
  CCR0 = cycles; 
  CCR1 = cycles >> 1;		/* one half cycle */
}
  

