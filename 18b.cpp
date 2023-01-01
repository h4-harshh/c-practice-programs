// FIBONACCI VALUE AT ANY PARTICULAR INDEX UISNG RECURSION
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    else
    return fib(n-2)+fib(n-1);
}
int main()
{
    int a;
    cout<<"Enter the index of that number you want in your fibonacci series"<<endl;
    cin>>a;
    cout<<"The value at index "<<a<<" is "<<fib(a)<<endl;
    return 0;
}