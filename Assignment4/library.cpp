#include <iostream>
#include <string>
using namespace std;

class LibraryBook
{
private:
    string bookName;
    int bookID;
    bool isIssued;

public:

    void accept()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;

        cout << "Enter Book Name: ";
        getline(cin >> ws, bookName);

        isIssued = false;
    }

    void issueBook()
    {
        if (isIssued == false)
        {
            isIssued = true;
            cout << "Book Issued Successfully!" << endl;
        }
        else
        {
            cout << "Book is already issued!" << endl;
        }
    }

    void returnBook()
    {
        if (isIssued == true)
        {
            isIssued = false;
            cout << "Book Returned Successfully!" << endl;
        }
        else
        {
            cout << "Book was not issued!" << endl;
        }
    }

    void display()
    {
        cout << "\nBook ID: " << bookID << endl;
        cout << "Book Name: " << bookName << endl;

        if (isIssued == true)
        {
            cout << "Status: Issued" << endl;
        }
        else
        {
            cout << "Status: Available" << endl;
        }
    }
};

int main()
{
    LibraryBook b;

    b.accept();

    b.display();

    b.issueBook();

    b.display();

    b.returnBook();

    b.display();

    return 0;
}