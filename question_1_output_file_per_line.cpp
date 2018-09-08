#include<iostream>
using namespace std;
#include<fstream>
int main(){
    ofstream file;
    file.open("myFile.txt");
    file<<"one\nT\n8\n2.5\ntrue";
    file.close();
}
