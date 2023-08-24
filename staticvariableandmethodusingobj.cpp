#include<iostream>
using namespace std;
class Employee
{
    int id;
    static int count;
    public:
    void setData(void)
    {
        cout<<"enter the id of the employee"<<endl;
        cin>>id;
        count++;
    }
    void getData(void)
    {
        cout<<"the id of the employee is"<<" "<<id<< " "<<"end this is the Employee number"<< " "<<count<<endl;
    }
    static void getcount(void)
    {
       // cout<<id; //throw the error because id is not static
        cout<<"the value of the count is="<<count<<endl;
    }

};

//count is the static data member of the class employee
int Employee ::count; //defult value of count is 0;

int main()
{
    Employee bhavy,brijesh,vansh;
    //bhavy.id=1; //can not do this because id are private

    
    bhavy.setData();
    bhavy.getData();
    Employee::getcount();
    
    brijesh.setData();
    brijesh.getData(); 
    Employee::getcount();

    vansh.setData();
    vansh.getData();
    Employee::getcount();
    return 0;
}