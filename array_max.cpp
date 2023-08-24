#include<iostream>
using namespace std;
int get_max(int a[],int size)
{
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}

int get_min(int arr[],int size)
{
    int Min=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<Min)
        {
            Min=arr[i];
        }
    }
    return Min;
}

void print_array(int a[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a[5]={10,39,26,38,45};
    print_array(a,5);
    cout<<get_max(a,5)<<endl; 
    cout<<get_min(a,5)<<endl;  
    return 0;
}