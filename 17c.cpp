// DEFAULT VARIABLE
#include<iostream>
using namespace std;
int sum(int a ,int b=9)
{
    return(a+b);
}

int main()
{
    int a=2;
    cout<<"the value is: "<<sum(a)<<endl;
    int b=6;
    cout<<"the value is: "<<sum(a,b)<<endl;
    return 0;
}

// if we use const variable the value of that variable will not be change accidently