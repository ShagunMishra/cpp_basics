#include <iostream>

using namespace std;

void table(int x, int y)
{
    int a;
    for(x=1;x<=10;x++)
    {
        for(y=2;y<=10;y++)
        {
            a=x*y;
            cout<<y<<"*"<<x<<"="<<a<<"\t";
        }
        cout<<"\n";
    }
}

int main()
{
    int p, q;
    table(p, q);
    return 0;
}
