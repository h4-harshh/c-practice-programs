#include<iostream>
using namespace std;

struct employee
{
    /* data */
    int eId;
    char favchar;
    float salary;
};

int main()
{
    struct employee harsh;
    harsh.eId=17;
    harsh.favchar='H';
    harsh.salary=1200000000;
    cout<<harsh.eId<<endl;
    cout<<harsh.favchar<<endl;
    cout<<harsh.salary<<endl;
    return 0;
}
