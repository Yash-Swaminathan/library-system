# Library System

A modular C++ library management system with an intuitive console interface. Track books, manage users (students & teachers), and extend functionality as needed.

## Features

- **Book**  
  - Stores title, author, genre & publication year.  
- **Library**  
  - Holds a collection of `Book` objects.  
  - Methods to add, remove & search books.  
- **LibraryUser**  
  - Base class for all users (stores name & user ID).  
- **Teacher** _(inherits from LibraryUser)_  
  - Adds teacher‑specific attributes & behaviors.  
- **Student** _(inherits from LibraryUser)_  
  - Adds student‑specific attributes & behaviors.  
- **Driver Program**  
  - Console‑based interface (`main.cpp`) that ties everything together.

## Getting Started

1. **Prepare files**  
   Ensure these source files are in one folder:  
   `main.cpp`, `book.cpp`, `book.h`, `lib.cpp`, `lib.h`, `libUser.cpp`, `libUser.h`

2. **Compile**  
   ```bash
   g++ -std=c++11 main.cpp book.cpp lib.cpp libUser.cpp -o library

Run:
```bash
./library
