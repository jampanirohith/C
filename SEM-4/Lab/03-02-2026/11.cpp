#include<iostream>
#include<list>
using namespace std;
int main()
{
  list<int> l = {10, 20, 30};
  list<int>::iterator it;
  
  it = l.begin();
  advance(it, 1);

  l.insert(it, 15);
  advance(it, 1);
  l.erase(it);
  
  for(it=l.begin(); it!=l.end(); it++)
  {
  	cout << *it << endl;
  }
  return 0;
}
