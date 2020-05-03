#ifndef buzzer_included
#define buzzer_included

#define F5 698
#define D6 1175
#define D5 587
#define E6 1319
#define F6 1397
#define C6 1047
#define A5 880
#define G5 784
#define E5 659

extern char play_song;
extern int notes[43];
extern int note_duration[43];
extern int delay_time[43];

void buzzer_init();
void buzzer_set_period(short cycles);

#endif // included
