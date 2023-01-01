#include<iostream>
using namespace std;

class Bankdeposit
{
    int principle;
    int years;
    float simpleinterest;
    float returnvalue;

    public:

    Bankdeposit(){}
    Bankdeposit(int p,int y,float r);
    Bankdeposit(int p,int y,int r);
    void show();
};

Bankdeposit :: Bankdeposit(int p,int y,float r)
{
    principle=p;
    years=y;
    simpleinterest=r;
    returnvalue=principle;

    for (int i = 0; i < years; i++)
    {
        returnvalue=returnvalue*(1+simpleinterest);
    }
    
}
Bankdeposit :: Bankdeposit(int p,int y,int r)
{
    principle=p;
    years=y;
    simpleinterest=((float (r))/100);
    returnvalue=principle;

    for (int i = 0; i < years; i++)
    {
        returnvalue=returnvalue*(1+simpleinterest);
    }
    
}

void Bankdeposit :: show()
{
    cout<<"The principle was "<<principle<<
    "and the return value after "<<years<<" years is "<<returnvalue<<endl;
}

int main()
{
    Bankdeposit bd1,bd2,bd3;

    int p;
    int y;
    float r;
    int R;
    bd3.show();

    cout<<"Enter the value of p ,y and r "<<endl;
    cin>>p>>y>>r;
    bd1=Bankdeposit(p,y,r);
    bd1.show();

    cout<<"Enter the value of p ,y and R "<<endl;
    cin>>p>>y>>R;
    bd2=Bankdeposit(p, y ,R);
    bd2.show();

    
    return 0;
}