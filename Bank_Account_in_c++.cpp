#include <iostream>
#include <string>
using namespace std;

class BankAccount{
string accountNumber;
string accountHoldername;
double balance;
public:
BankAccount(string accnum,string accHolderName, double initialBalance)
{
accountNumber=accnum;
accountHoldername=accHolderName;
balance=initialBalance;
}
void deposit(double ammount)
{
    balance+=ammount;
}
void withdraw(double ammount)
{
    if(ammount>balance)
    {
        cout<<"The balance is insifficient "<<endl;
    }
    else if(ammount<0)
    {
        cout<<"Error "<<endl;
    }
    else
    balance-=ammount;

}
void display()
{
    cout<<"Account Number "<<accountNumber<<endl;
    cout<<"Account Holders Name "<< accountHoldername<<endl;
    cout<<"THe Current Balance is "<<balance<<endl;
}
};

int main(){

string accnu;
string acchn;
double inb;
char choice;
char dep;
char cho;
do{
double amm;
cout<<"Enter your account number please : ";
cin>>accnu;
cout<<"\nEnter The Holders name please : ";
cin>>acchn;
cout<<"\nEnter your initial balance : ";
cin>>inb;
BankAccount account(accnu,acchn,inb);
do{
cout<<"If you want to deposite then type D or d and if want to withdraw then type 'w' or 'W' ";
cin>>dep;
if (dep=='D'||dep=='d')
{
    cout<<"Enter the ammount which is to be deposited : ";
    cin>>amm;
    account.deposit(amm);
    account.display();
}
else if(dep=='w'||dep=='W')
{
    cout<<"Enter the ammount to be withdrawn : ";
    cin>>amm;
    account.withdraw(amm);
      account.display();
}
cout<<"If You want to do another transaction from the current account if yes then type 'y' or 'Y' : ";
cin>>cho;
}
while(cho=='y'||cho=='Y');
cout<<"If you want to try again then type Y or y : ";
cin>>choice;
}
while (choice=='y'||choice=='Y');
return 0;
}