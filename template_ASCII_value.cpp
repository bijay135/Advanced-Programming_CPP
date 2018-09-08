#include<iostream>
using namespace std;
template <class T>
T ascii(T c){
    int n;
    return(n=c);
}
int main(){
    char n1;
    int r;
    cout<<"Enter character to find ASCII value"<<endl;
    cin>>n1;
    r=ascii(n1);
    cout<<"The ASCII value of "<<n1<<" is "<<r<<endl;
}
