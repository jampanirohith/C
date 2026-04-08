#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int n, x;

    cout << "Enter number of elemets:";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cout << v.size() << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
}