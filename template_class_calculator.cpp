#include<iostream>
using namespace std;
template <class T>
class Calculator{
    private:
        T n1,n2;
    public:
        Calculator(T n1, T n2){
            this->n1=n1;
            this->n2=n2;
        }
         void displayResult(){
            cout<<"Numbers are: "<<n1<<" and "<<n2<<endl;
            cout<<"Addition is: "<<add()<<endl;
            cout<<"Subtraction is: "<<subtract()<<endl;
            cout<<"Product is: "<<multiply()<<endl;
            cout<<"Division is: "<<divide()<<endl;
         }
         T add(){ return n1+n2;}
         T subtract(){ return n1-n2;}
         T multiply(){ return n1*n2;}
         T divide(){ return n1/n2;}
};
int main(){
    Calculator<int> intCal(2,1);
    Calculator<float> floatCal(2.4,1.2);
    cout<<"Int results: "<<endl;
    intCal.displayResult();
    cout<<"Float results: "<<endl;
    floatCal.displayResult();
    return 0;
}
