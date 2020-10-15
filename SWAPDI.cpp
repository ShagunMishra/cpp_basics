#include <iostream>

using namespace std;

int main()
{
    long n,d,r=0,a,s=0,b=0,c=0,e=0;
    cout<<"Enter the four digit number:";
    cin>>n;
    do
    {
        d=n%10;
        n=n/10;
        r=(r*10)+d;
        s++;
        if(s==2)
            c=d;
        if(s==3)
            e=d;
    }
    while(n>0);
    s=0;
    do
    {
        a=r%10;
        r=r/10;
        s++;
        if(s==2)
            a=c;
        if(s==3)
            a=e;
        b=(b*10)+a;
    }
    while(r>0);
    cout<<"Output after swaping 2nd and 3rd digit is:"<<b;

    return 0;
}
