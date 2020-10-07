#include <iostream>

using namespace std;

int main()
{
    double a,b,r;
    cout<<"Enter the two numbers:\n";
    cin>>a>>b;
    cout<<"Enter the operator(+,-,*,/):";
    char ch;
    cin>>ch;
    {
    if(ch=='+')
        r=a+b;
    else
        if(ch=='-')
            r=a-b;
        else
            if(ch=='*')
                r=a*b;
        else
            if(ch=='/')
                r=a/b;
        else
            cout<<"Wrong operator!!!!!!!!!\n";
    }
    cout<<"Calculated result is:"<<r;
    return 0;
}
