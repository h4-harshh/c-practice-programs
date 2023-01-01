#include<iostream>
using namespace std;



int main()
{
    int a;
    a=9;
    int *ptr=&a;
    cout<<"the value of a is "<<*ptr<<endl;

    int *p=new int(8);
    cout<<"the value is "<<*p<<endl;

    int *arr=new int[3];
    *(arr+0)=1;
    arr[1]=2;
    *(arr+2)=3;
    cout<<"the value of a[0] is "<<arr[0]<<endl;
    cout<<"the value of a[1] is "<<arr[1]<<endl;
    cout<<"the value of a[2] is "<<arr[2]<<endl;

    return 0;
}