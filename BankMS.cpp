#include <bits/stdc++.h>
using namespace std;

class bank{
    private:
       string name,acttype;
       int bal,acno;
    public:
     bank(){
         cout<<"Enter account name-"<<endl;
         getline(cin,name);
         cout<<name<<endl;
         cout<<"Enter account type-"<<endl;
         getline(cin,acttype);
         cout<<acttype<<endl;
         cout<<"Enter account no-"<<endl;
         cin>>acno;
         cout<<acno<<endl;
         cout<<"Enter opening balance-"<<endl;
         cin>>bal;
         cout<<bal<<endl;
     }
     void deposite(int amt)
     {
         bal=bal+amt;
         cout<<"balance after deposite-"<<bal<<endl;
     }
      void withdraw(int amt)
     {
         if(amt>bal)
         cout<<"Insufficient balance"<<endl;
         
         else{
         bal=bal-amt;
         cout<<"balance after withdraw-"<<bal<<endl;}
     }
      void display()
     {
         cout<<"------Account Detail-------"<<endl;
         cout<<"Account Name - "<<name<<endl;
         cout<<"Account Type - "<<acttype<<endl;
         cout<<"Account No - "<<acno<<endl;
         cout<<"Current balance - "<<bal<<endl;
     }
     
};

int main(){
    bank objbank;
    
    cout<<"-------MAIN MENU-------"<<endl;
    cout<<"Press 1 to deposit money"<<endl;
    cout<<"Press 2 to withdraw money"<<endl;
    cout<<"Press 3 to display account detail"<<endl;
    
    int choice,amount,amnt,choice2;
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter amount to deposite - ";
        cin>>amount;
        cout<<amount<<endl;
        objbank.deposite(amount);
    }
    
    else if(choice==2)
    {
        cout<<"Enter amount to withdraw - ";
        cin>>amnt;
        cout<<amnt<<endl;
        objbank.withdraw(amnt);
    }
    else if(choice==3)
    {
        objbank.display();
    }
    else
    {
      return 0;
    }
    
    
}