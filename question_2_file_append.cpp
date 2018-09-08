#include<iostream>
using namespace std;
#include<fstream>
int main(){
    ofstream file;
    file.open("myFile.txt" ,ios::app);
    file<<"\ntwo\nT\n8\n5.5\nfalse";
    file.close();
}
