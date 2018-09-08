#include<iostream>
using namespace std;
template <class T>
T Even(T n){
    return (n%2==0)?true:false;
}
int main(){
    int n1;
    bool r;
    cout<<"Enter number to check odd or even"<<endl;
    cin>>n1;
    r=Even(n1);
    if(r==true){
        cout<<"The number is Even";
    }
    else{
        cout<<"The number is Odd";
    }
}
