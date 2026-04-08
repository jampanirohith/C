#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << v.size() << '\n';

    v.push_back(2);
    cout << v.size() << '\n';

    v.push_back(7);
    cout << v.size() << '\n';

    v.push_back(9);
    cout << v.size() << '\n';
}