#include <iostream>
using namespace std;

int main()
{
    int n,i,s;
    int x=0;
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

    cout<<"Enter the element to search:\n";
    cin>>s;

    for(i=0;i<n;i++)
    {
       if(a[i]=s){
        x=i;
        break;
       }
    }
    if(x==0)
        cout <<"Element not found"<<endl;
    else
        cout<<"Element "<<s<<" found at position "<<x << endl;
    return 0;
}