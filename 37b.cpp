// PROGRAM ON INHERITANCE
#include<iostream>
using namespace std;

class employee
{
    public:
    int id;
    float salary;
    employee(){}
    employee(int inpid)
    {
        id=inpid;
        salary=34.0;
    }
};

class programmer : public employee
{
    public:
    int languagecode=8;
    programmer(){}
    programmer(int inputid)
    {
        id=inputid;
        salary=99;
    }
    void getdata()
    {
        cout<<"the id of the employee is "<<id<<" and the language code is "<<
        languagecode<<" and the salary of the employee is "<<salary<<endl;
    }

};


int main()
{
    employee harsh(1),nikhil(3);
    cout<<"the salary of the employee with id "<<harsh.id <<" is "<<harsh.salary<<endl;
    cout<<"the salary of the employee id "<<nikhil.id <<" is "<<nikhil.salary<<endl;
    programmer nitin(5);
    cout<<"the salary of the employee with id "<<nitin.id<<" is "<<nitin.salary<<endl;
    cout<<"the language code of the employee is "<<nitin.languagecode<<endl;
    nitin.getdata();
    return 0;
} 