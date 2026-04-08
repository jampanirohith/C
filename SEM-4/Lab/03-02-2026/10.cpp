#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;
int main()
{
  list<int> numbers = {1, 2, 3};
  
  cout <<"Initial list: ";
  for (int n: numbers)
  {
  cout << n << endl;
  }
  
  numbers.push_front(0);
  
  numbers.push_back(4);
  
  cout << endl << "FInal list: ";
  for(int n : numbers)
  {
  	cout << n << endl;
  }
  return 0;
} 
