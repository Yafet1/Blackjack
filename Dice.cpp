#include <iostream>
#include "Dice.h"
#include <cstdlib>
#include <ctime>
using namespace std;


 Die::Die(int numSides)
 {
   unsigned seed = time(0);

   srand(seed);
 }


void Die::setSides(int numSides)
	{
		sides = numSides;
	}


  void Die::roll()
  {
  	const int MIN = 1;

  	value = (rand() % (6 - MIN + 1)) + MIN;
  	value += (rand() % (6 - MIN + 1)) + MIN;
  }

  int Die::getSides()
  {
  	return sides;
  }

    int Die::getValue()
    {
    	return value;
    }
