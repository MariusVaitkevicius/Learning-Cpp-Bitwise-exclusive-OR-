#include <iostream>
using namespace std;

// Bitwise exclusive OR (^).
// Display the following matrix of a number:
//       a
//        3 6
//       a a
//        6 3
//       a a a

int main() {
   int a, b, c;
   cout << "Enter a value ";

   cin >> a;
   b = a^3;
   c = a^6;

   cout << "Answer"<<endl;

   int x[]={a, b , c, c, b, a};

   cout << x[0] <<endl;
   cout << x[1] << "" << x[2] <<endl;
   cout << x[3] << "" << x[4] << "" << x[5] <<endl;

   return 0;
}
