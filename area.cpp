#include<iostream>
using namespace std;
float area(int);
int AREA(int,int);
int main()
{
    int r;
    cout<<"enter the redius=";
    cin>>r;
    float Area=area(r);
    int l,b,a;
    cout<<"\nArea of the circle is"<<Area;
    cout<<"\nenter the value of l and b";
    cin>>l>>b;
    a=AREA(l,b);
    cout<<"\nArea of thr rectangle is "<<a;

}
float area(int R)
{
    return(3.14*R*R);
}
int AREA(int L,int B)
{
    return(L*B);
}