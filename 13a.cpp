// program on array
#include<iostream>
using namespace std;
int main()
{
    int a[]={2,5,4,6,6};
    // it can also be declared as
    // a[0]={2};
    // a[1]={5};
    // a[2]={4};
    // a[3]={6};
    // a[4]={6};
    for(int i=0;i<5;i++)
    {
        cout<<"the value at index "<<i<<" is: "<<a[i]<<endl;
    }
    // it can also be write as
    // cout<<"the value at index 0 is: "<<a[0]<<endl;
    // cout<<"the value at index 1 is: "<<a[1]<<endl;
    // cout<<"the value at index 2 is: "<<a[2]<<endl;
    // cout<<"the value at index 3 is: "<<a[3]<<endl;
    // cout<<"the value at index 4 is: "<<a[4]<<endl;
    return 0;
}