#include <bits/stdc++.h>

#include <iostream>

#include <fstream>

using namespace std; 

string choice  ="Enter your choice -> ";

string islamic ="1- Muqaddimah\n2- The book of contemplation\n3- Stories of the Prophets\n4- What is Islam\n5- Who speaks for Islam\n\n";

string general ="1- Student's encyclopedia\n2- The intellectual\n3- Sapiens: A brief history\n4- British encyclopedia\n5- Islamic encyclopedia\n\n";

string history ="1- Guns, Gems and Steel\n2- Islamic history\n3- Russian History\n4- British History\n5- Technological history\n\n";

string tech    ="1- Artificial Intelligence\n2- Machine Learning\n3- Programming and coding\n4- Computer hardwares\n5- Computer Basic\n\n";

string lit     ="1- Urdu\n2- English\n3- Arabic\n4- Persian\n";

string fant    ="1- Hero of Tasalvania\n2- King of the forest\n3- Mingo and Melly\n4- People with stones\n5- A night in the grave\n\n";

string wars    ="1- World war I\n2- World war II\n3- War of independence 1857\n4- Korean war 1963\n5- Russian civil war\n\n";

 

void userMenu();

void reading();

void allBooks();

void furtherReading(string x);

void libraryCardMaking();

void lendingBook();

void borrowedBooksRecords(string book);

 

int main() {

      cout << "\n\n\n\t\t\tWELCOME TO 'ZSH' LIBRARY \n\n";

      userMenu();

}

 

void userMenu() {

      cout << "1- Read books\n2- Book collection\n3- Lend a book\n4- Library card\n\n";

      cout << ::choice;

      string a;

      cin >> a;

      if (a == "1") {

            reading();

      }

      else if (a == "2") {

            allBooks();

            cout << "Want read categories also?\n\n";

            cout << ::choice;

            string b;

            cout << "\n\n1- Yes, take me to the categories\n2- No, its enough\n\n";

            cin >> b;

            if (b == "1") {

                  cout << "\n\n\t\t\tIslamic Studies\n";

                  cout << ::islamic << endl << endl;

                  cout << "\t\t\tGeneral Knowledge\n";

                  cout << ::general << endl << endl;

                  cout << "\t\t\tHistory\n";

                  cout << ::history << endl << endl;

                  cout << "\t\t\tTechnology\n";

                  cout << ::tech << endl << endl;

                  cout << "\t\t\tLiterature\n";

                  cout << ::lit << endl << endl;

                  cout << "\t\t\tFantasy and literature\n";

                  cout << ::fant << endl << endl;

                  cout << "\t\t\tWars\n";

                  cout << ::wars << endl << endl;

                  userMenu();

            }

            else {

                  userMenu();

            }

           

      }

      else if (a == "3") {

            cout << "For lending a book, you must have a library card\n";

            cout << "Do you have the library card?\n\n";

            cout << "1- Yes\n2- No\n\n";

            cout << ::choice;

            string x;

            cin >> x;

            if (x == "1") {

                  cout << "Enter your first name -> ";

                  string n1, n2, n;

                  cin >> n1;

                  cout << "Enter your second name -> ";

                  cin >> n2;

                  n = n1 + " " + n2;

                  fstream file;

                  file.open("libraryRecords.txt", ios::in);

                  if (file.is_open()) {

                        string line;

                        while (getline(file, line)) {

                              if (line == n) {

                                    lendingBook();

                                    file.close();

                              }

                        }

                        cout << "Sorry, you don't have the library card\n\n";

                        file.close();

                        userMenu();

                  }

            }

            else {

                  cout << "Sorry, we cannot lend you the book\n\n";

                  userMenu();

            }

      }

      else if (a == "4") {

            libraryCardMaking();

      }

}

 

void libraryCardMaking() {

      cout << "Enter your first name -> "<<endl;

      string a;

      cin >> a;

      cout << "Enter your second name -> "<<endl;

      string b;

      cin >> b;

      string ab = a + " " + b;

      cout << "Enter your reg# -> ";

      string reg;

      cin >> reg;

      cout << "Enter mobile number -> ";

      string mob;

      cin >> mob;

 

      fstream file;

      file.open("libraryRecords.txt", ios::app);

      file << endl << ab << endl << reg << endl << mob;

      file.close();

      cout << "\n\nLIBRARY CARD PURCHASED SUCCESSFULLY\n\n";

      lendingBook();

}

