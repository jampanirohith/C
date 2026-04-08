#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the size of array:\n";
    cin>>n;
    float a[n];

    cout<<"Enter "<<n<<" elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array elements are:\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"," << "";
    }
    cout<<"\n";
    return 0;
}