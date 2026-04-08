#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
  vector<int> v = {10, 20, 40, 50};
  
  v.insert(v.begin() + 2, 30);
  cout << "After instert";
  for(int x: v)
  {
  	cout << x << "";
  }
  v.erase (v.begin() + 3);
  cout<< "After erase";
  for(int x: v)
  {
  	cout << x << "";
  }
  return 0;
} 
