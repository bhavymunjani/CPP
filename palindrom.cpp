#include<iostream>
using namespace std;

int main()
{
    int n,a;
    cout<<"enter the n"<<endl;
    cin>>n;
    a=n;
    int ans=0;
    while(n!=0)
    {
        int digit=n%10;
        ans=(ans*10)+digit;
        n=n/10;
    }
    cout<<ans<<endl;
    if(ans==a)
    {
        cout<<"palindrom"<<endl;
    }
    else
    {
        cout<<"not palindrom"<<endl;
    }
    return 0;
}