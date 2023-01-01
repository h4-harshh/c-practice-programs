#include<iostream>
using namespace std;

class simple
{
    int data1;
    int data2;

    public:

    simple(int x,int y=8,int z=6)
    {
        data1=x;
        data2=y;
    }
    // friend simple printdata();+
    void printdata();
    
};
// simple printdata()
void simple ::  printdata()
{
    cout<<"the value of data1 and data2 is "<<data1<<"and "<<data2<<endl;
}

int main()
{
    simple a(5,6);
    a.printdata();

    simple b(6);
    b.printdata();

    
    return 0;
}