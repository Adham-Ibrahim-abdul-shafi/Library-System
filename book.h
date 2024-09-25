#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

struct book {
    int id;
    string name;
    int total_quantity;
    int total_borrowed;
    
    book();
    void read();
    bool borrow(int user_id);
    void return_copy();
    bool has_prefix(string prefix);
    void print();
};

bool cmp_book_by_name(book &a, book &b);
bool cmp_book_by_id(book &a, book &b);

#endif
