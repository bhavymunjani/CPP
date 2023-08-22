#include<iostream>
using namespace std;
int factorial(int n)
{
    if (n<2)
    {
        return 1;
    }
    return  n*factorial(n-1);
}
int main()
{
 int a;
 cout<<"enter the value of a";
 cin>>a;
 cout<<"the factorial of "<< a <<" is "<< factorial(a);   
}








