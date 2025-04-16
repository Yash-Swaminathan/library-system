/*
    Student Name: Yash Swaminathan
    Student Number: 21116681
    SYDE 121 Lab: Assignment: 2
    Filename: main.cpp

    I hereby declare that this code, submitted for credit for the course
    SYDE121, is a product of my own efforts. This coded solution has
    not been plagiarized from other sources and has not been knowingly
    plagiarized by others.

    Project: Book Library Class
    Purpose: Main.cpp shows the capabilities of the Library and Book classes. 
    To demonstrate different tasks, it first builds an initial library with a predetermined list of books and an empty library.
    Using Book objects and string parameters, the software may, among other things, add new books, remove books from the collection, and publish the library's contents.
    By trying to get rid of duplicate entries and books that aren't there, it also shows error management.
    This file serves as an example of how the classes interact and communicate.
    Due Date: Tuesday, November 20th, 2024
*/

#include <iostream>
#include "book.hpp"
#include "lib.hpp"
using namespace std;

int main() {
    vector<Book> initialBooks = {Book("Dusk", "Emma", "2012"), Book("Ocean", "Liam", "2019")}; // initializes vector of books for Library 1

    Library library1 = Library(initialBooks); // Initialize Library 1 with the predefined list of books
    Library library2 = Library(); // Initialize an empty Library 2

    cout << "Library 1: " << endl; // Prints Library 1
    library1.print();

    Book newBook = Book("Voyage", "Noah", "2023"); // Creates a new book
    library1.insert_book(newBook); // Add the new book to library 1

    // Confirm that the new book has been added 
    cout << "Library 1 after adding a book: " << endl; 
    library1.print(); 

    // Attempt to add the same book again to test duplicate handling
    // Verify that duplicates are not added to Library 1
    library1.insert_book(newBook);
    cout << "Library 1 after attempting to add a duplicate: " << endl;
    library1.print();

    // Add a new book directly to Library 2 using its attributes
    library2.insert_book("Legends", "Sophia", "1875");

    // Print the contents of Library 2 to verify the addition
    cout << "Library 2: " << endl;
    library2.print();

    library1.remove_book(newBook); // Remove the previously added book from Library 1

    // Print Library 1 to verify that the book has been removed
    cout << "Library 1 after removing a book: " << endl;
    library1.print();

    library2.remove_book("Myths", "Olivia", "1750"); // Attempt to remove a non-existent book from Library 2

    // Print Library 2 to verify no changes were made
    cout << "Library 2 after trying to remove a non-existent book: " << endl;
    library2.print();

    return 0;
}