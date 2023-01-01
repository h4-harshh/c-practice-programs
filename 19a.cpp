// FUNCTION OVERLOADIING
#include<iostream>
using namespace std;

int sum(int a,int b)
{
    cout<<"Using the function with 2 argument"<<endl;
    return(a+b);
}


int sum(int a,int b,int c)
{
    cout<<"Using the function with 3 argument"<<endl;
    return(a+b+c);
}



int main()
{
    cout<<"the sum of 3 and 6 is : "<<sum(3,6)<<endl;
    cout<<"the sum of 3,7 and 6 is : "<<sum(3,7,6)<<endl;

    return 0;
}