#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if(age<18)
    {
        cout<<"you are not eligible for the party"<<endl;
    }
    else if(age==18)
    {
        cout<<"you are eligible for the party but there are many rules you have to follow: "<<endl;
    }
    else
    {
        cout<<"you are eligible for the party: "<<endl;
    }
    return 0;

}