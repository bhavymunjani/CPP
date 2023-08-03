#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i;
for(i=0;i<=n;i++)
   {
    if(i%2==0)
    {
    continue;
    }
    cout<<i<<endl;
    
   }
}


