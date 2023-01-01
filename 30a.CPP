#include<iostream>
using namespace std;

class complex{
    int a,b;
     
    public:

    complex(int ,int);

    void printnumber()
    {
        cout<<"the value of complex number is "<<a<<" + "<<b<<" i "<<endl;
    }
};

complex::complex(int x,int y)  // it is known as the parameterized constructor as it accepts arguments
{
    a=x;
    b=y;
}


int main()
{

    complex a(6,4);      ///////////implicit call
    a.printnumber();

    complex b=complex(4,8);            //////////explicit call
    b.printnumber();


    return 0;
}