#include <iostream>

using namespace std;

void table(int x, int y)
{
    int a;
    cout<<"Enter the number:";
    cin>>x;
    for(y=1;y<=10;y++)
    {
        a=x*y;
        cout<<x<<"*"<<y<<"="<<a<<"\n";
    }
}

int main()
{
    int p, q;
    table(p, q);
    return 0;
}
