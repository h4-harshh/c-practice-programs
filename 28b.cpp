//program for swapping of two numbers using class 

#include<iostream>
using namespace std;

class c2;

class c1
{
    int data1;

    friend void exchange(c1 &,c2 &);

    public:
    void setvalue(int val)
    {
        data1=val;
    }

    void display()
    {
        cout<<data1<<endl;
    }
};


class c2
{
    int data2;

    friend void exchange(c1 &,c2 &);

    public:
    void setvalue(int val)
    {
        data2=val;

    }

    void display()
    {
        cout<<data2<<endl;
    }
};


void exchange(c1 & a,c2 & b)
{
    int temp=a.data1;
    a.data1=b.data2;
    b.data2=temp;
};


int main()
{
    c1 x;
    x.setvalue(6);

    c2 y;
    y.setvalue(8);

    exchange(x,y);

    cout<<"the value of data1 after swapping is "<<endl;
    x.display();

    cout<<"the value of data2 after swapping is "<<endl;
    y.display();
    
    return 0;
}