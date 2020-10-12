#include<math.h>
#include <iostream>

using namespace std;

int main()
{
    int a,b,x;
    cout<<"Enter the number:";
    cin>>a;
    cout<<"Enter the power of the number:";
    cin>>b;
    x=pow(a,b);
    cout<<"Calculated value is:"<<x;
    return 0;
}
