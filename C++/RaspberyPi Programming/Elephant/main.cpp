#include<iostream>
using namespace std;

int main(){
       int coordinate_of_house;
       cin >> coordinate_of_house;
       int number_of_steps {0};
       if(coordinate_of_house != 0){
       while(coordinate_of_house > 5)
       {
           coordinate_of_house -= 5;
           number_of_steps++;
       }
       cout << number_of_steps + 1;
       
       }
       else 
           cout << 0;
    return 0;
}