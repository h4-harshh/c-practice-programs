// FUNCTION OVERLOADING WITH DIFFERENT AREAS
#include<iostream>
using namespace std;

//volume of cuboid
int volume(int l,int b,int h)
{
    return(l*b*h);
}

//volume of cube
int volume(int a)
{
    return(a*a*a);
}

//volume of cylinder
int volume(int r,int h)
{
    return(3.14*r*r*h);
}
int main()
{
    cout<<"the volume of cube of side 3 is: "<<volume(3)<<endl;
    cout<<"the volume of cuboid of length 3 bredth 4 and height 2 is: "<<volume(3,4,2)<<endl;
    cout<<"the volume of cylinder of redius 2 and height 3 is: "<<volume(2,3)<<endl;
    return 0;
}