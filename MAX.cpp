#include <iostream>

using namespace std;

int main()
{
    int x, y, z, m;
    cout<<"Enter the three numbers:\n";
    cin>>x>>y>>z;
    m=x;
    if(y>m)
        m=y;
    if(z>m)
        m=z;
    cout<<"Largest number is:"<<m;
    return 0;
}
