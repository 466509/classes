//all media header file
#ifndef ALLMEDIA_H
#define ALLMEDIA_H

// base class for all types of media
class Media {
 protected:
  // shared info that every type of media has
  char title[50];
  int year;
 public:
  //constructor sets the title and year
  Media(const char* title, int year);
  virtual ~allMedia(); //virtual destructor
  // functions that return the title and year
  const char* getTitle() const;
  int getYear() const;
  // virtual print function can be changed by child classes
  virtual void printOut() const;
};

#endif
