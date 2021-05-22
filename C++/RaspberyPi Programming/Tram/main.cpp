#include<iostream>
using namespace std;

int main(){
       int number_of_stops;
       cin>> number_of_stops;
       int total_people_on_tram=0;
       int a[1000];
       a[0] = 0;
       for(int i = 1; i <= number_of_stops; i++)
       {
           int total_in = 0 , total_out {0}; 
           cin>> total_out >> total_in;
           total_people_on_tram += (total_in - total_out);
           a[i] = total_people_on_tram;
       }
       int max {0};
       for(int i=1 ; i<= number_of_stops; i++)
       {
           if(a[i] > max){
               max = a[i];
           }
       }
       cout << max;
    return 0;
}