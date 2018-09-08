#include<iostream>
#include<ctime>
using namespace std;
class priceCalculation{
    private:
        int n;
        int price[5];
    public:
        void display();
        void customerType(int sum[]);
};
int main(){
    priceCalculation P;
    P.display();
}
void priceCalculation::display(){
    int i,j,id=12344;
    char date[10];
    _strdate(date);
    cout<<"Enter numbers of customers: "<<endl;
    cin>>n;
    int s[n];
    for(i=0;i<n;i++){
        s[i]=0;
        cout<<"\nID: "<<id++<<endl;
        cout<<"Date: "<<date<<endl;
        cout<<"Enter 5 price for customer "<<i+1<<": "<<endl;
        for(j=0;j<5;j++){
            cout<<"Price "<<j+1<<"= ";
            cin>>price[j];
            s[i]+=price[j];
        }
    }
    customerType(s);
}
void priceCalculation::customerType(int sum[]){
    int i,id=12345;
    for(i=0;i<n;i++){
        int bD,aD;
        cout<<"\nCustomer id: "<<id++<<endl;
        if(sum[i]>=1500){
            bD=sum[i]*0.25;
            aD=sum[i]-bD;
            cout<<"Total price "<<": "<<sum[i]<<"     "<<"Discount price "<<": "<<bD<<"     "<<"After discount price "<<": "<<aD<<endl;
            cout<<"                                "<<"Gold Customer"<<endl;
        }
        else if(sum[i]>=1000){
            bD=sum[i]*0.15;
            aD=sum[i]-bD;
            cout<<"Total price "<<": "<<sum[i]<<"     "<<"Discount price "<<": "<<bD<<"     "<<"After discount price "<<": "<<aD<<endl;
            cout<<"                                "<<"Bronze Customer"<<endl;
        }
        else if(sum[i]>=500){
            bD=sum[i]*0.10;
            aD=sum[i]-bD;
            cout<<"Total price "<<": "<<sum[i]<<"     "<<"Discount price "<<": "<<bD<<"     "<<"After discount price "<<": "<<aD<<endl;
            cout<<"                                "<<"Silver Customer"<<endl;
        }
        else if(sum[i]<500){
            bD=0;
            cout<<"Total price "<<": "<<sum[i]<<"     "     <<"Discount price "<<": "<<bD<<"     "<<"After discount price "<<": "<<sum[i]<<endl;
            cout<<"                                "<<"Tax Free"<<endl;
        }
    }
}
