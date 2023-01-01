// program on static variable
#include<iostream>
using namespace std;
class employee
{
    int Id;
    static int count;   //BY DEFAULT HAS 0 INITIAL VALUE AND IT IS NOT THE PROPERTY OF ANY OBJECT
                        //IT IS THE PROPERTY OF CLASS IF WE USE INT COUNT ONLY THE IT GIVES VALUE AS
                        // 1 AGAIN AND AGAIN 
    
    public:
        void setdata(void)
        {
            cout<<"Enter the Id of the employee: "<<count+1<<endl;
            cin>>Id;
            count ++;
        }
        void getdata(void)
        {
            cout<<"The Id of the employee is: "<<Id<<" and "<<count<<" is the number of the employee"<<endl;
        }
        static void getcount(void)
        {
            cout<<"the value of the count is: "<<count<<endl;
        }
};

int employee::count;

int main()
{
    employee harsh,nikhil,nitin;
    harsh.setdata();
    harsh.getdata();
    employee::getcount();

    nikhil.setdata();
    nikhil.getdata();
    employee::getcount();

    nitin.setdata();
    nitin.getdata();
    employee::getcount();

    return 0;
}