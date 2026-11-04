#include <iostream>
#include <vector>
#include "allMedia.h"
#include "movies.h"
using namespace std;

int main()
{
  cout << "movies:" << endl;
  movies* movie = new movies(1967);
  cout << movie->getID() << endl;
  return 0;
}
