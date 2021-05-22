#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
        double num {1234.56};
        string Hello = "Hello";
        cout << setfill('-') <<setw(10) << num << Hello << endl;
    return 0;
}