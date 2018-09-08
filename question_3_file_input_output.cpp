#include<iostream>
using namespace std;
#include<fstream>
int main(){
    char data[100];
    ifstream file;
    file.open("myFile.txt" ,ios::in|ios::out);
    while(!file.eof()){
        file>>data;
        cout<<data<<endl;
    }
    file.close();
}

