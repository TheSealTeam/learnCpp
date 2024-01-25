#include <iostream>

const int versions = 7;
long verCode[versions] = { 199711L, 201103L, 201402L, 201703L, 202002L, 202302L, 202612L};
const char* verStr[versions] = { "Pre-C++11", "C++11", "C++14", "C++17", "C++20", "C++23", "C++26" };

int main()
{
    std::cout << "Your compiler is using language standard: ";

    for (int i=0; i < versions; ++i)
    {
        // __cplusplus is a preprocessor macro representing the current language standard
        if (__cplusplus <= verCode[i])
        {
            std::cout << verStr[i];
            if (__cplusplus < verCode[i])
                std::cout << " (preview)";
            break;
        }
    }

    std::cout << '\n';

    return 0;
}