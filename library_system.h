#ifndef LIBRARY_SYSTEM_H
#define LIBRARY_SYSTEM_H

#include "book.h"
#include "user.h"

struct library_system {
    int total_books;
    book books[MAX_BOOKS];
    int total_users;
    user users[MAX_USERS];

    library_system();
    void run();
    int menu();
    void add_book();
    void search_books_by_prefix();
    void add_user();
    void user_borrow_book();
    void user_return_book();
    void print_library_by_id();
    void print_library_by_name();
    void print_users();
    void print_who_borrowed_book_by_name();
};

#endif
