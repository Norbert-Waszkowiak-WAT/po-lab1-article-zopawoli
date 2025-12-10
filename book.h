#ifndef BOOK
#define BOOK
using namespace std;
#include <iostream>
class Book{
    private:
    string title;
    string author;
    string isbon;
    public:
    Book(string title,string author,string isbon)
    ~Book()
    string getTitle();
    string getAuthor();
    string getIsbon();
}