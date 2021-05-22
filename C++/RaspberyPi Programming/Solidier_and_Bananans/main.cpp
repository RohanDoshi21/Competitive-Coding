#include<iostream>
using namespace std;

int main(){
        int number_of_bananas;
        int cost_of_bananas;
        int intial_balance;
        cin >> cost_of_bananas >> intial_balance >> number_of_bananas;
        int total_cost = 0;
        for(int i =1 ; i <= number_of_bananas; i++)
        {
            total_cost += cost_of_bananas*i;
        }
    if((total_cost - intial_balance) >= 0)
        cout << total_cost - intial_balance;
    else 
        cout << "0";
    return 0;
}