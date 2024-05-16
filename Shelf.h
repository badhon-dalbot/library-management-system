#ifndef Shelf_H
#define Shelf_H
#include <bits/stdc++.h>
using namespace std;

class Shelf
{
private:
    string title;
    string author;

public:
    void AddBook(string title, string author);
    
    void display();
    
    // Function to generate a book list
    void generateBookList();
    // Method to search for a book by name
    bool searchBook(string title);
    // Method to display all books in the library
    void displayAllBooks();
};
#endif