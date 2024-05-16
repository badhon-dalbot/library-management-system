#include<bits/stdc++.h>
#include "Shelf.h"
using namespace std;

int main()
{
    cout<<"1"<<endl;
    Shelf library;
    // Add some books
    library.AddBook("1984", "John Orwell");
    library.AddBook("The Lord of the Rings", "J.R.R. Tolkien");
    library.AddBook("The Great Gatsby", "F. Scott Fitzgerald");
    
    // Displaying all books
    cout << "All Books:\n";
    library.displayAllBooks();

    // Searching for a book
    string searchTitle = "1984";
    library.searchBook(searchTitle);

    return 0;
}