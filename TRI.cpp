#include <iostream>

using namespace std;

void area(float x, float y)
{
    float s,a,b,c;
    cout<<"Enter the three sides of triangle:\n";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    y=s*(s-a)*(s-b)*(s-c);
    x=sqrt(y);
    cout<<"Area of triangle is:"<<x;
}

int main()
{
    float p,q;
    area(p,q);
    return 0;
}
