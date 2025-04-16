/*
    Student Name: Yash Swaminathan
    Student Number: 21116681
    SYDE 121 Lab: Assignment: 2
    Filename: lib.hpp

    I hereby declare that this code, submitted for credit for the course
    SYDE121, is a product of my own efforts. This coded solution has
    not been plagiarized from other sources and has not been knowingly
    plagiarized by others.

    Project: Book Library Class
    Purpose: Similar to lib.cpp this is for the function declarations of the library class.
    Due Date: Tuesday, November 20th, 2024
*/


#ifndef LIB_HPP
#define LIB_HPP

#include <string>
#include <vector>
#include "book.hpp"

using namespace std;
// Represents the collection of books, allowing you to manage what is within them
class Library {
    vector<Book> collection; // Vector to store the books in the library 

public:
    Library();
    Library(vector<Book> initial_collection); // Initializes the library
    void print(); // Prints all books in the library with their details.


    // Inserts a new book into the library using title, authors, and publication date.
    // Ensures no duplicate books are added.
    // Returns true if the book was successfully added, false otherwise.
    bool insert_book(string title, string authors, string publication_date);

    // Inserts a new book into the library using a Book object.
    // Returns true if the book was successfully added, false otherwise.
    bool insert_book(Book book);

    // Removes a book from the library using title, authors, and publication date.
    // Returns true if the book was successfully removed, false otherwise.
    bool remove_book(string title, string authors, string publication_date);

    // Removes a book from the library using a Book object.
    // Returns true if the book was successfully removed, false otherwise.
    bool remove_book(Book book);
};
#endif
