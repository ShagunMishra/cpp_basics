#include<math.h>
#include <iostream>

using namespace std;

int main()
{
    int p=0,n;
    cout<<"Enter the number:";
    cin>>n;
    for(int j=2;j<=n;j++)
    {
        p=0;
        for(int i=2;i<j;i++)
        {
            if(j%i==0)
                p++;
                continue;
        }
        if(p==0)
        cout<<j<<"\t";
    }
    return 0;
}
