#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age "<<endl;
    cin>>age;
    switch(age)
    {
        case 22:
            cout<<"your age is "<<22<<endl;
        break;
        case 33:
            cout<<"your age is "<<33<<endl;
        break;
        case 44:
            cout<<"your age is "<<44<<endl;
        break;
        case 55:
            cout<<"your age is "<<55<<endl;
        break;
        default:
            cout<<"wrong choice";
    }
    return 0;
}