#include<iostream>
using namespace std;
 class Binary 
 { 
     private:
     string s;
     public:
     void read(void);
    void chk_bin(void);
     void ones_compliment(void);
     void display(void);
 };

 void Binary :: read(void)
 {
     cout<<"enter the binary value"<<endl;
     cin>>s;
 }
 void Binary :: chk_bin(void)
 {
     for(int i=0;i<s.length();i++)
     {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
         cout<<"incorrect binary number"<<endl;
         exit (0);
        }
     }
 }
 void Binary :: ones_compliment(void)
 {
    
     for(int i=0;i<s.length();i++)
     {
         if(s.at(i)=='0')
         {
             s.at(i)='1';
         }
         else
         {
             s.at(i)='0';
         }
     }
 }

 void Binary :: display(void)
 {
     for(int i=0;i<s.length();i++)
     {
         cout<<s.at(i);
     }
     cout<<endl;
 }
 int main()
 {
    Binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
 }