#include<iostream>
using namespace std;

int count=0;

class num{

    public:
    num()
    {
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;
    }
    ~num()
    {
        
        cout<<"This is the time when distructor is called for object number "<<count<<endl;
        count--;
    }
};

int main()
{
    cout<<"Entering the main function "<<endl;
    cout<<"creating the first object "<<endl;
    num n1;
    {
        cout<<"Entering the block"<<endl;
        cout<<"Creating two more constructor "<<endl;
        num n2,n3;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Back to the main function"<<endl;
    
    return 0;
}