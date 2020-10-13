#include <iostream>

using namespace std;

int main()
{
    int n,d,s=0;
    cout<<"Enter the number:";
    cin>>n;
    do
    {
        d=n%10;
        n=n/10;
        s=s+d;
    }
    while(n!=0);
    cout<<"Sum of the digits of the number:"<<s;

    return 0;
}
