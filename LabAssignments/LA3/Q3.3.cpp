#include <iostream>
using namespace std;

class Library
{
private:
    string bookTitle;
    int totalCopies;

public:
    void setDetails(string title, int copies)
    {
        bookTitle = title;

        if (copies >= 0)
        {
            totalCopies = copies;
        }
        else
        {
            totalCopies = 0;
            cout << "Number of copies cannot be negative." << endl;
        }
    }

    void issueBook()
    {
        if (totalCopies > 0)
        {
            totalCopies--;
            cout << "Book issued successfully." << endl;
        }
        else
        {
            cout << "No copies are available." << endl;
        }
    }

    void display()
    {
        cout << "Book Title: " << bookTitle << endl;
        cout << "Total Copies: " << totalCopies << endl;
    }
};

int main()
{
    Library book;

    book.setDetails("C++ Programming", 3);

    cout << "Initial Details:" << endl;
    book.display();

    cout << "\nAfter issuing a book:" << endl;
    book.issueBook();
    book.display();

    // book.totalCopies = 10;   // Not allowed because totalCopies is private

    return 0;
}