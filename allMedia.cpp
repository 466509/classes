#include <iostream>
#include <cstring>
#include "allMedia.h"
using namespace std;

Media::Media(const char* t, int y) {
  strcpy(title, t);
  year = y;
}

const char* Media::getTitle() const {
  return title;
}

int Media::getYear() const {
  return year;
}

void Media::printOut() const {
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
}
