#include<iostream>
using namespace std;

int main(){
        int test_cases;
        cin >> test_cases;
        for(int i =1 ; i <= test_cases; i++)
        {
            int number;
            cin >> number;
            int number_of_times {0};
            while(number > 1 )
            {
                if(number%6 ==0)
                {
                    number /= 6;
                }
                else
                    number *=2;
                    number_of_times++;
            }
            if(number ==1)
            {
                cout << number_of_times << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    return 0;
}