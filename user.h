#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

struct user {
    int id;
    string name;
    int borrowed_books_ids[10];
    int len;

    user();
    void read();
    void borrow(int book_id);
    void return_copy(int book_id);
    bool is_borrowed(int book_id);
    void print();
};

#endif
