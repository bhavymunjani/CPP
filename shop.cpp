#include<iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void initcounter(void){counter=0;}
    void setprice(void);
    void displayprice(void);
};

void shop :: setprice(void)
{
    cout<<"enter the id of your item no"<<" "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enter the price of your item"<<" "<<counter+1<<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop :: displayprice(void)
{
    for(int i=0;i<counter;i++)
    {
        cout<<"the price of your item with id "<< itemid[i] <<" is "<<itemprice[i]<<endl;
    }
}

int main()
{
    shop mall;
    mall.initcounter();
    mall.setprice();
    mall.setprice();
    mall.setprice();
    mall.displayprice();
    return 0;
}