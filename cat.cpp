// Description: Cat class implementation

#include "cat.h"
#include <iostream>
#include <cassert>

using std::cout; using std::endl;

Cat::Cat() {
  _itsAge = 0; _itsWeight = 0;
  _itsName[0]='\0';
}

Cat::Cat(char name[10]) {
  int i = 0;
  _itsAge = 0; _itsWeight = 0;
  while ((i < 9) && ( name[i] != '\0' )) {
    _itsName[i] = name[i];
    i++;
  }
  _itsName[i] = '\0';
}

void Cat::speak() {
  cout << _itsName << ": ";
  switch(_itsMood) {
    case SLEEPY: cout << "Mmmmw.."; break;
    case HUNGRY: cout << "Meow?"; break;
    case ANGRY: cout << "Hissss!"; break;
  }
  cout << endl;
}

int Cat::getAge() const {
  return _itsAge;
}

void Cat::setWeight(long weight) {
  _itsWeight = weight;
}

void Cat::setMood(Mood mood) {
  _itsMood = mood;
}
