#include "book.h"
#include <iostream>
#include <algorithm>
#include <cassert>

book::book() : total_quantity(0), total_borrowed(0), id(-1), name("") {}

void book::read() {
    cout << "Enter book info: id & name & total quantity: ";
    cin >> id >> name >> total_quantity;
    total_borrowed = 0;
}

bool book::borrow(int user_id) {
    if (total_quantity - total_borrowed == 0)
        return false;
    ++total_borrowed;
    return true;
}

void book::return_copy() {
    assert(total_borrowed > 0);
    --total_borrowed;
}

bool book::has_prefix(string prefix) {
    if (name.size() < prefix.size())
        return false;

    for (int i = 0; i < (int)prefix.size(); ++i) {
        if (prefix[i] != name[i])
            return false;
    }
    return true;
}

void book::print() {
    cout << "id = " << id << " name = " << name << " total_quantity " << total_quantity
         << " total_borrowed " << total_borrowed << "\n";
}

bool cmp_book_by_name(book &a, book &b) {
    return a.name < b.name;
}

bool cmp_book_by_id(book &a, book &b) {
    return a.id < b.id;
}
