#include <iostream>

using namespace std;

int main()
{
    long f=1,a;
    cout<<"Enter the number:";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        f=1;
    for(int x=i;x>0;x--)
    {
        f=f*x;
    }
    cout<<f<<"\n";
    }
    return 0;
}
