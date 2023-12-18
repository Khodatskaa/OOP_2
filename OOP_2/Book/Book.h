#ifndef Book_h
#define Book_h

#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    std::string author;
    std::string title;
    std::string publishing;
    int year;
    int numPages;

public:
    Book(std::string author, std::string title, std::string publishing, int year, int numPages);

    void displayBook() const;

    int getYear() const;

    string getAuthor() const;
    string getPublishing() const;
};

#endif 

