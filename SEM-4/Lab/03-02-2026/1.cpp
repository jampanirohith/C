#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
  vector<string> names = {"Adam", "Ilesh", "John", "David"};
  vector<string>:: iterator it;

  for (it = names.begin(); it != names.end(); ++it)
  {
    cout << *it << endl;
  }
  return 0;
} 
    
 
 
