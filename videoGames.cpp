#include <iostream>
#include <cstring>
#include "videoGames.h"
using namespace std;

videoGames::videoGames(const char* t, int y, const char* p, const char* r) : Media(t, y) {
  strcpy(publisher,p);
  strcpy(rating, r);
}

const char* videoGames::getPublisher() const {
  return publisher;
}

const char* videoGames::getRating() const {
  return rating;
}

void videoGames::printOut() const {
  cout << "Type: Video Game" << endl;
  Media::printOut();
  cout << "Publisher: " << publisher << endl;
  cout << "Rating: " << rating << endl;
}

