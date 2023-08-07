#include<iostream>
using namespace std;
float moneyrecieved(int money,float factor=1.4)
{
    return(money*factor);
} 
int main()
{
    int money;
    cout<<"enter uour money"<<endl;
    cin>>money;
    cout<<"your current money is a "<< money <<" and you gate "<< moneyrecieved(money) <<" after one year"<<endl;
    cout<<"if you are vip then your money is"<< money << " and you gate" << moneyrecieved(money,1.1) <<" after you get";
}
