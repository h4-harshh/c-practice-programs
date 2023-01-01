// CPP PROGRAM ON MULTIPLE INHERITANCE
#include<iostream>
using namespace std;

class student
{
    protected:
    float roll_no;
    public:
    void set_roll_no(int);
    void get_roll_no();

    
};

void student :: set_roll_no(int r)
{
    roll_no=r;
}

void student :: get_roll_no()
{
    cout<<"the roll number of the student is "<<roll_no<<endl;
}

class Exam : public student
{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void getmarks();
};

void Exam :: set_marks(float m,float p)
{
    maths=m;
    physics=p;
}

void Exam :: getmarks()
{
    cout<<"the marks of maths is "<<maths<<" and the marks of physics is "<<physics <<endl;
}

class result : public Exam
{
    protected:
    float percentage;
    public:
    void display_result();
};

void result :: display_result()
{
    get_roll_no();
    getmarks();
    cout<<"the result is "<<(maths+physics)/2<<"%"<<endl;
}

int main()
{
    result harsh;
    harsh.set_roll_no(83);
    harsh.set_marks(98.0,94.0);
    harsh.display_result();
    return 0;

}