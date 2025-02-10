#include<bits/stdc++.h>
using namespace std;
int digit(int digit) {
    return digit%10+(digit/10%10);
}
int getevensum(string card){
    int sum=0;
    for(int i=card.size()-2;i>=0;i-=2) {
        sum=sum+digit((card[i]-'0')*2);
    }
    return sum;
}
int getoddsum(string card) {
    int sum=0;
    for(int i=card.size()-1;i>=0;i-=2) {
        sum=sum+(card[i]-'0');
    }
    return sum;
}
int main() {
    string card;
    int result;
    cout<<"*******************************\n";
    cout<<"Enter the credit card Number without space : ";
    cin>>card;
    result=getoddsum(card)+getevensum(card);
    if(result%10==0) {
        cout<<card<<"-->>This card is valid\n";
    }
    else {
        cout<<card<<"-->>This card is not valid\n";
    }
}