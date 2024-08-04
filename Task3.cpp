#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    string isbn;
    bool available;
};

vector<Book> library;
