// FACTORIAL OF NUMBER USING RECURSION
#include<iostream>
using namespace std;
int factoral(int a)
{
    if(a<=1)
    {
        return 1;
    }
    else{
        return a*factoral(a-1);
    }
}
int main()
{
    int n;
    cout<<"Enter the value of a number to calculate factorial"<<endl;
    cin>>n;
    cout<<"the factorial of "<<n<<" is "<<factoral(n)<<endl;
    return 0; 
}