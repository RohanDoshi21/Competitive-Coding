#include<iostream>
using namespace std;

int main(){
       int number_of_friends;
       cin >> number_of_friends;
       int number_of_presents[number_of_friends+1];
       //int number_of_presents_to_be_given[number_of_friends];
       for(int i = 1; i <= number_of_friends; i++)
       {
           cin >> number_of_presents[i];
       }
       for(int i = 1; i <= number_of_friends; i++)
       {
           cout << number_of_presents[number_of_presents[i]] << endl;
       }
    return 0;
}