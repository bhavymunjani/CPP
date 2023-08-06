#include<iostream>
using namespace std;
struct book
{
    int bookid;
    char booktitle[20];
    float price;
    void input()
    {
        cout<<"enter the bookid ,book title and price="<<endl;
        cin>>bookid>>booktitle>>price;
    }
    void display()
    {
        cout<<bookid<<" "<<booktitle<<" "<<price;
    }
};


book input();
void display(book);
int main()
{
    book b1;
    b1.input();
    b1.display();

    book b2;
    b2.input();
    b2.display();
}