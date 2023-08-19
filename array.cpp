#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int i;
    int array[n];
    cout<<"enter the elements of array";
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"your array is";
     for(i=0;i<n;i++)
    {
        cout<<array[i]<<" "<<endl;
    }





    return 0;
}