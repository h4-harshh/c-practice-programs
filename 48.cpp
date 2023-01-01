#include<iostream>
using namespace std;

class Base1
{
    protected:
    int data1;

    public:
    Base1(int x){
        data1=x;
        cout<<"Base1 constructor is called "<<endl;
    }
    void printdata1(void)
    {
        cout<<"The value of data1 is " <<data1<<endl;
    }
};

class Base2
{
    protected:
    int data2;

    public:
    Base2(int y){
        data2=y;
        cout<<"Base2 constructor is called "<<endl;
    }
    void printdata2(void)
    {
        cout<<"The value of data2 is " <<data2<<endl;
    }
};

class Derived: public  Base1, public Base2
{
    protected:
    int derived1,derived2;
    public:
    Derived(int a,int b,int c,int d) : Base1(a),Base2(b)
    {
        derived1=c;
        derived2=d;
        cout<<"Derived constructor is called "<<endl;
    }
    void printdataderived(void)
    {
        cout<<"the value of derived1 is "<<derived1<<endl
            <<"the value of derived2 is "<<derived2<<endl;
    }
};

int main()
{
    Derived harsh(2,3,4,5);
    harsh.printdata1();      //data will be printed in this sequence but the consturctor are called according
    harsh.printdata2();      // to the rules
    harsh.printdataderived();
    
    return 0;
}