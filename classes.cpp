#include <iostream>
#include <vector>
#include <cstring>

#include "allMedia.h"
#include "movies.h"
#include "music.h"
#include "videoGames.h"

using namespace std;

void addMedia(vector<Media*>& database);
void searchAndPrint(vector<Media*>& database);
void deleteMedia(vector<Media*>& database);

int main()
{
  vector<Media*> database;
  char userInput[15];
  while (true) {
    cout << "What would you like to do?" << endl;
    cout << "ADD, SEARCH, DELETE, or QUIT: ";
    cin >> userInput;
    if (strcmp(userInput,"ADD") == 0) {
      addMedia(database);
    }
    else if (strcmp(userInput, "SEARCH") == 0) {
      searchAndPrint(database);
    }
    else if (strcmp(userInput, "DELETE") == 0) {
      deleteMedia(database);
    }
    else if (strcmp(userInput, "QUIT") == 0) {
      break;
    }
    else { 
      cout << "Invalid command" << endl;
    }
  }
  
  for (int i=0; i<database.size(); i++) {
    delete database[i];
  }

  return 0;
}

void addMedia(vector<Media*>& database) {
  cout << "adding..." << endl;
}

void searchAndPrint(vector<Media*>& database) {
  cout << "searching and printing..." << endl;
}

void deleteMedia(vector<Media*>& database) {
  cout << "deleting..." << endl;
}
