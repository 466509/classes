//movies child class
#include <iostream>
#include "movies.h"

movies::movies(int year):Media(year) {
}

void movies::printOut() {
  cout << "Year: ";
}
