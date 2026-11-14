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
    cout << endl;
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
  int choice;
  char title[50];
  int year;
  cout << "Choose media type (1. video game 2. music 3. movie) ";
  cin >> choice;
  cin.ignore();
  
  cout << "Enter title: ";
  cin.getline(title,50);
  cout << "Enter year: ";
  cin >> year;
  cin.ignore();
  
  if (choice == 1) {
    char publisher[50];
    int rating;
    cout << "Enter publisher: ";
    cin.getline(publisher,50);
    cout << "Enter rating (out of 10): ";
    cin >> rating;
    database.push_back(new videoGames(title, year, publisher, rating));
  }
  else if (choice == 2) {
    char artist[50];
    char publisher[50];
    float duration;
    cout << "Enter artist: ";
    cin.getline(artist, 50);
    cout << "Enter duration in minutes: ";
    cin >> duration;
    cin.ignore();
    cout << "Enter publisher: ";
    cin.getline(publisher, 50);
    database.push_back(new music(title, artist, year, duration, publisher));
  }
  else if (choice == 3) {
    char director[50];
    float rating;
    float duration;
    cout << "Enter director: ";
    cin.getline(director, 100);
    cout << "Enter duration in minutes: ";
    cin >> duration;
    cin.ignore();
    cout << "Enter rating: ";
    cin >> rating;
    database.push_back(new movies(title, director, year, duration, rating));
  }
  else {
    cout << "Invalid choice" << endl;
    return;
  }
}

void searchAndPrint(vector<Media*>& database) {
  int choice;
  char searchTitle[50];
  int searchYear;
  bool found = false;

  cout << "Would you like to search by 1. title or 2. year? ";
  cin >> choice;
  cin.ignore();
  
  if (choice == 1) {
    cout << "Enter title: ";
    cin.getline(searchTitle,50);
    for (int i=0; i<database.size(); i++) {
      if (strcmp(database[i]->getTitle(), searchTitle) == 0) {
        cout << "--------------------" << endl;
        database[i]->printOut();
        found = true;
      }
    }
  }
  else if (choice == 2) {
    cout << "Enter year: ";
    cin >> searchYear;
    for (int i=0; i<database.size(); i++) {
      if (database[i]->getYear() == searchYear) {
        cout << "--------------------" << endl;
        database[i]->printOut();
        found = true;
      } 
    }
  }
  if (found == false) {
    cout << "No matches found" << endl;
  }
}

void deleteMedia(vector<Media*>& database) {
  
}
