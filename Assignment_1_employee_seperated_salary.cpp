#include<iostream>
using namespace std;
class Employee{
    private:
        int paycode;
        float weeklySalary,hoursWorked,hoursSalary,grossWeeklySales,pieceNumber,pieceSalary;
        float manager,hourlyWorkerPay,commissionWorkerPay,pieceWorkerPay;
        int c1=0,c2=0,c3=0,c4=0;
    public:
        void calculateSalary();
};

 void Employee::calculateSalary(){
    cout<<"\nEnter paycode (-1 to end): ";
    cin>>paycode;
    if(paycode==-1){
        cout<<"\nTotal number of Managers paid            : "<<c1<<endl;
        cout<<"Total number of Hourly Workers paid      : "<<c2<<endl;
        cout<<"Total number of Commission Workers paid  : "<<c3<<endl;
        cout<<"Total number of piece Workers paid       : "<<c4<<endl;
    }
    else{
        switch(paycode){
            case 1:
                cout<<"Manager selected."<<endl;
                cout<<"Enter weekly salary: ";
                cin>>weeklySalary;
                cout<<"Manager pay is "<<weeklySalary<<endl;
                c1++;
                calculateSalary();
            break;
            case 2:
                cout<<"Hourly worker selected."<<endl;
                cout<<"Enter hourly salary: ";
                cin>>hoursSalary;
                cout<<"Enter total hours worked: ";
                cin>>hoursWorked;
                hourlyWorkerPay=hoursWorked>40?(hoursWorked-40)*1.5*hoursSalary+hoursSalary*40:hoursSalary*hoursWorked;
                cout<<"Hourly Worker's pay is "<<hourlyWorkerPay<<endl;
                c2++;
                calculateSalary();
            break;
            case 3:
                cout<<"Commission worker selected."<<endl;
                cout<<"Enter gross weekly sales: ";
                cin>>grossWeeklySales;
                commissionWorkerPay=250+0.057*grossWeeklySales;
                cout<<"Commission Worker's pay is "<<commissionWorkerPay<<endl;
                c3++;
                calculateSalary();
            break;
            case 4:
                cout<<"Piece worker selected."<<endl;
                cout<<"Enter number of pieces: ";
                cin>>pieceNumber;
                cout<<"Enter wage per piece: ";
                cin>>pieceSalary;
                pieceWorkerPay=pieceNumber*pieceSalary;
                cout<<"Piece Worker's pay is "<<pieceWorkerPay<<endl;
                c4++;
                calculateSalary();
            break;
            default:
                cout<<"\nWrong paycode try again !!!"<<endl;
                calculateSalary();
        }
    }
 }

 int main(){
    Employee E;
    E.calculateSalary();
 }
