#include<iostream>
#include<string>
using namespace std;

int main(){
       string fixed_1 = "I hate ";
       string fixed_2 = "I love ";
       string fixed_3 = "that ";
       string fixed_4 = "it";
       int number_of_repetions;
       cin >> number_of_repetions;
       for(int i = 1; i<= number_of_repetions; i++)
       {
           if(i%2 == 0)
           {
               cout << fixed_2;
           }
           else 
               cout << fixed_1;
            if (i != number_of_repetions)
                cout << fixed_3;
       }
       cout << fixed_4;
    return 0;
}