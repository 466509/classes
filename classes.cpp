// Jinyao Zhu, 11/13/26
// This program allows the user to add different media types to a media database, search and print, and delete

#include <iostream>
#include <vector>
#include <cstring>

#include "allMedia.h"
#include "movies.h"
#include "music.h"
#include "videoGames.h"

using namespace std;

// function prototypes
void addMedia(vector<Media*>& database);
void searchAndPrint(vector<Media*>& database);
void deleteMedia(vector<Media*>& database);

int main()
{
  // vector stores pointers to allMedia objects
  vector<Media*> database;
  char userInput[15];
  while (true) {
    cout << endl;
    cout << "What would you like to do?" << endl; // Allow the user to pick what to do
    cout << "ADD, SEARCH, DELETE, or QUIT: ";
    cin >> userInput;
    // perform the action selected by the user
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
  // delete all remaining objects before the program ends
  for (int i=0; i<database.size(); i++) {
    delete database[i];
  }
  return 0;
}

// add a new media item
void addMedia(vector<Media*>& database) {
  int choice;
  char title[50];
  int year;
  cout << "Choose media type (1. video game 2. music 3. movie) "; // ask the user which type of media they want to add
  cin >> choice;
  cin.ignore();
  
  // Ask for info
  cout << "Enter title: ";
  cin.getline(title,50);
  cout << "Enter year: ";
  cin >> year;
  cin.ignore();
  
  // create a video game
  if (choice == 1) {
    char publisher[50];
    int rating;
    cout << "Enter publisher: ";
    cin.getline(publisher,50);
    cout << "Enter rating (out of 10): ";
    cin >> rating;
    // create a video game object and add it to the database
    database.push_back(new videoGames(title, year, publisher, rating));
  }
  // create a music object
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
    // create a music object and add it to the database
    database.push_back(new music(title, artist, year, duration, publisher));
  }
  // create a movie
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
    // create a movie objecr and add it to the database
    database.push_back(new movies(title, director, year, duration, rating));
  }
  else {
    cout << "Invalid choice" << endl;
    return;
  }
}

// search for media based on title or year and print
void searchAndPrint(vector<Media*>& database) {
  int choice;
  char searchTitle[50];
  int searchYear;
  bool found = false;

  cout << "Would you like to search by 1. title or 2. year? ";
  cin >> choice;
  cin.ignore();
  
  // searching by title
  if (choice == 1) {
    cout << "Enter title: ";
    cin.getline(searchTitle,50);
    for (int i=0; i<database.size(); i++) {
      // if the title matches, print it out
      if (strcmp(database[i]->getTitle(), searchTitle) == 0) {
        cout << "--------------------" << endl;
        database[i]->printOut();
        found = true;
      }
    }
  }
  // searching by year
  else if (choice == 2) {
    cout << "Enter year: ";
    cin >> searchYear;
    for (int i=0; i<database.size(); i++) {
      // if the year matches, print it out
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

//delete media
void deleteMedia(vector<Media*>& database) {
  int choice;
  char searchTitle[50];
  int searchYear;
  char answer;
  bool found = false;
 
  cout << "Would you like to delete by 1. title or 2. year? ";
  cin >> choice;
  cin.ignore();
  
  // search by title
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
  // search by year
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
    return;
  }
  // confirm deletion
  cout << endl;
  cout << "Are you sure you want to delete these? (y/n) ";
  cin >> answer;
  if (answer == 'y') {
    for (int i=0; i<database.size();) {
      bool match = false;
      if (choice == 1 && strcmp(database[i]->getTitle(), searchTitle) == 0) {
        match = true;
      }
      else if (choice == 2 && database[i]->getYear() == searchYear) {
        match = true;
      }
      // delete the objects
      if (match == true) {
        delete database[i]; // delete from memory
        database.erase(database.begin() + i); // remove pointer from the vector
      }
      else {
        i++;
      }
    }
    cout << "Media deleted!" << endl; 
  }
  else {
    cout << "Deletion cancelled" << endl;
  }
}
