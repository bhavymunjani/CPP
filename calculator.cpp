#include<iostream>
using namespace std;
int main()
{
    float n1,n2;
    cout<<"enter the value of n1 and n2 ="<<endl;
    cin>>n1>>n2;
    char operation;
    cout<<"for squre type = @"<<endl;
    cout<<"enter the operation="<<endl;
    
    cin>>operation;
    switch(operation)
    {
        case '+':
           cout<<n1+n2<<endl;
           break;
        case '-':
           cout<<n1-n2<<endl;
           break;
        case '*':
           cout<<n1*n2<<endl;
           break;
        case '/':
           cout<<n1/n2<<endl;
           break;
           case '@':
           cout<<"squre of n1 is="<<n1*n1<<endl;
           cout<<"squre of n2 is="<<n2*n2<<endl;
           break;
    
         default:
         cout<<"please enter onothore operator"<<endl;              
    }
}