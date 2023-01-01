#include<iostream>
#include<cmath>
using namespace std;

class point
{
    int x;
    int y;

    friend point distance(point,point);

    public:

    point(int a,int b)
    {
        x=a;
        y=b;
    }

    void display()
    {
        cout <<"the point is ("<<x<<","<<y<<")"<<endl;
    }
};

 point distance(point p,point q)
{
    float res;
    float x_cord=(p.x-q.x);
    float y_cord=(p.y-q.y);
    res =sqrt(pow(x_cord,2)+pow(y_cord,2));

    cout<<"the distance between the points is "<<res<<endl;

    // return res;
}

int main()
{
    point p(2,2);
    p.display();
    

    point q(2,2);
    q.display();

   distance(p,q);

    
    return 0;
}