#include<iostream>
using namespace std;

int main()
{
    int mul=1;
    int sum=0;
    int n;
    cout<<"enter the value of n="<<endl;
    cin>>n;
    while(n!=0)
    {
        int digit=n%10;
        mul=mul*digit;
        sum=sum+digit;
        n=n/10;
    }
    int answer=mul-sum;
    cout<<"answer ="<<answer<<endl;
    return 0;
}