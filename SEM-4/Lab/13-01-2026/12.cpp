#include <iostream>
#include <cmath>
using namespace std;

float maxrainval(float arr[], int n)
{   
    float l=arr[1];
    for(int i=0;i<n;i++)
    {
       if(arr[i]>l){
        l=arr[1];
       }
       return l
    }
}

int main()
{
    int n;
    cout<<"Enter the number of rainfall measurments";
    cin>>n;
    float rainfall[n];

    cout<<"Enter "<<n<<" measurments:\n";
    for(int i=0;i<n;i++)
    {
        cin>>rainfall[i];
    }

    cout<<"rainfall measurments:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"," << "";
    }

    float maxrainfallvalue = maxrainval(rainfall, n);
    cout << "Maximum rainfall value= " << maxrainfallvalue << "";
    return 0;
}