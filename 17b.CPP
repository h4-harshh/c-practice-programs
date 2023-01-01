// STATIC VARIABLE
#include<iostream>
using namespace std;
int sum(int a ,int b)
{
    static int c=0;// runs only one time
    c=c+1;
    return(a+b+c);
}

int main()
{
    int a=2; int b=3;
    cout<<"the value is: "<<sum(a,b)<<endl; 
    cout<<"the value is: "<<sum(a,b)<<endl; 
    cout<<"the value is: "<<sum(a,b)<<endl; 
    cout<<"the value is: "<<sum(a,b)<<endl; 
    cout<<"the value is: "<<sum(a,b)<<endl; 
    cout<<"the value is: "<<sum(a,b)<<endl; 
    return 0;
}