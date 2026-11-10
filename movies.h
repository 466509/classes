//movies
#ifndef MOVIES_H
#define MOVIES_H

#include <iostream>
#include "allMedia.h"

class movies : public Media {
 private:
  char director[50];
  float duration;
  int rating;
 public:
  movies(const char* title, const char* director, int year, float duration, int rating);
  const char* getDirector() const;
  float getDuration() const;
  int getRating() const;
  void printOut() const override;
};

#endif
