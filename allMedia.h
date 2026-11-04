//all media
#ifndef ALLMEDIA_H
#define ALLMEDIA_H

#include <iostream>
using namespace std;

class Media {
 public:
  Media(int year);
  // char title[50];
  int getID();
 protected:
  int id;
};

#endif
