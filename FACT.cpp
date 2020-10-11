#include <iostream>

using namespace std;

int main()
{
    long i,n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Factor of the given number is:\n";
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";
    }
    return 0;
}
