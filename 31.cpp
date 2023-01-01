// constructor overloading

#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }

    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    complex(int x)
    {
        a = x;
        b = 0;
    }

    void printnumber()
    {
        cout << "the value of complex number is " << a << " + " << b << " i " << endl;
    }
};

int main()
{
    complex p(5, 6);
    p.printnumber();

    complex s(8);
    s.printnumber();

    complex q;
    q.printnumber();

    return 0;
}