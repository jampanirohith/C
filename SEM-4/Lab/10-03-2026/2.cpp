//2x3 2D Array with input

#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<array<int , 3>, 2> matrix = {};
    
    cout << "Enter six elements in 2D Array Elements: \n";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
           cin>>matrix[i][j];
        }
    }

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