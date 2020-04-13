/*
  servo.h - Low level functions controlling a servo.

  This is one heck of an experiment to rewrite the servo library for grbl.
  The goal of this experiment is to slowly lower the pen on paper or egg.

*/

#ifndef servo_h
#define servo_h


void servo_init();

// attach the given pin to the next free channel, sets pinMode,
// returns channel number or 0 if failure
// uint8_t attach(int pin);

// as above but also sets min and max values for writes.
// uint8_t attach(int pin, int min, int max);
#endif
