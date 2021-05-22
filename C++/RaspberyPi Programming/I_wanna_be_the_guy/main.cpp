#include<iostream>
using namespace std;

int main(){
        int total_levels;
        cin >> total_levels;
        bool level[total_levels];
        int levels_of_x;
        int levels_of_y;
        int level_passed;
        for(int i = 0; i < total_levels; i++)
        {
            level[i] = false;
        }
        cin >> levels_of_x;
        for(int i =0 ; i < levels_of_x; i++)
        {
            cin >>  level_passed;
            level[level_passed-1] = true;
        }
        cin >> levels_of_y;
        for(int i = 0; i < levels_of_y; i++)
        {
            cin >> level_passed;
            level[level_passed-1] = true;
        }
        int count_1 {0};
        for(int i = 0; i < total_levels; i++)
        {
            if(level[i] == true)
            {
                count_1++;
            }
        }
        if(count_1 == total_levels)
        {
            cout << "I become the guy.";
        }
        else
            cout << "Oh, my keyboard!";
    return 0;
   
}