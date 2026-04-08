//Calculator Using function templates
#include<iostream>
using namespace std;

template<typename T>
T add(T a, T b)
{
    return a+b;
}

template<typename T>
T sub(T a, T b)
{
    return a-b;
}

template<typename T>
T mul(T a, T b)
{
    return a*b;
}

template<typename T>
T div(T a, T b)
{
    return a/b;
}


int main()
{
    int a, b, x;
    string numtype;
    cout << "Enter input type(decimal/integer)";
    cin >> numtype;

    if(numtype = integer)
    {
    cout<< "\nEnter digits:"<<endl;
    cin>>a;
    cin>>b;

    cout<< "Choose operation: \n 1.Addition\n 2.Subtraction \n 3. Multiplication \n 4. Division"<<endl;
    cin >> x;

    if(x=1)
    {
        cout << add<int>(a, b) << endl;
    }
    else if(x=2)
    {
        cout << sub<int>(a, b) << endl;
    }
    else if(x=3)
    {
        cout << mul<int>(a, b) << endl;
    }
    else
    {
        cout << div<int>(a, b) << endl;
    }
    }
    
   else  if(numtype = decimal)
    {
    cout<< "\nEnter digits:"<<endl;
    cin>>a;
    cin>>b;

    cout<< "Choose operation: \n 1.Addition\n 2.Subtraction \n 3. Multiplication \n 4. Division"<<endl;
    cin >> x;

    if(x=1)
    {
        cout << add<float>(a, b) << endl;
    }
    else if(x=2)
    {
        cout << sub<float>(a, b) << endl;
    }
    else if(x=3)
    {
        cout << mul<float>(a, b) << endl;
    }
    else
    {
        cout << div<float>(a, b) << endl;
    }

    }
    return 0;
}
