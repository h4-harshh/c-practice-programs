#include<iostream>
using namespace std;

class shopitem
{
    int id;
    float price;

    public:

    void setdata(int a,float b)
    {
        id=a;
        price=b;
    }

    void getdata(void)
    {
        cout<<"the code of the item is "<<id<<endl;
        cout<<"the price of the item is "<<price<<endl;
    }
};


int main()
{
    int size=4;
    shopitem *ptr=new shopitem[size];
    shopitem *ptrtemp=ptr;
    int p,i;
    float q;
    for(i=0;i<4;i++)
    {
        cout<<"Enter the value of id and price "<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for(i=0;i<4;i++)
    {
        ptrtemp->getdata();
        ptrtemp++;
    }

    
    return 0;
}