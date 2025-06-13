// Description: Simple illustration with the cat example
#include "cat.h"

int main() {
  char frisky_name[] = "Frisky";
  Cat frisky(frisky_name);
  frisky.setMood(SLEEPY);
  frisky.speak();

  return 0;
}
