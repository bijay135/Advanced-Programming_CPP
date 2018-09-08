#include<iostream>
using namespace std;
class Swap{
    public:
        int a,b;
};

int main(){
    Swap S;
    cout<<"Enter first variable"<<endl;
    cin>>S.a;
    cout<<"Enter first variable"<<endl;
    cin>>S.b;
    cout<<"Before swapped values are "<<S.a<<" "<<S.b<<endl;
    S.a=S.a-S.b;
    S.b=S.a+S.b;
    S.a=S.b-S.a;
    cout<<"After swapped values are "<<S.a<<" "<<S.b<<endl;
}
