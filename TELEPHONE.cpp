#include <iostream>

using namespace std;

int main()
{
    float p,q,r,s,t,a,b,c,d,e,m,n,x;
    cout<<"Enter the number of calls:";
    cin>>p;
    if(p>=200)
    {
        q=p-50; a=50*0;
        r=q-50; b=50*0.25;
        s=r-50; c=50*0.75;
        t=s-50; d=50*1.20;
	    e=t*1.50;
        m=a+b+c+d+e;
    }
    else
    if(p>150)
    {
        q=p-50; a=50*0;
        r=q-50; b=50*0.25;
        s=r-50; c=50*0.75;
	    d=s*1.20;
        m=a+b+c+d;
    }
    else
    if(p>=100)
    {
        q=p-50; a=50*0;
        r=q-50; b=50*0.25;
	    c=r*0.75;
        m=a+b+c;
    }
    else
    if(p<100)
    {
        q=p-50; a=50*0;
	    b=q*0.25;
        m=a+b;
    }
    if(p<50)
    {
        m=0;
    }
    cout<<"Cost of "<<p<<" calls is: "<<m<<"\n";
    n=m*8/100;
    cout<<"8% of cost of calls is: "<<n<<"\n";
    cout<<"Rent = 100\n";
    x=n+m+100;
    cout<<"Total amount to pay:"<<x;
    return 0;
}
