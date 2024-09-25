#include "library_system.h"
#include <iostream>
#include <algorithm>

library_system::library_system() : total_books(0), total_users(0) {}

void library_system::run() {
    while (true) {
        int choice = menu();
        if (choice == 1)
            add_book();
        else if (choice == 2)
            search_books_by_prefix();
        else if (choice == 6)
            add_user();
        else if (choice == 7)
            user_borrow_book();
        else if (choice == 8)
            user_return_book();
        else if (choice == 4)
            print_library_by_id();
        else if (choice == 5)
            print_library_by_name();
        else if (choice == 9)
            print_users();
        else
            break;
    }
}

int library_system::menu() {
    int choice = -1;
    cout << "\nLibrary Menu\n";
    cout << "1) add_book\n";
    cout << "2) search_books_by_prefix\n";
    cout << "4) print_library_by_id\n";
    cout << "5) print_library_by_name\n";
    cout << "6) add_user\n";
    cout << "7) user_borrow_book\n";
    cout << "8) user_return_book\n";
    cout << "9) print_users\n";
    cout << "10) Exit\n";
    cout << "Enter your menu choice [1 - 10]: ";
    cin >> choice;
    return choice;
}

// Additional functions like add_book, user_borrow_book, etc. will go here.
