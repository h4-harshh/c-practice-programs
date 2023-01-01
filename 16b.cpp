// CALL BY REFERENCE using pointer refrecnce

#include<iostream>
using namespace std;
void swap(int *a,int *b);
int main()
{
    int a=5,b=4;
    cout<<"the value of a is: "<<a<<"  and the value of b is: "<<b<<endl;
    swap(&a,&b);
    cout<<"the value of a is: "<<a<<" and the value of b is: "<<b<<endl;
    return 0;
}

void swap(int *a,int *b)
{
    int temp=*a;
        *a=*b;
        *b=temp;
}