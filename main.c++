#include<bits/stdc++.h>
using namespace std;

class Book
{
public:
    string name;
    string author;
    Book(string name, string author)
    {
        this->name = name;
        this->author = author;
    }
    void display()
    const {
        cout << "Title: " << name << "\nAuthor: " << author << endl;
    }
};

class Library
{
private:
    vector<Book> books;

public:
     // Method to add a book to the library
    void addBook(Book& book) {
        books.push_back(book);
    }

    // Method to display all books in the library
    void displayAllBooks(){
        for (auto& book : books) {
            //books.display();
        }
    }

    // Method to search for a book by name
    bool searchBook(string& name){
        for (auto& book : books) {
            if (book.name == name) {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    Library library;
    // Creating some books
    Book book1("1984", "John Orwell");
    Book book2("The Lord of the Rings", "J.R.R. Tolkien");
    // Adding the books to the library
    library.addBook(book1);
    library.addBook(book2);

    // Displaying all books
    cout << "All Books:\n";
    library.displayAllBooks();

    // Searching for a book
    string searchTitle = "1984";
    if (library.searchBook(searchTitle)) {
        cout << "Found: " << searchTitle << endl;
    } else {
        cout << "Not found: " << searchTitle << endl;
    }

    return 0;
}