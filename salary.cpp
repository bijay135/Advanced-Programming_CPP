#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int i, salary[12],sum=0, tax;
    for(i=0;i<12;i++){
        cout<<"Enter the  " <<i+1<< " salary"<<"   ";
        cin>>salary[i];
        sum +=salary[i];
    }
    cout<<"Total salary "<<sum<< " "<<endl;
    if(sum<15000){
        tax=.15 * sum;
    }
    else if ( sum >=15000 && sum < 30000){
        tax= (sum-15000)*.18 + 2250;
    }
    else if ( sum >=30000 && sum < 50000){
        tax= (sum-30000)*.20 + 5500;
    }
    else{
        tax= (sum-50000)*.35 + 10900;
    }
    cout<< "tax= " <<tax<< " " ;
}

