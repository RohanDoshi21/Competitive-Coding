#include<iostream>
using namespace std;

int main(){
        int number_of_voters;
        cin >> number_of_voters;
        bool test = false;
        int answer;
        for(int i = 1; i <= number_of_voters ; i++)
        {
            cin >> answer;
            if (answer == 1)
            {
                test = true;
                break;
            }
        }
        if(test == true)
        {
            cout << "HARD";
        }
        else 
        {
            cout << "EASY";
        }
    return 0;
}