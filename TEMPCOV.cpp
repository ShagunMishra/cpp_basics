#include <iostream>

using namespace std;

int main()
{
    float t,c;
    int a;
    cout<<"To convert temperature:\n1.Fahrenheit to Celsius\n2.Celsius to\
    Fahrenheit\nEnter your choice(1,2):";
    cin>>a;
    if(a<3)
    {
        cout<<"Enter the temperature:\n";
        cin>>t;
    }
    switch (a)
    {
        case 1 : c=(t-32)*1.8;
	             cout<<"Temperature in Celsius is:\n"<<c;
	             break;
        case 2 : c=(t*1.8)+32;
	             cout<<"Temperature in Fahrenheit is:\n"<<c;
	             break;
        default :cout<<"Wrong choice!!!!!!!!!";
    }
    return 0;
}
