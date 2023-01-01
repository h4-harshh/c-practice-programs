#include<iostream>
using namespace std;

class complex;

class calculator
{
    public:
    int addnumber(int a,int b)
    {
        return(a+b);
    }
    int sumrealcomplex(complex,complex);
    int sumcompcomplex(complex,complex);
};

class complex
{
    int a; 
    int b;
     
    friend int calculator:: sumrealcomplex(complex,complex);
    friend int calculator:: sumcompcomplex(complex,complex);

    public:
    void setnumber(int v1,int v2)
    {
        a=v1;
        b=v2;
    }
    void printnumber()
    {
        cout<<"the value of complex number is "<<a<<" + "<<b<<" i"<<endl;
    }
};

int calculator :: sumrealcomplex(complex o1,complex o2 )
    {
        return(o1.a+o2.a);
    }
int calculator :: sumcompcomplex(complex o1,complex o2 )
    {
        return(o1.b+o2.b);
    }

int main()
{
    complex o1,o2;
    o1.setnumber(4,6);
    o2.setnumber(6,7);
    calculator calc;
    int res=calc.sumrealcomplex(o1,o2);
    cout<<"the sum of real part is  "<<res<<endl;
    int resc=calc.sumcompcomplex(o1,o2);
    cout<<"the sum of imiginary part is  "<<resc<<endl;
    
    return 0;
}