//music header file
#ifndef MUSIC_H
#define MUSIC_H

#include "allMedia.h"

// music inherits shared info
class music : public Media {
 private:
  // info specific to music
  char artist[50];
  float duration;
  char publisher[50];
 public:
  //constructor recieves all music info
  music(const char* title, const char* artist, int year, float duration, const char* publisher);
  // functions that return music info
  const char* getArtist() const;
  float getDuration() const;
  const char* getPublisher() const;
  // overrides the parent print function
  void printOut() const override;
};

#endif
