/*
    Student Name: Yash Swaminathan
    Student Number: 21116681
    SYDE 121 Lab: Assignment: 2
    Filename: book.hpp

    I hereby declare that this code, submitted for credit for the course
    SYDE121, is a product of my own efforts. This coded solution has
    not been plagiarized from other sources and has not been knowingly
    plagiarized by others.

    Project: Book Library Class
    Purpose: Similar to book.cpp this is for the function declarations of the book class.
    Due Date: Tuesday, November 20th, 2024
*/


#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
using namespace std;

class Book {
    string title, authors, publication_date;

public:
    // (n/a, n/a, n/a)
    Book();
    // (title, n/a, n/a)
    Book(string title);
    // (title, authors, n/a)
    Book(string title, string authors);
    // (title, authors, publication date)
    Book(string title, string authors, string publication_date);
    // Returns title
    string getTitle() const;     
    // Returns authors
    string getAuthors() const;  
    // Returns date published     
    string getDate() const;      

    // Prints all details of the book (title, authors, and publication date).
    // Marked as const to ensure it does not modify the Book object.    
    void print() const;              
};
#endif
