#include <iostream>

int main()
{
   int x; // no initializer (default initialization)
   int y = 5; // initializer after equals sign (copy initialization)
   int z(5);  // initializer in parenthesis (direct initialization)

   // List initialization methods (C++11) (preferred)
   int a{5};
   int b = {8}; // initializer in braces after equals sign (copy list initialization)
   int c {};     // initializer is empty braces (value initialization)

   [[maybe_unused]] int h {5};
   // the above variables will not generate unused variable warnings
}