#include <iostream>
#include <string>
using namespace std;

int main()
{
   string first, second, result;
   cout<<"Enter first string: ";
   getline(cin, first);

   cout<<"Enter second string: ";
   getline(cin, second);

   result = first+"" + second;
   cout << "Combined String:"<< result;
   cout << "\n The string lenght is:" << result.length()<< "\n";

    return 0;
}