void lendingBook() {

      string book;

      cout << "Which book do you want to take with you?\n";

      //cout << ::choice;

      allBooks();

      cout << endl << endl;

      cout << "Select your category -> ";

      string a;

      string x;

      cin >> a;

      if (a == "1") {

            cout << ::islamic << endl;

            cout << ::choice;

           

            cin >> x;

            if (x == "1") {

                  book = "Muqaddimah";

            }

            else if (x == "2") {

                  book = "The book of contemplation";

            }

            else if (x == "3") {

                  book = "Stories of the Prophets";

            }

            else if (x == "4") {

                  book = "What is Islam";

            }

            else if (x == "5") {

                  book = "Who speaks for Islam";

            }

      }

      else if (a == "2") {

            cout << ::general << endl;

            if (x == "1") {

                  book = "Student's encyclopedia";

            }

            else if (x == "2") {

                  book = "The intellectual";

            }

            else if (x == "3") {

                  book = "Sapiens: A brief history";

            }

            else if (x == "4") {

                  book = "British encyclopedia";

            }

            else if (x == "5") {

                  book = "Islamic encyclopedia";

            }

      }

      else if (a == "3") {

            cout << ::history << endl;

            if (x == "1") {

                  book = "Guns, Gems and Steel";

            }

            else if (x == "2") {

                  book = "Islamic history";

            }

            else if (x == "3") {

                  book = "Russian History";

            }

            else if (x == "4") {

                  book = "British History";

            }

            else if (x == "5") {

                  book = "Technological history";

            }

      }

      else if (a == "4") {

            cout << ::tech << endl;

            if (x == "1") {

                  book = "Artificial Intelligence";

            }

            else if (x == "2") {

                  book = "Machine Learning";

            }

            else if (x == "3") {

                  book = "Programming and coding";

            }

            else if (x == "4") {

                  book = "Computer hardwares";

            }

            else if (x == "5") {

                  book = "Computer Basic";

            }

      }

      else if (a == "8") {

            cout << ::lit << endl;

            if (x == "1") {

                  book = "Urdu";

            }

            else if (x == "2") {

                  book = "English";

            }

            else if (x == "3") {

                  book = "Arabic";

            }

            else if (x == "4") {

                  book = "Persian";

            }

      }

      else if (a == "9") {

            cout << ::fant << endl;

            if (x == "1") {

                  book = "Hero of Tasalvania";

            }

            else if (x == "2") {

                  book = "King of the forest";

            }

            else if (x == "3") {

                  book = "Mingo and Melly";

            }

            else if (x == "4") {

                  book = "People with stones";

            }

            else if (x == "5") {

                  book = "A night in the grave";

            }

      }

      else if (a == "10") {

            cout << ::wars << endl;

            if (x == "1") {

                  book = "World war I";

            }

            else if (x == "2") {

                  book = " World war II";

            }

            else if (x == "3") {

                  book = "War of independence 1857";

            }

            else if (x == "4") {

                  book = "Korean war 1963";

            }

            else if (x == "5") {

                  book = "Russian civil war";

            }

      }

      else if (a == "5" || a == "6" || a == "7") {

            cout << "No further categories in collection\n\n";

      }

      else {

            cout << "\nInvalid Seletion\n\n";

            reading();

      }

      fstream file;

      file.open("BorriwedBooks.txt", ios::in);

      if (file.is_open()) {

            string line;

            while (getline(file, line)) {

                  if (line == book) {

                        cout << "The book is being borrowed, can't take it\n\n";

                        userMenu();

                  }

            }

      }

      cout << book << "purchased" << endl << endl;

      borrowedBooksRecords(book);

}

 

void borrowedBooksRecords(string book) {

      fstream file;

      file.open("BorriwedBooks.txt", ios::app);

      file << endl << book;

      file.close();

}

 

void reading() {

      string temp;

      allBooks();

      cout << endl;

      cout << "Select your category -> ";

      string a;

      cin >> a;

      if (a == "1") {

            cout << ::islamic << endl;

            temp = ::islamic;

      }

      else if (a == "2") {

            cout << ::general << endl;

            temp = ::general;

      }

      else if (a == "3") {

            cout << ::history << endl;

            temp = ::history;

      }

      else if (a == "4") {

            cout << ::tech << endl;

            temp=::tech;

      }

      else if (a == "8") {

            cout << ::lit << endl;

            temp = ::lit;

      }

      else if (a == "9") {

            cout << ::fant << endl;

            temp = ::fant;

      }

      else if (a == "10") {

            cout << ::wars << endl;

            temp = ::wars;

      }

      else if (a == "5" || a == "6" || a == "7") {

            cout << "No further categories in collection\n\n";

      }

      else {

            cout << "\nInvalid Seletion\n\n";

            reading();

      }

 

      furtherReading(temp);

}

void furtherReading(string x) {

      cout << "Categories in which you're interested is\n\n";

      cout << endl << x << endl;

      cout << "You can visit the relative department for this category\n\n";

      cout << "\t\t\tTHANK YOU\n\n";

      userMenu();

}

void allBooks() {

      cout << "1- Islamic Studies\n2- General Knowledge\n3- Histroy\n4- Technology\n5- Physics";

      cout << "\n6- Chemistry\n7- Maths\n8- Literature\n9- Fantasy and Fiction\n10- Wars\n\n";

}