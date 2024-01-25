// Const member functions

// To address the above issue, we need to make print() a const member function.
// A const member function is a member function that guarantees it will not modify the object
// or call any non-const member functions (as they may modify the object).

// Making print() a const member function is easy -- 
// we simply append the const keyword to the function prototype,
// after the parameter list, but before the function body:
#include <iostream>

struct Date
{
    int year {};
    int month {};
    int day {};

    void print() const // now a const member function
    {
        std::cout << year << '/' << month << '/' << day;
    }
};

int main()
{
    const Date today { 2020, 10, 14 }; // const

    today.print();  // ok: const object can call const member function

    return 0;
}