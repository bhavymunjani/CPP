#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return (fib(n-1)+fib(n-2));
}
int main()
{
    int n;
    cout<<"enter the value of term position n=";
    cin>>n;
    cout<<"the value of term at "<< n <<"th position is " <<fib(n);

}