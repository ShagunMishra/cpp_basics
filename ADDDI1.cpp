#include <iostream>

using namespace std;

int main()
{
    long n,d,r=0,a,s,b=0;
    cout<<"Enter the number:";
    cin>>n;
    do
    {
        d=n%10;
        n=n/10;
        r=(r*10)+d;
    }while(n>0);
    do
    {
        a=r%10;
        r=r/10;
        s=a+1;
        b=(b*10)+s;
    }while(r>0);
    cout<<"Output after adding 1 in each digit is:"<<b;
    return 0;
}
