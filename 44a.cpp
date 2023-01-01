#include<iostream>
using namespace std;

class Student
{
    protected:
    int roll_no;
    public:
        void set_rollno(int r)
        {
            roll_no=r;
        }
        void print_rollno(void)
        {
            cout<<"The roll number of the student is: "<<roll_no<<endl;
        }
};

class Test : virtual public Student
{
    protected:
    float physics,maths;
    public:
        void set_marks(float m1,float m2)
        {
            physics=m1;
            maths=m2;
        }
        void print_marks(void)
        {
            cout<<"The maris obtained are: " <<endl
                <<"physics:-"<<physics<<endl
                <<"Maths:-"<<maths<<endl;
        }
};

class Sports : virtual public Student
{
    protected:
    float score;
    public:
        void set_score(float sc)
        {
            score=sc;
        }
        void print_score(void)
        {
            cout<<"The score obtained in sports is:-"<<score<<endl;
        }
};

class Result : public Test,public Sports
{
    protected:
    float total;
    public:
        void display(void)
        {
            total=(maths+physics+score);
            print_rollno();
            print_marks();
            print_score();
            cout<<"The total score obtained is:-"<<total<<endl;
        }
};

int main()
{
    Result harsh;
    harsh.set_rollno(83);
    harsh.set_marks(98.4,97.7);
    harsh.set_score(8);
    harsh.display();
    return 0;
}