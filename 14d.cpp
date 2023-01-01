// THIS CODE IS COPY OF LAST CODE BUT ONLY ONE THING IS CHANGED
#include<iostream>
using namespace std;

union money
{
    /* data */
    int rice;
    char car;
    float pound;
    };

int main()
{
    union money m1;
    m1.rice=35;
    m1.car='c';
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
    return 0;
}