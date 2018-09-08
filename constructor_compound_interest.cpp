#include<iostream>
#include<cmath>
using namespace std;

class Interest{

private:
    float p,t,r;
    float cI;
public:
    Interest(){
    }
    Interest(float a,float b,float c){
        p=a;
        t=b;
        r=c;
    }
    float compoundInterest(){
        cout<<pow((1+r/100),t)<<endl;
        cI=(p*(pow((1+r/100),t)-1));
        return cI;
    }
};

int main(){

    Interest i(20000,4,10);
    cout<<"compound interest= "<<i.compoundInterest();

}
