//music header file
#ifndef MUSIC_H
#define MUSIC_H

#include "allMedia.h"

class music : public Media {
 private:
  char artist[50];
  float duration;
  char publisher[50];
 public:
  music(const char* title, const char* artist, int year, float duration, const char* publisher);
  const char* getArtist() const;
  float getDuration() const;
  const char* getPublisher() const;
  void printOut() const override;
};

#endif
