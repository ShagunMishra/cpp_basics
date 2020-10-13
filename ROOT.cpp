#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x,y;
    float a,b,c,e,d;
    cout<<"Enter the value of a,b,c in equation ax^2+bx+c:\n";
    cin>>a>>b>>c;
    e=b*b-4*a*c;
    d=sqrt(e);
    x=(-b+d)/(2*a);
    y=(-b-d)/(2*a);
    cout<<"Roots of the equation is: "<<x<<" or "<<y;

    return 0;
}
