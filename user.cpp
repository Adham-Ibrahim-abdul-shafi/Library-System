#include "user.h"
#include <iostream>
#include <algorithm>
using namespace std;

user::user() : name(""), len(0), id(-1) {}

void user::read() {
    cout << "Enter user name & national id: ";
    cin >> name >> id;
}

void user::borrow(int book_id) {
    borrowed_books_ids[len++] = book_id;
}

void user::return_copy(int book_id) {
    bool removed = false;
    for (int i = 0; i < len; ++i) {
        if (borrowed_books_ids[i] == book_id) {
            for (int j = i + 1; j < len; ++j)
                borrowed_books_ids[j - 1] = borrowed_books_ids[j];
            removed = true;
            --len;
            break;
        }
    }
    if (!removed)
        cout << "User " << name << " never borrowed book id " << book_id << "\n";
}

bool user::is_borrowed(int book_id) {
    for (int i = 0; i < len; ++i) {
        if (book_id == borrowed_books_ids[i])
            return true;
    }
    return false;
}

void user::print() {
    sort(borrowed_books_ids, borrowed_books_ids + len);
    cout << "user " << name << " id " << id << " borrowed books ids: ";
    for (int i = 0; i < len; ++i)
        cout << borrowed_books_ids[i] << " ";
    cout << "\n";
}
