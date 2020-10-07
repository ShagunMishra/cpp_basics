#include <iostream>

using namespace std;

int main()
{
    int n,d,s=0,e,a;
    cout<<"Enter the number:";
    cin>>a;
    n=a;
    cout<<"Cube of its digit is ";
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        e=d*d*d;
        cout<<e<<" ";
        s=s+e;
    }
    cout<<"\nAnd there sum is:"<<s;
    if(n==s)
    cout<<"\nHence, the number is armstrong number.";
    else
    cout<<"\nHence, the number is not armstrong number.";
    return 0;
}
