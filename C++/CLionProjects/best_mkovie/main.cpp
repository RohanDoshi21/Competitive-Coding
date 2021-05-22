#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int no_movies;
        cin >> no_movies;
        int free_space;
        cin >> free_space;
        int best_movie = -1;
        for (int i = 0; i < no_movies; ++i) {
            int rating, space;
            cin >> space >> rating;
            if(space <= free_space){
                if (rating >= best_movie)
                    best_movie = rating;
            }
        }
        cout << best_movie << endl;
    }
    return 0;
}
