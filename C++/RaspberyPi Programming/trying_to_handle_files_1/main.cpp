#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
        string string_1;
        ifstream in_file {"../text.txt"};
    if (!in_file.is_open()){
        cout << "File does not exist"<<endl;
        return 0;
    }
    getline(in_file, string_1);
    cout << string_1 << endl;
    in_file.close();
    return 0;
}