#include <iostream>

using namespace std;

int main()
{
    int a=12,b=18,p,c=1;
    do
    {
        c++;
        if(a%c==0&&b%c==0)
        p=c;
    }while(c<a&&c<b);
    cout<<"HCF of 12 and 18 is: "<<p;
    return 0;
}
