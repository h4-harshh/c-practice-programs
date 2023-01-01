//pointers in array
#include<iostream>
using namespace std;
int main()
{
    int a[]={2,3,4,5};
    int* p=a;
    cout<<"the value of array at *p is: "<<*p<<endl;
    cout<<"the value of array at *(p+1) is: "<<*(p+1)<<endl;
    cout<<"the value of array at *(p+2) is: "<<*(p+2)<<endl;
    cout<<"the value of array at *(p+3) is: "<<*(p+3)<<endl;

    cout<<*p++<<endl;
    cout<<*++p<<endl;
    cout<<*p++<<endl;
    
    return 0;
}