// SWAPPING OF TWO NUMBERS USING REFERENCE VARIABLE
#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main()
{
    int x=5,y=4;
    cout<<"the value of x is: "<<x<<"  and the value of y is: "<<y<<endl;
    swap(x,y);
    cout<<"the value of x is: "<<x<<" and the value of y is: "<<y<<endl;
    return 0;
}

void swap(int &a,int &b)
{
    int temp=a;
        a=b;
        b=temp;
}

