//all media
#ifndef ALLMEDIA_H
#define ALLMEDIA_H

class Media {
 protected:
  char title[50];
  int year;
 public:
  Media(const char* title, int year);
  const char* getTitle() const;
  int getYear() const;
  virtual void printOut() const;
};

#endif
