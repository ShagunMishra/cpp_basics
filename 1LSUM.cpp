#include <iostream>

using namespace std;

int main()
{
    long n,d,a=0,b=0;
    cout<<"Enter the four digit number:";
    cin>>n;
    do
    {
        d=n%10;
        n=n/10;
        a++;
        if(a==1||a==4)
        {
            b=b+d;
        }
    }while(n>0);
    cout<<"Sum of first and last digit of the number:"<<b;
    return 0;
}
