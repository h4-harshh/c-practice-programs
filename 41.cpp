// MULTIPLE INHERITENCE
#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public base1, public base2
{
public:
    void show()
    {
        cout << "the value of base1int is " << base1int << endl;
        cout << "the value of base2int is " << base2int << endl;
        cout << "the sum of base1int and base2int is " << base1int + base2int << endl;
    }
};

int main()
{
    Derived harsh;
    harsh.set_base1int(56);
    harsh.set_base2int(35);
    harsh.show();
    return 0;
}