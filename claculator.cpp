#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main(){
    int choice,a,b,result;
    cout<<"###Simple Calculator###"<<endl;
    cout<<"1. Add 2. Subtract 3. Multiply"<<endl;
    cout<<"4. Divide 5. Power 6. Quit"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Enter two numbers"<<endl;
            cin>>a>>b;
            result = a+b;
            cout<<"The final value is: "<<result<<endl;
        break;
        case 2:
            cout<<"Enter two numbers"<<endl;
            cin>>a>>b;
            result = a-b;
            cout<<"The final value is: "<<result<<endl;
        break;
        case 3:
            cout<<"Enter two numbers"<<endl;
            cin>>a>>b;
            result = a*b;
            cout<<"The final value is: "<<result<<endl;
        break;
        case 4:
            cout<<"Enter two numbers"<<endl;
            cin>>a>>b;
            result = a/b;
            cout<<"The final value is: "<<result<<endl;
        case 5:
            cout<<"Enter two numbers"<<endl;
            cin>>a>>b;
            result = pow(a,b);
            cout<<"The final value is: "<<result<<endl;
        break;
        case 6:
            exit(0);
        break;
        default:
            cout<<"Incorrect input! Try again"<<endl;
    }
}
