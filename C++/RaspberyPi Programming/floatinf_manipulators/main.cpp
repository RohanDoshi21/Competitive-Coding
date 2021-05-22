#include<iostream>
using namespace std;

int main(){
        
    // rouning of in c++
    double num {1234.5678};
    cout << num << endl ; //it rounds to 6th digit precision
    // expontents
    double num1 {123456789.987654321};
    cout << num1 <<endl;
    
    double num8 {12.34};
    cout << num8 << endl;               //12.34
    cout << std::showpoint << num8 << endl;             //12.3400
    return 0;
}