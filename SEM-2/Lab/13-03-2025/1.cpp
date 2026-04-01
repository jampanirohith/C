#include <iostream>
using namespace std;

//Function with int parameter
void print_over(int i) {
  cout<<"Integer:"<<i<<endl;
  }
  
//Function with double parameter
void print_over(double d) {
  cout<<"Double:"<<d<<endl;
}

//Function with two parameters
void print_over(int i, double d) {
  cout << "Integer:" << i << ",Double:"<< d << endl;
}


int main() {
  print_over(10);
  print_over(5.5);
  print_over(10, 5.5);
  return 0;
}
