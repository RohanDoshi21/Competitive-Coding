#include<iostream>
using namespace std;

int main(){
        int number_of_friends;
        int maximum_height_of_fence;
        cin >> number_of_friends;
        cin >> maximum_height_of_fence;
        int height_of_friend;
        int width_of_road {0};
        for(int i = 1; i <= number_of_friends; i++)
        {
            cin >> height_of_friend;
            if(height_of_friend <= maximum_height_of_fence)
            {
                width_of_road++;
            }
            else{
                width_of_road +=2;
            }
        }
        cout << width_of_road;
    return 0;
}