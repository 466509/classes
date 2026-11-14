#include <iostream>
#include <cstring>
#include "videoGames.h"
using namespace std;

// constructor initializes the parent class and video game info
videoGames::videoGames(const char* t, int y, const char* p, float r) : Media(t, y) {
  strcpy(publisher,p);
  rating = r;
}

// returns the publisher
const char* videoGames::getPublisher() const {
  return publisher;
}

// returns the rating
float videoGames::getRating() const {
  return rating;
}

// prints all video game information
void videoGames::printOut() const {
  cout << "Type: Video Game" << endl;
  Media::printOut(); // calls the parent class print function for title and year
  cout << "Publisher: " << publisher << endl;
  cout << "Rating: " << rating << endl;
}

