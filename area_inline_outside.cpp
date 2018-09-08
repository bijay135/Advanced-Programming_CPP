#include<iostream>
#include<cmath>
using namespace std;
class Area{
    public:
        double a,b,c;
        double s;
    public:
        void sP(){
            s=((a+b+c)/2);
            cout<<"The semi perimeter is: "<<s<<endl;
        }
        void A();
};
void Area::A(){
        float x,y;
        x=s*(s-a)*(s-b)*(s-c);
        y=sqrt(x);
        cout<<"The area is: "<<y<<endl;
    }
int main(){
    Area t;
    cout<<"Enter value of a: "<<endl;
    cin>>t.a;
    cout<<"Enter value of b: "<<endl;
    cin>>t.b;
    cout<<"Enter value of c: "<<endl;
    cin>>t.c;
    t.A();
    t.sP();
    return 0;
}
