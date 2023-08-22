#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the binary value="<<endl;
    cin>>n;
    int count=0;
    while(n!=0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    cout<<"number of 1's="<<count<<endl;
    return 0;
}