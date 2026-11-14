#include <iostream>
#include <cstring>
#include "music.h"
using namespace std;

// constructor initializes parent class and music info
music::music(const char* t, const char* a, int y, float d, const char* p) : Media(t,y) {
  strcpy(artist, a);
  duration = d;
  strcpy(publisher, p);
}

// returns the artist
const char* music::getArtist() const{
  return artist;
}

// returns the duration
float music::getDuration() const {
  return duration;
}

// returns the publisher
const char* music::getPublisher() const {
  return publisher;
}

// prints all music info
void music::printOut() const {
  cout << "Type: Music" << endl;
  Media::printOut();
  cout << "Artist: " << artist << endl;
  cout << "Duration: " << duration << " minutes" << endl;
  cout << "Publisher: " << publisher << endl;
}
