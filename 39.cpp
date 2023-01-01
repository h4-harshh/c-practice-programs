//-------------PROTACTED MODE
#include<iostream>
using namespace std;
class Base
{
    protected:
    int a=9;
    private:
    int b;
};

class Derived : protected Base
{

    public:
    void getdata();
};

void Derived::getdata()
{
    // a=8;
    cout<<"the value of the data is "<<a<<endl;
}

int main()
{
    Base datab;
    // cout<< "the data is "<<datab.a<<endl;
    Derived datad;
    datad.getdata();
   
    
    return 0;
}