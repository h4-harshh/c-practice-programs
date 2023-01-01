// pointers 
#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int*b=&a;
    cout<<"the address of a is: "<<&a<<endl;
    cout<<"the address of a is: "<<b<<endl;
    cout<<"the value of a is: "<<a<<endl;
    // deference variable
    cout<<"the value of a is: "<<*b<<endl;
    // pointer to pointer
    int**c=&b;
    cout<<"the address of b is: "<<&b<<endl;
    cout<<"the address of b is: "<<c<<endl;
    cout<<"the value of b is: "<<*c<<endl;
    cout<<"the value of a is: "<<**c<<endl;
    // in the previious line *c gives the value of b i.e. address of a then **c gives the value of that is stored in b i.e. gives the value of *b

    
    return 0;
}