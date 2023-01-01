// ADDITION PROGRAM BASED ON FUNCTION
#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c=a+b;
    return c;
}
int main()
{
    int num1,num2;
    cout<<"Enter the value of first number"<<endl;
    cin>>num1;
    cout<<"Enter the value of second number"<<endl;
    cin>>num2;
    cout<<"The sum of the two numbers is: "<<sum(num1,num2)<<endl;
    return 0;
}