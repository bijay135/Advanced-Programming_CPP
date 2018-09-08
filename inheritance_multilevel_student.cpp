#include<iostream>
using namespace std;
class student{
    protected:
        string name;
        int roll;
    public:
        student(){
        }
        S(string name, int roll){
            this->name=name;
            this->roll=roll;
        }
};

class marks:public student{
    protected:
        float sessional1,sessional2;
    public:
        marks(){
        }
        M(float sessional1, float sessional2){
            this->sessional1=sessional1;
            this->sessional2=sessional2;
        }
};

class result:public marks{
    protected:
        float total;
    public:
        result(){
        }
        void display(){
            total=sessional1+sessional2;
            cout<<"Name: "<<name<<endl;
            cout<<"Roll: "<<roll<<endl;
            cout<<"Total marks: "<<total<<endl;
        }
};

int main(){
    string a;
    int b;
    float c,d;
    cout<<"Enter your name: "<<endl;
    getline(cin,a);
    cout<<"Enter your roll: "<<endl;
    cin>>b;
    cout<<"Enter marks of Sessional 1: "<<endl;
    cin>>c;
    cout<<"Enter marks of Sessional 2: "<<endl;
    cin>>d;
    result r1;
    r1.S(a,b);
    r1.M(c,d);
    r1.display();
}
