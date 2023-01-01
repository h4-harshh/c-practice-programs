//PROGRAM ON THE INITIALLIZATION OF THE CONSTRUCTOR HARSH
#include<iostream>
using namespace std;

class Test
{
    int a;
    int b;
    public:
    // Test(int i,int j):a(i),b(j)
    // Test(int i,int j):a(i),b(i+j)
    // Test(int i,int j):a(i),b(a+j)
    /*Test(int i,int j):a(i+b),b(j) ||in both these two cases in line 12 and 13 a will get a garbage vallue 
    Test(int i,int j):b(j),a(i+b) || because b is decalared after a if b will declare at first then the 
    garbage value will be eleminated;
    */
    // Test(int i,int j):a(i),b(4*j)
    // Test(int i,int j):a(i)
    Test(int i,int j):a(i)
    {
        b=j;
        cout<<"the constructor is executed "<<endl;
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};



int main()
{
    Test t(5,7);
    return 0;
}