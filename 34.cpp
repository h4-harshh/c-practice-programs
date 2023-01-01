//copy constructor
#include<iostream>
using namespace std;

class number
{
    int a;

    public:

    number()
    {
        a=0;
    }
    
    number(int num)
    {
        a=num;
    }

    number(number &obj)
    {
        cout<<"the copy constructor called "<<endl;
        a=obj.a;
    }
    void shownumber()
    {
        cout<<"the value of the number is "<<a<<endl;
    }
};
int main()
{   
    number x,y,z(45),z3;
    x.shownumber();
    y.shownumber();
    z.shownumber();

    number z2(z);
    z2.shownumber();

    z3=z;    //the copy constructor will not invocked bec
    // ause it will be invocked only at the decleratio time only 
    
    return 0;
}