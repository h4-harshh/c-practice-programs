#include<iostream>
using namespace std;

class Employee
{
    public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id=inpid;
        salary=34.0;
        
    }
    Employee(){}

};

class programmer:public Employee
{
    public:
    programmer(){}
    programmer(int inpid)
    {
        id=inpid;

    }
    int languagecode=9;
    void getdata()
    {
        cout <<"the id of the employee is "<<id<<endl;
    }

};
int main()
{
    Employee harsh(2),nikhil(3);
    // cout<<harsh.salary<<endl;
    
    // cout<<nikhil.salary<<endl;
    programmer skillf(6);
    cout<<"the id of the employee is "<<skillf.id<<endl;
    cout<<"the languagecode of the programmer is "<<skillf.languagecode<<endl;
    skillf.getdata();
    return 0;
}