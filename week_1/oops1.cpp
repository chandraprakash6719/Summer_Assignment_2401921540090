#include <iostream>
using namespace std;

// Interface
class LibraryUser
{
public:
    virtual void registerAccount() = 0;
    virtual void requestBook() = 0;
};

// KidUser Class
class KidUser : public LibraryUser
{
public:
    int age;
    string bookType;

    void registerAccount()
    {
        if (age < 12)
        {
            cout << "You have successfully registered under a Kids Account" << endl;
        }
        else
        {
            cout << "Sorry, Age must be less than 12 to register as a kid" << endl;
        }
    }

    void requestBook()
    {
        if (bookType == "Kids")
        {
            cout << "Book Issued successfully, please return the book within 10 days" << endl;
        }
        else
        {
            cout << "Oops, you are allowed to take only kids books" << endl;
        }
    }
};

// AdultUser Class
class AdultUser : public LibraryUser
{
public:
    int age;
    string bookType;

    void registerAccount()
    {
        if (age > 12)
        {
            cout << "You have successfully registered under an Adult Account" << endl;
        }
        else
        {
            cout << "Sorry, Age must be greater than 12 to register as an adult" << endl;
        }
    }

    void requestBook()
    {
        if (bookType == "Fiction")
        {
            cout << "Book Issued successfully, please return the book within 7 days" << endl;
        }
        else
        {
            cout << "Oops, you are allowed to take only adult Fiction books" << endl;
        }
    }
};

int main()
{
    // Test Case 1
    cout << "----- Kid User Test -----" << endl;

    KidUser kid1;
    kid1.age = 10;
    kid1.registerAccount();

    kid1.bookType = "Kids";
    kid1.requestBook();

    cout << endl;

    KidUser kid2;
    kid2.age = 18;
    kid2.registerAccount();

    kid2.bookType = "Fiction";
    kid2.requestBook();

    cout << "\n----- Adult User Test -----" << endl;

    AdultUser adult1;
    adult1.age = 5;
    adult1.registerAccount();

    adult1.bookType = "Kids";
    adult1.requestBook();

    cout << endl;

    AdultUser adult2;
    adult2.age = 23;
    adult2.registerAccount();

    adult2.bookType = "Fiction";
    adult2.requestBook();

    return 0;
}