#include <iostream>
#include <vector>
#include <cstring>

#include "allMedia.h"
#include "movies.h"
#include "music.h"
#include "videoGames.h"

using namespace std;

//void addMedia(vector<Media*>& database)

int main()
{
  movies movie("Spirited Away", "Hayao Miyazaki", 2001, 125.0, "PG");
  movie.printOut();

  music song("Aint in LA", "Adela", 2026, 3.2, "smth studio");
  song.printOut();
  
  videoGames game("video game title", 2067, "game publisher", "PG");
  game.printOut();

  return 0;
}

//void addMedia(vector<Media*>& database)
