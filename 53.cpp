#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    void setdata(int a)
    {
    // a=a;----------->>>>>>>>this gives a garbage value due to precedence of local variable as compare to class variable
        this->a=a;
    }
    void getdata(void)
    {
        cout<<"the value  of a is "<<a<<endl;
    }
};

int main()
{
    A harsh;
    int n;
    cout<<"Enter the value of a"<<endl;
    cin>>n;
    harsh.setdata(n);
    harsh.getdata();
    return 0;
}