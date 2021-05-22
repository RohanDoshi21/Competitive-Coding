#include<iostream>
using namespace std;

int main(){
       int weigth_Limak , weigth_Bob;
       cin >> weigth_Limak >> weigth_Bob;
       int number_of_years {0};
       while (weigth_Limak <= weigth_Bob)
       {
           weigth_Limak *= 3;
           weigth_Bob *= 2;
           number_of_years++;
       }
       cout << number_of_years;
       
    return 0;
}