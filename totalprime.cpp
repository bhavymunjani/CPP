#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n="<<endl;
    cin>>n;
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"non prime";
            break;
        }
    }
    if(n==i)
    {
        cout<<"prime";
    }
}