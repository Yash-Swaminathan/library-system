/*
    Student Name: Yash Swaminathan
    Student Number: 21116681
    SYDE 121 Lab: Assignment: 2
    Filename: book.cpp

    I hereby declare that this code, submitted for credit for the course
    SYDE121, is a product of my own efforts. This coded solution has
    not been plagiarized from other sources and has not been knowingly
    plagiarized by others.

    Project: Book Library Class
    Purpose: The purpose of book.cpp is to implement the functions of the Book class, allowing for creation, access, and display of book details.
    Due Date: Tuesday, November 20th, 2024
*/

#include <iostream>
#include "book.hpp"
using namespace std;

// Initalizes all attributes to the book n/a
// Used when no information about the book is provided
Book::Book() : title("n/a"), authors("n/a"), publication_date("n/a") {}

// Used when only the title is given
Book::Book(string title) : title(title), authors("n/a"), publication_date("n/a") {}

// Used when only the title and the authors are given
Book::Book(string title, string authors) : title(title), authors(authors), publication_date("n/a") {}

// Initalizes all attributes
// Used when all information about the book is provided
Book::Book(string title, string authors, string publication_date)
    : title(title), authors(authors), publication_date(publication_date) {}

// Prints the details of the book (title, authors, and publication date)
void Book::print() const {
    cout << "Title: " << title << endl
         << "Authors: " << authors << endl
         << "Publication Date: " << publication_date << endl;
}

// Returns the title of the book
string Book::getTitle() const {
    return title;
}

// Returns the authors of the book 
string Book::getAuthors() const {
    return authors;
}

// Returns the publication date of the book
string Book::getDate() const {
    return publication_date;
}