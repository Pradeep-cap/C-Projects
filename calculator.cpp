#include<iostream>

using namespace std;

        

int main() {
    double number1,number2;
    char operation;
    double result;
    cout<<"***********************"<<endl;
    cout<<"******Calculator*******"<<endl;
    cout<<"Enter the Operation : ( +,-,/,*)  :  " ;
    cin>>operation;
    cout<<endl;
    cout<<"Enter the First Number : ";
    cin>>number1;
    cout<<endl;
    cout<<"Enter the Second Number : ";
    cin>>number2;
    cout<<endl;
    switch(operation){
        case '+':
            result=number1+number2;
            cout<<"The result is : "<<result;
            break;
            
        case '-':
             result=number1-number2;
             cout<<"The result is : "<< result;
             break;
        case '*':
             result=number1*number2;
             cout<<"The result is : "<< result;
             break;
        case '/':
             result=number1/number2;
             cout<<"The result is : "<< result;
             break;
        default:
            cout<<"Invalid operation or number"<<endl;
            break;
    }
    

}