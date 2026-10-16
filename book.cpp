#include "book.h"
#include <string>

using namespace std;

Book::Book() {}

Book::Book(const string& title, const string& author, const string& isbn) {
    this->title = title;
    this->author = author;
    this->isbn = isbn;
    this->isAvailable = true;
    this->borrowerId = "";
}

// getters
string Book::getTitle() const {
    return title;
}
string Book::getAuthor() const {
    return author;
}
string Book::getISBN() const {
    return isbn;
}
bool Book::getAvailability() const {
    return isAvailable;
}
string Book::getBorrowerId() const {
    return borrowerId;
}

// setters
void Book::setTitle(const string& title) {
    this->title = title;
}
void Book::setAuthor(const string& author) {
    this->author = author;
}
void Book::setISBN(const string& isbn) {
    this->isbn = isbn;
}
void Book::setAvailability(bool available) {
    this->isAvailable = available;
}
void Book::setBorrowerId(const string& id) {
    this->borrowerId = id;
}

// méthodes

// associe le userId de la personne qui emprunte au borrowerId de Book. Change isAvailable to false
void Book::checkOut(const string& borrowerId) {
    this->isAvailable = false;
    this->borrowerId = borrowerId;
}

// remet a zero le borrowerId et isAvailable to true
void Book::returnBook() {
    this->borrowerId = "";
    this->isAvailable = true;
}

string Book::toString() const {
    return this->title;
}
