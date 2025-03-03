#include<iostream>
#include<string>
using namespace std;
int main() {
    double dollar;
    int choice;
    double currency;
    do {
       
        cout<<"\n";
        cout<<"*******************************************"<<"\n";
        cout<<"Enter the dollar amount you want to convert : ";
        cin>>dollar;
        cout<<endl;
        cout<<"Enter your choice of conversion"<<endl;
        cout<<"1.  USD to Rupee"<<endl;
        cout<<"2.  USD to Pounds"<<endl;
        cout<<"3.  USD to Euro"<<endl;
        cout<<"4.  USD to AUS dollar"<<endl;
        cout<<"5.  ***EXIT***";
        cout<<endl;
        
        cin>>choice;
        cout<<endl;
        
        
            
       
            switch(choice) {
                case 1:
                    currency=dollar*87.7;
                     cout<<currency<<" Rupees";
                    break;
                case 2:
                    currency=dollar*0.73;
                    cout<<currency<<" Pounds";
                    break;
                case 3:
                    currency=dollar*0.86;
                    cout<<currency<<" Euro";
                    break;
                case 4:
                    currency=dollar*1.61;
                    cout<<currency<<" AUS Dollar";
                    break;
               case 5:
                    cout<<"   ***EXIT***   ";
                    break;
                default :
                    cout<<"Enter a valid currency"<<endl;
            }
    }while(choice!=5);
    
   
}