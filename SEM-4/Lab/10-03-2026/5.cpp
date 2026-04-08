//move

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<string> source={"apple", "banana", "cherry"};
    vector<string> destination(3);

    move(source.begin(), source.end(), destination.begin());

    cout << "After move:" << endl;
    cout << "----------------------" << endl;
    cout << "source: " << endl;

    for(string str : source)
    {
        cout << str << " ";

    }
    cout<<endl;

    cout << "destination: ";
    for(string str : destination)
    {
        cout << str << " ";

    }
    cout<<endl;
    return 0;
}