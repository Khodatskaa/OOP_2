#include "Book.h"
#include <iostream>

Book::Book(std::string author, std::string title, std::string publishing, int year, int numPages)
    : author(author), title(title), publishing(publishing), year(year), numPages(numPages) {}

void Book::displayBook() const {
    std::cout << "Title: " << title << "\nAuthor: " << author << "\nPublishing: " << publishing
        << "\nYear: " << year << "\nNumber of Pages: " << numPages << "\n\n";
}

int Book::getYear() const {
    return year;
}

std::string Book::getAuthor() const {
    return author;
}

std::string Book::getPublishing() const {
    return publishing;
}

