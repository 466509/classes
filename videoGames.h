//video games header file
#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H

#include "allMedia.h"

// video games inherit the info from allMedia
class videoGames : public Media {
 private:
  // information specific to video games
  char publisher[50];
  float rating;
 public:
  // constructor
  videoGames(const char* title, int year, const char* publisher, float rating);
  // return video game specific information
  const char* getPublisher() const;
  float getRating() const;
  // overrides the parent print function
  void printOut() const override;
  
};

#endif
