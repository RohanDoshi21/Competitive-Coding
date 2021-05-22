#include<iostream>
using namespace std;

int main(){
        int number_of_teams;
        cin >> number_of_teams;
        int home_dress_code[number_of_teams];
        int guest_dress_code[number_of_teams];
        
        for(int i = 0; i< number_of_teams; i++)
        {
            cin >> home_dress_code[i] >> guest_dress_code[i];
        }
        int games_where_host_team_will_use_guest_uniform {0};
        for(int i = 0; i< number_of_teams; i++)
            for(int j=0; j < number_of_teams; j++)
        {
            if(home_dress_code[i] == guest_dress_code[j])
            {
                games_where_host_team_will_use_guest_uniform++;
            }
        }
        cout << games_where_host_team_will_use_guest_uniform;
    return 0;
}