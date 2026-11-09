#include <iostream>
#include <cstring>
#include "music.h"
using namespace std;

music::music(const char* t, const char* a, int y, float d, const char* p) : Media(t,y) {
  strcpy(artist, a);
  duration = d;
  strcpy(publisher, p);
}

const char* music::getArtist() const{
  return artist;
}

float music::getDuration() const {
  return duration;
}

const char* music::getPublisher() const {
  return publisher;
}

void music::printOut() const {
  cout << "Type: Music" << endl;
  Media::printOut();
  cout << "Artist: " << artist << endl;
  cout << "Duration: " << duration << " minutes" << endl;
  cout << "Publisher: " << publisher << endl;
}
