// THIS CODE IS COPY OF LAST CODE BUT ONLY ONE THING IS CHANGED
#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favchar;
    float salary;
}ep;

int main()
{
    ep harsh;
    harsh.eId=17;
    harsh.favchar='H';
    harsh.salary=1200000000;
    cout<<harsh.eId<<endl;
    cout<<harsh.favchar<<endl;
    cout<<harsh.salary<<endl;
    return 0;
}