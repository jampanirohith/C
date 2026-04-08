#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
  vector<int> v = {10, 20, 30, 40, 50};
  vector<int>:: iterator it;
  
  cout << "Normal order: ";
  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << *it << "";
  }
  cout << endl;
  vector<int>::reverse_iterator rit;
  
  cout <<"Reverse order: ";
  for(auto rit = v.rbegin(); rit != v.rend(); rit++)
  {
  cout << *rit << "";
  }
  return 0;
} 
