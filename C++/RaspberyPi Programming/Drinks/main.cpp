#include<iostream>
using namespace std;

int main(){
       int number_of_drinks;
       cin >> number_of_drinks;
       int volume[number_of_drinks];
       for(int i = 0; i < number_of_drinks; i++)
       {
           cin >> volume[i];
       }
       long double total_volume{0};
       for(int i = 0; i <  number_of_drinks; i++)
       {
           total_volume += volume[i];
       }
       total_volume /= number_of_drinks;
       cout << total_volume;
    return 0;
}