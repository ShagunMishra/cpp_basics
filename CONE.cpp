#include <iostream>

using namespace std;

void cone(float v, float a)
{
    float r,h,l;
    cout<<"Enter the radius of the cone:";
    cin>>r;
    cout<<"\nEnter the height of the cone:";
    cin>>h;
    cout<<"\nEnter the slant height the cone:";
    cin>>l;
    v=3.14*pow(r,2)*h*1/3;
    cout<<"\nVolume of the cone="<<v;
    a=3.14*r*(l+r);
    cout<<"\nArea of the cone="<<a;
}

void main()
{
    int a, b;
    cone(a,b);
}
