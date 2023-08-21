#include<iostream>
using namespace std;
class Student
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int A,int B,int C);
    void getdata()
    {   
        cout<<"the value of a is="<<a<<endl;
        cout<<"the value of b is="<<b<<endl;
        cout<<"the value of c is="<<c<<endl;
        cout<<"the value of d is="<<d<<endl;
        cout<<"the value of e is="<<e<<endl;
    }

};
void Student :: setdata(int A,int B,int C)
{
    a=A;
    b=B;
    c=C;
}

int main()
{
    Student bhavy;
    bhavy.d=50;
    bhavy.e=100;
    bhavy.setdata=(1,2,3);
    bhavy.getdata();
    return 0;

}