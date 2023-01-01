// ARRAY OF OBJECT
#include<iostream>
using namespace std;

class employee 
{
    int id;
    int salary;

    public:
        void setId(void){
            cout<<"Enter the id of the employee"<<endl;
            cin>>id;
        }

        void getId(void){
            cout<<"The id of the employee is: "<<id<<endl;
        }
};

int main()
{
    employee hp[5];
    for (int i = 0; i < 5; i++)
    {
        hp[i].setId();
        hp[i].getId();
    }
    
    return 0;
}