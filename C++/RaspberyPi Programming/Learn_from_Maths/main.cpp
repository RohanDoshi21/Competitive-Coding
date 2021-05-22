#include<iostream>
using namespace std;

int main(){
        int number_in;
        cin >> number_in;
        if(number_in%2 == 0)
        {
            cout << number_in-4 << endl << "4";
        }
        else
            cout << number_in-9<< endl << "9";
    return 0;
}