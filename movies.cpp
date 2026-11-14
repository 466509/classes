//movies child class
#include <iostream>
#include <cstring>
#include "movies.h"
using namespace std;

// constructor initializes parent class and movie info
movies::movies(const char* t, const char* d, int y, float dur, float r):Media(t, y) {
  strcpy(director, d);
  duration = dur;
  rating = r;
}

// returns the director
const char* movies::getDirector() const {
  return director;
}

// returns the duration
float movies::getDuration() const {
  return duration;
}

// returns the rating
float movies::getRating() const {
  return rating;
}

// prints all movie info
void movies::printOut() const {
  cout << "Type: Movie" << endl;
  Media::printOut();
  cout << "Director: " << director << endl;
  cout << "Duration: " << duration << " minutes" << endl;
  cout << "Rating: " << rating << endl;
}
