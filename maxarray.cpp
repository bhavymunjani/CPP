#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int i;
    int array[n];
    for(i=0;i<n;i++)
    {
        cout<<"array["<<i<<"]"<<endl;
        cin>>array[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(i=0;i<n;i++)
    {
        
        
            maxno=max(array[i],maxno);
            minno=min(array[i],minno);        
    
    }
    cout<<"maximum no of array is"<<maxno<<endl;
    cout<<"minimum no of array is"<<minno<<endl;
}