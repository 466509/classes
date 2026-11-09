//video games header file
#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H

#include "allMedia.h"

class videoGames : public Media {
 private:
  char publisher[50];
  char rating[50];
 public:
  videoGames(const char* title, int year, const char* publisher, const char* rating);
  const char* getPublisher() const;
  const char* getRating() const;
  void printOut() const override;
  
};

#endif
