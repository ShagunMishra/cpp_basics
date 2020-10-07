#include <iostream>

using namespace std;

int main()
{
    long n, d=0, c=0, i=1;
    cout<<"Enter the number:";
    cin>>n;
    while(n>0)
    {
        d=n%2;
        n=n/2;
        c=(d*i)+c;
        i=i*10;
    }
    cout<<"Binary number for the given number is:";
    cout<<c;
    return 0;
}
