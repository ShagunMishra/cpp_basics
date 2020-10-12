#include <iostream>

using namespace std;

int main()
{
    long i,n,p;
    cout<<"Enter the number:";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        p=0;
        if(n%i==0&&n%2!=0)
        {
            cout<<i<<" ";
            continue;
        }
        p=1;
    }
    if(p==1)
        cout<<"There is no odd factor of the given number";
    else
        cout<<"are the odd factor of the given number";
    return 0;
}
