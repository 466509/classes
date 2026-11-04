//movies
#ifndef MOVIES_H
#define MOVIES_H

#include <iostream>
#include "allMedia.h"

using namespace std;

class movies : public Media {
 public:
  movies(int year);
  void printOut();
};

#endif
