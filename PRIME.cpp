#include<math.h>
#include <iostream>

using namespace std;

int main()
{
    int a,s=0,p=0;
    cout<<"Enter the number:";
    cin>>a;
    s=sqrt(a)+1;
    for(int i=2;i<=s;i++)
    {
        if(s%i==0)
        p=1;
        break;
    }
    if(p==1)
        cout<<"The number is prime number.";
    else
        cout<<"The number is not prime number.";
    return 0;
}
