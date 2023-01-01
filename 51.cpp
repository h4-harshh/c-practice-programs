#include<iostream>
using namespace std;

class complex
{
    int real,imiginary;

    public:
    void setdata(int a,int b)
    {
        real=a;
        imiginary=b;
    }

    void printdata(void)
    {
        cout<<"the real part is "<<real<<endl;
        cout<<"the imiginary part is "<<imiginary<<endl;
    }
};

int main()
{
    // complex harsh;
    // complex *ptr=&harsh;
    complex *ptr=new complex;
    // (*ptr).setdata(8,5);------------> it can also be used as|
    ptr->setdata(7,8);
    // (*ptr).printdata();--------------> it can also be used as|
    ptr->printdata();

    

    
    // // complex harsh;
    // harsh.setdata(6,9);
    // harsh.printdata();

    complex *ptr1=new complex[4];
    ptr->setdata(6,7);
    ptr->printdata();
    return 0;
}