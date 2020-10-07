#include <iostream>

using namespace std;

int main()
{
    double n,x=0,y=1,z;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Fabonacci series:\n";
    cout<<x<<" "<<y<<" ";
    for(int i=1;i<=n-2;i++)
    {
        z=x+y;
        cout<<z<<" ";
        x=y;
        y=z;
    }
    return 0;
}
