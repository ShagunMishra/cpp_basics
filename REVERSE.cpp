#include <iostream>

using namespace std;

int main()
{
    int n,d,r=0;
    cout<<"Enter the number:";
    cin>>n;
    do
    {
        d=n%10;
        n=n/10;
        r=(r*10)+d;
    }while(n>0);
    cout<<"Reverse of the number:"<<r;
    return 0;
}
