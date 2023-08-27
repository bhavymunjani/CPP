#include<iostream>
using namespace std;

int main()
{
    char k='A';
    int n=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        { 
            if(j<=i)
            {
                if(i%2==0)
                {
                    cout<<k;
                    k++;
                }
                else
                {
                    cout<<n;
                    n++;
                }
            }
            else
            {
                cout<<" ";
            }
           
        }
        cout<<endl;
    }
    return 0;
}