#include<iostream>
using namespace std;
template <class T>
void swapValues(T a1,T a2){
    T temp;
    temp=a1;
    a1=a2;
    a2=temp;
    cout<<"After swap: "<<a1<<" "<<a2<<endl;
}
int main(){
    int n1,n2;
    char c1,c2;
    cout<<"Enter two integer"<<endl;
    cin>>n1>>n2;
    cout<<"Before swap: "<<n1<<" "<<n2<<endl;
    swapValues(n1,n2);

    cout<<"Enter two character"<<endl;
    cin>>c1>>c2;
    cout<<"Before swap: "<<c1<<" "<<c2<<endl;
    swapValues(c1,c2);
}
