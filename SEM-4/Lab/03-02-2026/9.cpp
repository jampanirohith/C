#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;
int main()
{
  list<int> ls = {5, 10, 15};
  
  for (auto it = ls.begin(); it != ls.end(); ++it)
  {
  cout << *it << "" ;
  }
  return 0;
} 
