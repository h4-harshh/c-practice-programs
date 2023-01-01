// program on class on shop item
#include<iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initcounter(void) { counter=0; }
        void setPrice(void);
        void displayPrice(void);
};

void shop:: setPrice(void)
{
    cout<<"Enter the Id of item no. "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of itemId "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop:: displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}

int main()
{
    shop harsh;
    harsh.initcounter();
    harsh.setPrice();
    harsh.setPrice();
    harsh.setPrice();
    harsh.displayPrice();
    return 0;
}