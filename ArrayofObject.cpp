#include<iostream>
using namespace std;
class Employee
{
    int id;
    int salary;
    public:
    void setId(void)
    {
        cout<<"enter the id of the EMPLOYEE="<<endl;
        cin>>id;
    }
    void getId(void)
    {
        cout<<"id of the this user is ="<<id<<endl;
    }

};

int main()
{
    Employee E[5]; //make the array of the object
    for(int i=0;i<5;i++)
    {
        E[i].setId();
        E[i].getId();

    }
    
    return 0;
}