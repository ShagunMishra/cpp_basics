#include <iostream>

using namespace std;

int sum(int n)
{
    int a=0,s=0;
    do
    {
        a=n%10;
        n=n/10;
        s=s+a;
    }while(n>0);
    return(s);
}

int rev(int n)
{
    int a=0,s=0;
    do
    {
        a=n%10;
        n=n/10;
        s=(s*10)+a;
    }while(n>0);
    return(s);
}

int retharsed(int n)
{
    int s=sum(n);
    int r=rev(s);
    int m=s*r;
    return m;
}

int main()
{
    int n;
    cout<<"Enter your number:";
    cin>>n;
    int f=retharsed(n);
    if(f==n)
        cout<<"\nThe given number is harsed number.";
    else
        cout<<"\nThe given number is not harsed number.";
    return 0;
}
