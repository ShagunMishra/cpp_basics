#include <iostream>

using namespace std;

int main()
{
    float x,y,z;
    cout<<"Enter the basic salary:\n";
    cin>>x;
    y=x*12.5/100;
    z=x+y;
    cout<<"Total amount @ 12.5% is:"<<z;
    return 0;
}
