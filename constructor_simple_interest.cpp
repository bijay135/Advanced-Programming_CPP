#include<iostream>
using namespace std;
class simpleInterest{
    private:
        float p,t,r;
        float sI;
    public:
    simpleInterest(){
    }
    simpleInterest(float p,float t,float r){
        p=p;
        t=t;
        r=r;
    }
    float Interest(){
        sI=(p*t*r)/100;
        return sI;
    }
};
int main(){
    simpleInterest I;
    float r;
    simpleInterest(5000,2,10);
    r=I.Interest();
    cout<<"The simple interest is: "<<r;
}
