//2D Array

#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<array<int , 3>, 3> matrix = {{{1,2,3}, {4,5,6}, {7,8,9}}};

    cout << "2D Array Elements: \n";
    for(auto row : matrix)
    {
        for(int num : row)
        {
            cout << num << "";
        }
        cout << endl;
    }
    return 0;
}