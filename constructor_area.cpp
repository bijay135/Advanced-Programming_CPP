#include<iostream>
#include<cmath>
using namespace std;

class Triangle{
    private:
        double a,b,c;
        double s;
    public:
        Triangle(){
            cout<<"Object is being created.\n";
        }
    Triangle(double n1,double n2,double n3){
        a=n1;
        b=n2;
        c=n3;
    }
    Triangle(const Triangle &t1){
        cout<<"Copy constructor..\n";
        a=t1.a;
        b=t1.b;
        c=t1.c;
    }
    double semiperimeter(){
        s=(a+b+c)/2;
        return s;
    }
    ~Triangle(){
            cout<<"Object is being deleted\n";
    }
    void area();
};

void Triangle::area(){
    double area;
    double s=semiperimeter();
    area=(double)sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Semi-perimeter of triangle is "<<s<<endl;
    cout<<"Area of Triangle is "<<area<<endl;

}

int main(){
    int a,b,c;

    cout<<"Enter length of three sides of Triangle:\n";
    cin>>a>>b>>c;
    Triangle t5;
    Triangle t1(a,b,c);
    t1.area();
    Triangle t2=t1;
    t2.area();
    return 0;
}

