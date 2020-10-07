#ifndef DICE_H
#define DICE_H


class Die
{
private:
  int value;
  int sides;
public:
Die(int = 6);
void roll();
void setSides(int = 6);
int getSides();
int getValue();

};

#endif
