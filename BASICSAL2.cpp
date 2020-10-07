#include <iostream>

using namespace std;

int main()
{
    float bs,da,hra,lic,pf,gs,ded,na;
    cout<<"Enter the basic salary:\n";
    cin>>bs;
    if(bs<=5000)
    {
        da=bs*4/100;   cout<<"DA=4%\t";
        hra=bs*5/100;  cout<<"HRA=5%\t";
        lic=bs*6/100;  cout<<"LIC=6%\t";
        pf=bs*7/100;   cout<<"PF=7%\n";
    }
    if(15000>bs && bs>5000)
    {
        da=bs*5/100;   cout<<"DA=5%\t";
        hra=bs*6/100;  cout<<"HRA=6%\t";
        lic=bs*7/100;  cout<<"LIC=7%\t";
        pf=bs*8/100;   cout<<"PF=8%\n";
    }
    if(bs>=15000)
    {
        da=bs*6/100;   cout<<"DA=6%\t";
        hra=bs*7/100;  cout<<"HRA=7%\t";
        lic=bs*8/100;  cout<<"LIC=8%\t";
        pf=bs*9/100;   cout<<"PF=9%\n";
    }
    gs=da+hra+bs;
    cout<<"GS="<<gs<<"\n";
    ded=lic+pf;
    cout<<"DED="<<ded<<"\n";
    na=gs-ded;
    cout<<"Total amount (GS-DED) is:"<<na;
    return 0;
}
