#include<iostream>
using namespace std;
int main()
{
    int date;
    cout<<"enter the date";
    cin>>date;
    for(date=1;date<=30;date++)
    {
        if(date%2==0)
        {
            break;
        }
        cout<<"go out today"<<endl;
    }
    
}
