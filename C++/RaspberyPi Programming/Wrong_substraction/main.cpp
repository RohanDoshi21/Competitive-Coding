#include<iostream>
using namespace std;

int main(){
       int number_of_times;
       int number;
       cin >> number >> number_of_times;
       for(int i = 1; i <= number_of_times ; i++)
       {
           if(number % 10 == 0){
               number /= 10;
           }
           else 
               number -= 1;
       }
       cout << number;
    return 0;
}