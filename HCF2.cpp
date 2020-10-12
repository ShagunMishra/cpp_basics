#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the two numbers:\n";
    cin>>a>>b;
    while(1)
    {
        c=a%b;
        if(c>0)
        {
            a=b;
            b=c;
        }
        else
            break;
    }
    cout<<"HCF of the given number is: "<<b;
    return 0;
}
