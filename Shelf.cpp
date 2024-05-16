#include <bits/stdc++.h>
#include "Shelf.h"
using namespace std;

class Shelf
{
private:
    string title;
    string author;

public:
    void AddBook(string title, string author)
    {
        this->title = title;
        this->author = author;
        generateBookList();
    }
    void display()
    {
        cout << "Title: " << this->title << "\nAuthor: " << this->author << endl;
    }

    // Function to generate a book list
    void generateBookList()
    {
        ofstream outFile("book_list.txt");
        if (outFile.is_open())
        {
            // getline(cin,title); // get user input
            outFile << title << " by " << author << endl;
            outFile.close();
            display();
            cout << "Book list generated successfully." << endl;
        }
        else
        {
            cout << "Unable to open file." << endl;
        }
    }
    // Method to search for a book by name
    bool searchBook(string title)
    {
        ofstream outFile("book_list.txt");
        if (outFile.is_open())
        {
            while (!EOF)
            {
                if (this->title == title)
                {
                    cout << title << " by " << author << endl;
                    cout << "Found: " << title << endl;
                    return true;
                }
            }
            outFile.close();
        }
        cout << "Not found: " << title << endl;
        return false;
    }
    // Method to display all books in the library
    void displayAllBooks()
    {
        ofstream outFile("book_list.txt");
        if (outFile.is_open())
        {
            while (!EOF)
            {
                cout << title << author << endl;
            }
            outFile.close();
        }
        else
        {
            cout << "Unable to open file." << endl;
        }
    }
};