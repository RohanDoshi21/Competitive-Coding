#include<iostream>
using namespace std;

int main(){
        int number_of_rooms;
        int total_space;
        int currently_filled;
        cin >> number_of_rooms;
        int available_rooms {0};
        for(int i =1; i <= number_of_rooms; i++)
        {
            cin >> currently_filled >> total_space;
            if((total_space - currently_filled) > 1)
            {
                available_rooms++;
            }
            
        }
        cout << available_rooms;
    return 0;
}