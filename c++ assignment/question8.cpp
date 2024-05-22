#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Book {
    string title;
    string author;
    double price;
    string publisher;
    int stockPosition;
};

class BookShop {
private:
    vector<Book> inventory;

public:
    // Function to add a book to the inventory
    void addBook(const Book& book) {
        inventory.push_back(book);
    }

    // Function to search for a book in the inventory
    void searchBook(const string& title, const string& author) {
        bool found = false;
        for (const Book& book : inventory) {
            if (book.title == title && book.author == author) {
                found = true;
                displayBookDetails(book);
                break;
            }
        }
        if (!found) {
            cout << "Book not found in the inventory." << endl;
        }
    }

    // Function to display book details
    void displayBookDetails(const Book& book) {
        cout << "Title: " << book.title << endl;
        cout << "Author: " << book.author << endl;
        cout << "Price: $" << book.price << endl;
        cout << "Publisher: " << book.publisher << endl;
        cout << "Stock Position: " << book.stockPosition << endl;
    }

    // Function to process book purchase
    void processPurchase(const string& title, const string& author, int numCopies) {
        bool found = false;
        for (Book& book : inventory) {
            if (book.title == title && book.author == author) {
                found = true;
                if (book.stockPosition >= numCopies) {
                    double totalCost = numCopies * book.price;
                    cout << "Total cost: $" << totalCost << endl;
                    book.stockPosition -= numCopies;
                } else {
                    cout << "Required copies not in stock." << endl;
                }
                break;
            }
        }
        if (!found) {
            cout << "Book not found in the inventory." << endl;
        }
    }
};

int main() {
    BookShop bookShop;

    // Adding some sample books to the inventory
    Book book1 = {"The Great Gatsby", "F. Scott Fitzgerald", 15.99, "Scribner", 10};
    Book book2 = {"To Kill a Mockingbird", "Harper Lee", 12.50, "J. B. Lippincott & Co.", 8};
    Book book3 = {"1984", "George Orwell", 10.25, "Secker & Warburg", 5};

    bookShop.addBook(book1);
    bookShop.addBook(book2);
    bookShop.addBook(book3);

    // Example usage
    bookShop.searchBook("The Great Gatsby", "F. Scott Fitzgerald");
    bookShop.processPurchase("To Kill a Mockingbird", "Harper Lee", 3);

    return 0;
}
