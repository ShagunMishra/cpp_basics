#include <iostream>

using namespace std;

int main()
{
    int a,n,s=0,g;
    cout<<"Enter the four digit number:";
    cin>>n;
    g=n;
    do
    {
        a=g%10;
        g=g/10;
        s=a+s;
    }while(g!=0);
    cout<<"Sum of digits of number is:"<<s<<"\n";
    int b,r=0,e;
    e=s;
    do
    {
        b=e%10;
        r=(r*10)+b;
        e=e/10;
    }while(e!=0);
    cout<<"Reverse of the digit is:"<<r<<"\n";
    int c;
    c=r*s;
    cout<<"Product of "<<s<<" and "<<r<<" is: "<<c<<"\n";
    if(n==c)
        cout<<"Hence, the number is harsed.";
    else
        cout<<"Hence, the number is not harsed."
    return 0;
}
