/*
    Student Name: Yash Swaminathan
    Student Number: 21116681
    SYDE 121 Lab: Assignment: 2
    Filename: lib.cpp

    I hereby declare that this code, submitted for credit for the course
    SYDE121, is a product of my own efforts. This coded solution has
    not been plagiarized from other sources and has not been knowingly
    plagiarized by others.

    Project: Book Library Class
    Purpose: The purpose of lib.cpp is to implement the functions of the Library class, enabling the creation, management, and display of library collections.
    Due Date: Tuesday, November 20th, 2024
*/


#include <iostream>
#include "lib.hpp"
using namespace std;

// Initializes an empty collection of books.
Library::Library() : collection() {}

// Initializes the library with a given vector of books
Library::Library(vector<Book> initial_collection) {
    collection = initial_collection;
}


// Prints all books in the library.
// Iterates through the books and displays the index and details of each book.
void Library::print() {
    for (size_t index = 0; index < collection.size(); index++) {
        cout << "Index #: " << index << endl;
        collection[index].print(); 
        cout << endl;
    }
}
/*
Inserts a book into the library using title, authors, and publication date. Checks for duplicates before adding the book to the collection.
- Returns:
    - true if the book is successfully added.
    - false if a duplicate book already exists.
*/
bool Library::insert_book(string title, string authors, string publication_date) {
    for (const auto& book : collection) {
        if (book.getTitle() == title && book.getAuthors() == authors && book.getDate() == publication_date) {
            return false;
        }
    }
    collection.push_back(Book(title, authors, publication_date));
    return true;
}

bool Library::insert_book(Book book) {
    for (const auto& existingBook : collection) {
        if (existingBook.getTitle() == book.getTitle() &&
            existingBook.getAuthors() == book.getAuthors() &&
            existingBook.getDate() == book.getDate()) {
            return false;
        }
    }
    collection.push_back(book);
    return true;
}

/*
Inserts a book into the library and checks for duplicates before adding the book to the collection.
- Returns:
    - true if the book is successfully added.
    - false if a duplicate book already exists.
*/
bool Library::remove_book(string title, string authors, string publication_date) {
    for (size_t index = 0; index < collection.size(); index++) {
        if (collection[index].getTitle() == title &&
            collection[index].getAuthors() == authors &&
            collection[index].getDate() == publication_date) {
            collection.erase(collection.begin() + index);
            return true;
        }
    }
    return false;
}

/*
Removes a book from the library using title, authors, and publication date and searches for a book with matching details and removes it from the collection.
- Returns:
    - true if the book is successfully removed.
    - false if no matching book is found.
*/
bool Library::remove_book(Book book) {
    for (size_t index = 0; index < collection.size(); index++) {
        if (collection[index].getTitle() == book.getTitle() &&
            collection[index].getAuthors() == book.getAuthors() &&
            collection[index].getDate() == book.getDate()) {
            collection.erase(collection.begin() + index);
            return true;
        }
    }
    return false;
}
