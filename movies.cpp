//movies child class
#include <iostream>
#include <cstring>
#include "movies.h"
using namespace std;

movies::movies(const char* t, const char* d, int y, float dur, float r):Media(t, y) {
  strcpy(director, d);
  duration = dur;
  rating = r;
}

const char* movies::getDirector() const {
  return director;
}

float movies::getDuration() const {
  return duration;
}

float movies::getRating() const {
  return rating;
}

void movies::printOut() const {
  cout << "Type: Movie" << endl;
  Media::printOut();
  cout << "Director: " << director << endl;
  cout << "Duration: " << duration << " minutes" << endl;
  cout << "Rating: " << rating << endl;
}
