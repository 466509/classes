#include <iostream>
#include <cstring>
#include "allMedia.h"
using namespace std;

// constructor initializes the shared media information
Media::Media(const char* t, int y) {
  strcpy(title, t);
  year = y;
}

// destructor
allMedia::~allMedia() {
}

// returns the title
const char* Media::getTitle() const {
  return title;
}

// returns the year
int Media::getYear() const {
  return year;
}

// prints the info shared by all media types
void Media::printOut() const {
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
}
