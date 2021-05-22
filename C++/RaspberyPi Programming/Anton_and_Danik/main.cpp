#include<iostream>
#include<string>
using namespace std;

int main(){
        int number_of_games;
        cin >> number_of_games;
        string games;
        int Anton_games_wins {0};
        int Danik_game_wins {0};
        cin >> games;
        for(int i = 0 ; i < games.length() ; i++)
        {
            if(games[i]=='A')
            {
                Anton_games_wins++;
            }
            else{
                Danik_game_wins++;
            }
        }
        if(Anton_games_wins > Danik_game_wins)
        {
            cout << "Anton";
        }
        else if (Danik_game_wins > Anton_games_wins)
        {
            cout << "Danik";
        }
        else {
            cout << "Friendship";
        }
    return 0;
}