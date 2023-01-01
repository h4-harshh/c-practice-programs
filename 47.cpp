//cpp program on calculator with two classes as caluculator class and scientific calculator class and then a
//class is derived out of these two classes
#include<iostream>
#include<cmath>
using namespace std;

class calculator
{
    
    protected:
    int a;
    int b;
    public:
    void set_data(void);
    void get_data(void);

};

void calculator:: set_data(void)
{
    cout<<"Enter the values of a and b for finding arithmetic operation "<<endl;
    int x;
    int y;
    cout<<"Enter the value of a "<<endl;
    cin>>x;
    cout<<"Enter the value of b "<<endl;
    cin>>y;
    a=x;
    b=y;
}

void calculator::get_data(void)
{

    cout<<"The value of a+b "<<"="<<(a+b)<<endl;
    cout<<"The value of a-b "<<"="<<(a-b)<<endl;
    cout<<"The value of a*b "<<"="<<(a*b)<<endl;
    cout<<"The value of a/b "<<"="<<(a/b)<<endl;
}

class scientific_calculator 
{
    protected:
    int c;
    // int d;
    public:
    void set_data2(void);
    void get_data2(void);
    

};

void scientific_calculator::set_data2(void)
{
    float p;
    cout<<"Enter a number for finding the trigonometric operations "<<endl;
    cin>>p;
    c=p;
}

void scientific_calculator::get_data2(void)
{
    cout<<"The value of sin(c) is: "<<sin(c)<<endl;
    cout<<"The value of cos(c) is: "<<cos(c)<<endl;
    cout<<"The value of tan(c) is: "<<tan(c)<<endl;
    cout<<"The value of sinh(c) is: "<<sinh(c)<<endl;
    cout<<"The value of cosh(c) is: "<<cosh(c)<<endl;
    cout<<"The value of tan^-1(c) is: "<<atan(c)<<endl;
}

class Hybridcalculator : public calculator,public scientific_calculator
{
  /*
  here we don't need to write anything because all the functions needed for this opration is already in public
  of the hybridcalculator class
*/
};


int main()
{
    Hybridcalculator harsh;
    harsh.set_data2();
    harsh.get_data2();
    harsh.set_data();
    harsh.get_data();
}