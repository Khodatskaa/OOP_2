#include "Book.h"

const int MAX_BOOKS = 100;

void listBooksByAuthor(const Book books[], int size, const std::string& author) {
    std::cout << "Books by author " << author << ":\n";
    for (int i = 0; i < size; ++i) {
        if (books[i].getAuthor() == author) {
            books[i].displayBook();
        }
    }
}

void listBooksByPublishing(const Book books[], int size, const std::string& publishing) {
	std::cout << "Books by publishing " << publishing << ":\n";
    for (int i = 0; i < size; ++i) {
        if (books[i].getPublishing() == publishing) {
			books[i].displayBook();
		}
	}
}

void listBooksByYear(const Book books[], int size, int year) {
	std::cout << "Books by year " << year << ":\n";
    for (int i = 0; i < size; ++i) {
        if (books[i].getYear() == year) {
			books[i].displayBook();
		}
	}
}

int main() {
    const int bookArraySize = 10;
    Book books[bookArraySize] = {
		Book("Author1", "Title1", "Publishing1", 2010, 100),
		Book("Author2", "Title2", "Publishing2", 2011, 200),
		Book("Author3", "Title3", "Publishing3", 2012, 300),
		Book("Author4", "Title4", "Publishing4", 2013, 400),
		Book("Author5", "Title5", "Publishing5", 2014, 500),
		Book("Author6", "Title6", "Publishing6", 2015, 600),
		Book("Author7", "Title7", "Publishing7", 2016, 700),
		Book("Author8", "Title8", "Publishing8", 2017, 800),
		Book("Author9", "Title9", "Publishing9", 2018, 900),
		Book("Author10", "Title10", "Publishing10", 2019, 1000)
	};

	cout << "Enter author to search for: ";	
	string author;
	cin >> author;
	listBooksByAuthor(books, bookArraySize, author);

	cout << "Enter publishing to search for: ";
	string publishing;
	cin >> publishing;
	listBooksByPublishing(books, bookArraySize, publishing);

	cout << "Enter year to search for: ";
	int year;
	cin >> year;
	listBooksByYear(books, bookArraySize, year);

    return 0;
}

