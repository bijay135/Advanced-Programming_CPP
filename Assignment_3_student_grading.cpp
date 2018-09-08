#include<iostream>
using namespace std;
class GradedActivity{
    protected:
        double score;
    public:
        GradedActivity(){
            score = 0.0;
        }
        GradedActivity(double s){
            score = s;
        }
        void setScore(double s){
            score =s;
        }
        double getScore() const{
            return score;
        }
        virtual char getLetterGrade() const{
        }
};
class PassFailActivity:public GradedActivity{
    protected:
        double minPassingScore;
    public:
        PassFailActivity(){
            minPassingScore = 0.0;
        }
        PassFailActivity(double p){
            minPassingScore = p;
        }
        void setminPassingScore(double p){
            minPassingScore = p;
        }
        double getminPassingScore(){
            return minPassingScore;
        }
        virtual char getLetterGrade() const{
            char grade;
            if(score>minPassingScore || score == minPassingScore)
                return (grade='P');
            else
                return (grade='F');
        }
        void display(){
            cout<<"The score is: "<<score<<endl;
            cout<<"The grade is: "<<getLetterGrade()<<endl;
        }
};
int main(){
    PassFailActivity s1;
    s1.setminPassingScore(35);
    s1.setScore(90);
    s1.display();
    PassFailActivity s2;
    cout<<endl;
    s2.setminPassingScore(35);
    s2.setScore(30);
    s2.display();
}
