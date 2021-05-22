#include<iostream>
using namespace std;

int main(){
        long long number;
        cin >> number;
        long long number_of_notes {0};
       while(number / 100 != 0)
       {
           number_of_notes++;
           number -= 100;
       }
       while(number / 20 != 0)
       {
           number_of_notes++;
           number -= 20;
       }
        while(number / 10 != 0)
       {
           number_of_notes++;
           number -= 10;
       }
        while(number / 5 != 0)
       {
           number_of_notes++;
           number -= 5;
       }
        cout << number_of_notes + number;
    return 0;
}