#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the n"<<endl;
    int n;
    int i;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime"<<endl;
            break;
        }
    }
    if(n==i)
    {
        cout<<"prime";
    }
    return 0;
}