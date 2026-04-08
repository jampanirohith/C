//sort 

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec={44, 22, 33, 11, 55};

    sort(vec.begin(), vec.end());

    for(int num : vec)
    {
        cout << num << "";

    }
    cout<<endl;
    return 0;
}