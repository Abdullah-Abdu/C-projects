#ifndef CAT_H
#define CAT_H

// Description: Cat class definition

enum Mood {SLEEPY, HUNGRY, ANGRY};

class Cat {
 public:
  Cat();
  Cat(char name[10]);  // constructor with name setting
  void speak();           // display in the console how the cat speaks
  int getAge() const;     // get the cat's age
  void setWeight(long weight);  // set the cat's weight
  void setMood(Mood mood);      // set the cat's mood
 private:
  int _itsAge;
  long _itsWeight;
  char _itsName[10];
  Mood _itsMood;
};

#endif
