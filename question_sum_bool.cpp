#include<iostream>
using namespace std;
bool even(int m){
    if(m%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int F(int m,int n){
    int sum=0;
    if(even(m))
        sum=n;
    while(m>1){
        m=m/2;
        n=2*n;
        if(even(m))
            sum+=n;
    }
    return sum;
}
int main(){
    cout<<F(4,7)<<endl;
    cout<<F(7,4)<<endl;
    cout<<F(8,2)<<endl;
    cout<<F(3,8)<<endl;
    cout<<F(8,3)<<endl;
}
