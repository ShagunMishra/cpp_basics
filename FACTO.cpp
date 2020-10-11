#include <iostream>

using namespace std;

int main()
{
    long f=1,a;
    cout<<"Enter the number:";
    cin>>a;
    for(int x=a;x>0;x--)
    {
        f=f*x;
    }
    cout<<"Factorial of "<<a<<" is: "<<f;
    return 0;
}
