// AMBIGUITY IN THE SAME FUNCTIONS
#include <iostream>
using namespace std;

class base1
{
    int a;

public:
    void greet()
    {
        cout << "ram ram ji" << endl;
    }
};

class base2
{
    int a;

public:
    void greet()
    {
        cout << "radhe radhe" << endl;
    }
};

class derived1 : public base1, public base2
{
public:
    void greet()
    {
        base1::greet();                 //HERE WE HAVE TO CLEAR THE AMBIGUITY
    }
};

int main()
{
    derived1 harsh;
    harsh.greet();
    return 0;
}