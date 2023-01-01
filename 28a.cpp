#include<iostream>
using namespace std;
class Y;

class X
{
    int data;

    public:
    void setvalue(int val)
    {
        data=val;
    }
    friend  void add(X,Y);
};

class Y
{
    int num;

    public:
    void setvalue(int val)
    {
        num=val;
    }
        
    friend  void add(X,Y);

};

void add( X o1,Y o2)
{
    cout<<"the summing of X and Y is: "<<o1.data+o2.num<<endl;
}

int main()
{
    X a1;
    a1.setvalue(4);

    Y b1;
    b1.setvalue(6);

    add(a1,b1);    
    return 0;
}