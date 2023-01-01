#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:

    complex(void);         //this is the declaration of the constructor.AUTOMATICALLY CALLED/INVOKED

    void printnumber()
    {
        cout<<"the value of complex number is "<<a <<" + "<<b<<" i "<<endl;
    }
};

complex :: complex(void)  //this is the comstructer representation
{
    a=10;
    b=4;
}

int main()
{
    complex o1,o2;
    o1.printnumber();
    o2.printnumber();

    return 0;
}



/*
    A constructor is a special member function with the same name as the class. The
constructor doesn’t have a return type. Constructors are used to initialize the objects of
its class. Constructors are automatically invoked whenever an object is created.
*/