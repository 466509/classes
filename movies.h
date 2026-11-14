//movies
#ifndef MOVIES_H
#define MOVIES_H

#include <iostream>
#include "allMedia.h"

class movies : public Media {
 private:
  char director[50];
  float duration;
  float rating;
 public:
  movies(const char* title, const char* director, int year, float duration, float rating);
  const char* getDirector() const;
  float getDuration() const;
  float getRating() const;
  void printOut() const override;
};

#endif
