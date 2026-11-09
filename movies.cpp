//movies child class
#include <iostream>
#include <cstring>
#include "movies.h"
using namespace std;

movies::movies(const char* t, const char* d, int y, float dur, const char* r):Media(t, y) {
  strcpy(director, d);
  duration = dur;
  strcpy(rating, r);
}

const char* movies::getDirector() const {
  return director;
}

float movies::getDuration() const {
  return duration;
}

const char* movies::getRating() const {
  return rating;
}

void movies::printOut() const {
  cout << "Type: Movie" << endl;
  Media::printOut();
  cout << "Director: " << director << endl;
  cout << "Duration: " << duration << " minutes" << endl;
  cout << "Rating: " << rating << endl;
}
