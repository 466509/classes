//movies
#ifndef MOVIES_H
#define MOVIES_H

#include <iostream>
#include "allMedia.h"

// movies inherit shared info
class movies : public Media {
 private:
  // info specific to movies
  char director[50];
  float duration;
  float rating;
 public:
  // constructor recieves all movie info
  movies(const char* title, const char* director, int year, float duration, float rating);
  // functions that return movie info
  const char* getDirector() const;
  float getDuration() const;
  float getRating() const;
  // overries the parent print funtion
  void printOut() const override;
};

#endif
