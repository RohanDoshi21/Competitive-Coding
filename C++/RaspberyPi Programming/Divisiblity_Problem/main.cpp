#include<iostream>
using namespace std;

int main(){
        long int number_of_problems;
        cin >> number_of_problems;
       long long divident;
       long long divisor;
        long long answer_1;
        for(int i = 1; i <= number_of_problems; i++)
        {   
            answer_1 = 0;
            cin >> divident >> divisor;
           while(divident % divisor !=0)
           {
               answer_1++;
               divident++;
           }
           cout << answer_1 << endl;
        }
    return 0;
}