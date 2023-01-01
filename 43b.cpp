// AMBIGUITY IN THE SAME FUNCTIONS
#include<iostream>
using namespace std;

class base
{
    int a;
    public:
    void greet()
    {
        cout<<"ram ram ji"<<endl;
    }
};





class derived:public base
{
    public:
    void greet()
    {
       cout<<"radhe radhe ji"<<endl;           //----------------THIS WILL OVERWRITE THE INHERETED GREET
    }
};

int main()
{
    derived harsh;
    harsh.greet();
    return 0;
}