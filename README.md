# Library Management System

## Overview

This is a simple **Library Management System** implemented in C++ that simulates a real-world library system. The main user is an **admin** who can perform operations such as adding books, adding users, borrowing and returning books, and searching for books by prefix. The system maintains a record of books and users, ensuring that the borrowing process is handled properly by keeping track of available quantities.

### Key Features:
- **Add a Book**: Admin can add new books with an ID, name, and total quantity.
- **Search for a Book**: Admin can search for books using a prefix of the book's name.
- **List All Books**: Admin can list all books sorted by either ID or name.
- **Borrow a Book**: Users can borrow books as long as there are available copies.
- **Return a Book**: Users can return books, increasing the available copies.
- **List Users Who Borrowed a Book**: Admin can see which users have borrowed a particular book.
- **Add a User**: Admin can add new users to the system.

## Functionalities

### 1. **Add a Book**
- Admin adds a book by providing its ID, name, and the total quantity available.
- Example: 

### 2. **Search Books by Prefix**
- Admin can search for books using a prefix of the book name.
- Example search:
- Prefix: `Cpp` will return books like `CppHowToProgram`, `CppForDummies`.

### 3. **List Books**
- The admin can list all books in the system sorted by either:
- **ID**: Lists books by their unique ID.
- **Name**: Lists books alphabetically by their name.

### 4. **Borrow a Book**
- Users can borrow books from the system if there are available copies.
- Admin provides the user name and book name to complete the process.

### 5. **Return a Book**
- Users can return books they borrowed, which increases the available quantity of the book.

### 6. **List Users Who Borrowed a Book**
- Admin can view the list of users who have borrowed a specific book.

### 7. **Add a User**
- Admin adds a user by providing their name and ID.


