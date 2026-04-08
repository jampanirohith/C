#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
  vector<float> v;
  float temp;
  
  cout << "Enter temperature readings: ";
  for (int i=0; i<7; i++)
  {
  cin >> temp;
  v.push_back(temp);
  }
  
  cout << "Temperatures readings: ";
  for(float x: v)
  {
  	cout << x << ", ";
  }
  cout << "\nTotal readings:" << v.size() << endl;  
  return 0;
} 
