//video games header file
#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H

#include "allMedia.h"

class videoGames : public Media {
 private:
  char publisher[50];
  float rating;
 public:
  videoGames(const char* title, int year, const char* publisher, float rating);
  const char* getPublisher() const;
  float getRating() const;
  void printOut() const override;
  
};

#endif
