#include <iostream>
using namespace std;

int main() {
        int weight_max;
        cin >> weight_max;
        int weight_adult = 75;
        int weight_child = 30;
        int adult_no;
        cin >> adult_no;
        int child_no;
        cin >> child_no;
    cout << (weight_max >= (weight_adult * adult_no) + (weight_child * child_no) ? "Boat is stable" : "Boat will drown");
    return 0;
}
