#include<iostream>
using namespace std;
class Student{
    private:
        string name;
        int roll,marks;
        float percent;
    public:
        void putDetails(string name, int roll, int marks){
            this->name=name;
            this->roll=roll;
            this->marks=marks;
        }
         void getDetails(){
            percent=(float)marks/5;
            cout<<"Name: "<<name<<", Roll Number: "<<roll<<", Total: "<<marks<<", Percentage: "<<percent<<"%"<<endl;
        }
};
int main(){
    Student S;
    string n;
    int r,m;
    cout<<"Enter name: "<<endl;
    getline(cin,n);
    cout<<"Enter roll no: "<<endl;
    cin>>r;
    cout<<"Enter total marks out of 500: "<<endl;
    cin>>m;
    S.putDetails(n,r,m);
    S.getDetails();
}
