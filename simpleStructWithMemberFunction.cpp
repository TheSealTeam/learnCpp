// Member function version
#include <iostream>

struct Date
{
    int year {};
    int month {};
    int day {};

    void print() // defines a member function named print
    {
        std::cout << year << '/' << month << '/' << day;
    }
};

int main()
{
    Date today { 2020, 10, 14 }; // aggregate initialize our struct

    today.day = 16; // member variables accessed using member selection operator (.)
    //object today is implicilty passed to member function print()
    today.print();  // member functions also accessed using member selection operator (.)

    //today::print(); does not work for struct. That is for namespace or classes
    return 0;
}