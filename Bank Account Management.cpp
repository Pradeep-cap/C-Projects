#include<bits/stdc++.h>

using namespace std;

    void showbalance(double balance) {
        cout<<"You bank balance : $"<<balance<<endl;
        
    }
    double deposit() {
        double amount=0;
        cout<<"Enter the amount : $";
        cin>>amount;
        if(amount>0) {
            
            return amount;
        }
        else {
            cout<<"that is not a valid amount";
            return 0;
        }
    }
    double withdraw(double balance) {
        double amount=0;
        cout<<"enter your withdrawal amount : $";
        cin>>amount;
        if(amount>balance) {
            cout<<"funds not available \n";
            return 0;
        }
        else if(amount<0) {
            cout<<"that is not a valid amount\n";
            return 0;
        }
        else {
            return amount;
        }
    }
    int main() {
        double balance=0;
        int choice=0;
        do {
            
        
            cout<<"**********************\n";
            
            cout<<"  1) Check bank balance: \n ";
            cout<<"  2) deposit money:    \n";
            cout<<"  3) withdraw money:   \n";
            cout<<"  4) Exit  \n";
            cout<<"***   Enter your choice:   ";
            cin>>choice;
            switch(choice) {
                case 1:
                    showbalance(balance);
                    break;
                case 2:
                    balance=balance+deposit();
                    showbalance(balance);
                    break;
                case 3:
                    balance=balance-withdraw(balance);
                    showbalance(balance);
                    break;
                case 4:
                    cout<<"Thanks for visiting \n";
                    break;
                default:
                    cout<<"Invalid choice\n";
            }
        }while(choice!=4) ;   
        
        
    }