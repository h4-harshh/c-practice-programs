//to check binary using class
#include<iostream>
using namespace std;

class binary
{
    private: // likho ya na likho  by default it will be private 
        string s;
        void bin_chk(void);
    public:
        void read(void);
        // void bin_chk(void);
        void ones_complement(void);
        void display(void);
};


void binary::read(void)
{
    cout<<"enter a number to check wheather it is binary or not"<<endl;
    cin>>s;
}

void binary::bin_chk(void)
{
    for( int i=0;i<s.length();i++)
    {
        if(s.at(i)!='1'&& s.at(i)!='0')
        {
        cout<<"this is not a binary number"<<endl;
        exit(0);
        }
    }
}

void binary:: ones_complement(void)
{
    bin_chk();                                          //this is called nestiono of member function
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}


void binary :: display(void)
{
    cout<<"Displaying your binary number"<<endl;
        for(int i=0;i<s.length();i++)
        {
            cout<<s.at(i);
        }
        cout<<endl;
}


int main()
{
    binary b;
    b.read();
    //b.bin_chk();
    b.display();
    b.ones_complement();
    b.display();
    return 0;
}