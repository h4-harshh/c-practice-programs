// SWAPPING OF TWO NUMBERS USING REFERENCE VARIABLE FOR RETURN SOMETHING IN THE ABOVE CODE ONLY

#include<iostream>
using namespace std;
int & swap(int &a,int &b);
int main()
{
    int x=5,y=4;
    cout<<"the value of x is: "<<x<<"  and the value of y is: "<<y<<endl;
    swap(x,y)=78;
    cout<<"the value of x is: "<<x<<" and the value of y is: "<<y<<endl;
    return 0;
}

int &swap(int &a,int &b)
{
    int temp=a;
        a=b;
        b=temp;
        return a;
}