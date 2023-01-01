// PROGRAM FOR ENUM
#include<iostream>
using namespace std;
int main()
{
    enum meal{breakfast,lunch,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    meal m1=breakfast;
    cout<<m1<<endl;
    return 0;
}
// /*#include<iostream>
// using namespace std;
// typedef struct employee
// {
//  /* data */
//  int eId; //4
//  char favChar; //1
//  float salary; //4
// } ep;
// union money
// {
//  /* data */
//  int rice; //4
//  char car; //1
//  float pounds; //4
// };
// int main(){
//  enum Meal{ breakfast, lunch, dinner};
//  Meal m1 = lunch;
//  cout<<(m1==2);
//  // cout<<breakfast;
