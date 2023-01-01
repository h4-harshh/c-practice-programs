// CALL BY VALUE FUNCTION
#include<iostream>
using namespace std;
void swap(int a, int b){
    int temp=a;
        a=b;
        b=a;
}
int main()
{
    int a=2,b=5;
    cout<<"the value of a is: "<<a<<" and the value of b is: "<<b<<endl;
    swap(a,b);
    cout<<"the value of a is: "<<a<<" and the value of b is: "<<b<<endl;
    
    return 0;
}