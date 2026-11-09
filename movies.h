//movies
#ifndef MOVIES_H
#define MOVIES_H

#include <iostream>
#include "allMedia.h"

class movies : public Media {
 private:
  char director[50];
  float duration;
  char rating[25];
 public:
  movies(const char* title, const char* director, int year, float duration, const char* rating);
  const char* getDirector() const;
  float getDuration() const;
  const char* getRating() const;
  void printOut() const override;
};

#endif
