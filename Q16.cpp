#include <iostream>
using namespace std;

class Book
{
private:
    int id;
    string author;
    string title;
    float price;
    string publisher;
    int stock;

public:
    // Constructor to initialize the book
    Book(int Bid, string ath, string tit, float pri, string pub, int sto)
        : id(Bid), author(ath), title(tit), price(pri), publisher(pub), stock(sto) {}

    // This function returns the id of book
    int getId()
    {
        return id;
    }

    // This function checks if the stock is availabe
    bool isAvail()
    {
        if (stock > 0)
            return true;
        else
            return false;
    }

    // This function prints details if book is available
    void printDetails()
    {
        cout << "TITLE : " << title << endl
             << "AUTHOR : " << author << endl
             << "PUBLISHER : " << publisher << endl
             << "PRICE : " << price << endl
             << "STOCK : " << stock << endl;
        // Reducing stock value by 1
        stock--;
    }
};
int main()
{
    // Passing value to constructor and initializing object book1 and book2
    Book book1(101, "J.K. Rowling", "Harry Potter and the Sorcerer's Stone", 1599, "Scholastic", 10);
    Book book2(102, " Sharavanan", "Adventures of Sharavanan", 1249, "Sharavanan Books", 5);

    int id;
    cout << "Enter the id of book\n";
    cin >> id;

    if (book1.getId() == id && book1.isAvail())
    {
        cout << "Book is available!\n";
        book1.printDetails();
    }
    else  if (book2.getId() == id && book2.isAvail())
    {
        cout << "Book is available!\n";
        book2.printDetails();
    }
    else
    cout<<"Sorry, book is not available\n";

    return 0;
}