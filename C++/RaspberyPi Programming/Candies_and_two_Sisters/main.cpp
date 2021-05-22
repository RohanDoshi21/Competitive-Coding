#include<iostream>
using namespace std;

int main(){
        int number_of_cases;
        cin >> number_of_cases;
        for(int i = 1; i <= number_of_cases; i++)
        {
            int total_on_of_candies;
            cin >> total_on_of_candies;
            if(total_on_of_candies == 1 || total_on_of_candies == 0)
            {
                cout << 0 << endl;
            }
            else if( total_on_of_candies % 2 ==0 ){
                cout << total_on_of_candies/2 -1 << endl;
                
            }
            else cout << total_on_of_candies/2 << endl;
        }
    return 0;
}