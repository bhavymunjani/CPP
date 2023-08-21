#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void setData(int v1, int v2) //this is for two value
    {
        a=v1;
        b=v2;
    }
    void setDataBySum(complex o1,complex o2) //hear pass the object of the class
    {                                        
        a=o1.a+o2.a;  //this code is add A position of two different-diffrent object //ex:o1=(2,3) & o2=(4,5) so this code give ans=2+4=6
        b=o1.b+o2.b;  //this code is add b position of two different-diffrent object //ex:o1=(2,3) & o2=(4,5) so this code give ans=3+5=8
    }
    void printData(void)
    {
        cout<<"the complex number is="<<a<<"+"<<b<<"i"<<endl; //for printing in complex format like a+bi // ex =2+3i;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.setData(2,3);
    c1.printData();

    c2.setData(5,6);
    c2.printData();

    c3.setDataBySum(c1,c2);
    c3.printData();


    
    return 0;
}