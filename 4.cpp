#include<iostream>
using namespace std;
int glo=6;
void sum()
{
    int a;
    cout<<glo;
}
int main()
{
    int glo=8;
glo=77;
bool is_true=false;
sum();
cout<<glo<<is_true;
return 0;
}