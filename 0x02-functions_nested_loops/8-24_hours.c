#include <stdio.h>

void jack_bauer(void) {
  int hour;
  int minute;

  for (hour = 0; hour < 24; hour++) {
    for (minute = 0; minute < 60; minute++) {
      printf("%02d:%02d\n", hour, minute);
    }
  }

  return 0;
}
