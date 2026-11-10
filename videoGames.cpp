#include <iostream>
#include <cstring>
#include "videoGames.h"
using namespace std;

videoGames::videoGames(const char* t, int y, const char* p, float r) : Media(t, y) {
  strcpy(publisher,p);
  rating = r;
}

const char* videoGames::getPublisher() const {
  return publisher;
}

float videoGames::getRating() const {
  return rating;
}

void videoGames::printOut() const {
  cout << "Type: Video Game" << endl;
  Media::printOut();
  cout << "Publisher: " << publisher << endl;
  cout << "Rating: " << rating << endl;
}

