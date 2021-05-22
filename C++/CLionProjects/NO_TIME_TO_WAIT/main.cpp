#include <iostream>
using namespace std;
int main() {
    int time_zones;
    cin >> time_zones;
    int hours_needed;
    cin >> hours_needed;
    int hours_remaining;
    cin >> hours_remaining;
    bool success = false;
    int extra = hours_needed-hours_remaining;
    for (int i = 0; i < time_zones; ++i) {
        int time_zone;
        cin >> time_zone;
        if(time_zone >= extra){
            success = true;
            break;
        }
    }
    if (success){
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}
