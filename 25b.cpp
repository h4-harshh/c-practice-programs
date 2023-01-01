// complex number class
#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
        void setdata(int v1, int v2){
            a=v1;
            b=v2;
        }

        void setdatabysum(complex o1,complex o2)
        {
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }

        void printnumber(){
            cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};
int main()
{
    complex a1,a2,a3;
    a1.setdata(1,3);
    a1.printnumber();

    a2.setdata(6,2);
    a2.printnumber();
    
    a3.setdatabysum(a1,a2);
    a3.printnumber();
    return 0;
}